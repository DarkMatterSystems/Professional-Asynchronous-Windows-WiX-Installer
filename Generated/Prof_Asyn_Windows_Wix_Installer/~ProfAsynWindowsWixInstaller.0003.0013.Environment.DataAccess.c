
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Environment Data Access */

/* Make Entity Object */

adm_ent_environment_typ * adm_make_object_environment(
    adm_sta_environment_typ status)
{
    adm_ent_environment_typ * ent_environment;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_environment");
    #endif

    if (adm_entity_system.ent_environment.dead_list_head != NULL) {

        ent_environment = adm_entity_system.ent_environment.dead_list_head;

        if (adm_entity_system.ent_environment.dead_list_head == ent_environment) {

            adm_entity_system.ent_environment.dead_list_head = ent_environment->next;

        } else {

            (ent_environment->back)->next = ent_environment->next;
        }

        if (adm_entity_system.ent_environment.dead_list_tail == ent_environment) {

            adm_entity_system.ent_environment.dead_list_tail = ent_environment->back;

        } else {

            (ent_environment->next)->back = ent_environment->back;
        }

    } else {

        ent_environment = (adm_ent_environment_typ*)adm_allocate_memory(sizeof(adm_ent_environment_typ));
    }

    ent_environment->identity = ++adm_entity_system.ent_environment.tote;

    ent_environment->unique  = FALSE;
    ent_environment->deleted = FALSE;
    ent_environment->marked  = FALSE;
    ent_environment->status  = status;

    ent_environment->atb_id = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);
    ent_environment->atb_name = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);
    ent_environment->atb_value = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);

    ent_environment->rel_writing_component_head = NULL;
    ent_environment->rel_writing_component_tail = NULL;

    ent_environment->back = NULL;
    ent_environment->next = NULL;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_environment");
    #endif

    return (ent_environment);
}


/* Bind Entity Object */

void adm_bind_object_environment(
    adm_ent_environment_typ * ent_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_environment");
    #endif

    adm_object_existent_environment(
        ent_environment,
        error_file,
        error_line,
        error_rank);

    if (adm_entity_system.ent_environment.live_list_head == NULL) {

        ent_environment->back = NULL;

        adm_entity_system.ent_environment.live_list_head = ent_environment;

    } else {

        ent_environment->back = adm_entity_system.ent_environment.live_list_tail;

        (adm_entity_system.ent_environment.live_list_tail)->next = ent_environment;
    }

    ent_environment->next = NULL;

    adm_entity_system.ent_environment.live_list_tail = ent_environment;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_environment");
    #endif
}


/* Kill Entity Object */

void adm_kill_object_environment(
    void * source_object,
    adm_ent_environment_typ * ent_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_environment");
    #endif

    adm_object_existent_environment(
        ent_environment,
        error_file,
        error_line,
        error_rank);

    if (source_object != ent_environment) {

        if (ent_environment->rel_writing_component_head != NULL) {

            adm_error_report(
                ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
                error_file, error_line, error_rank,
                "Environment",
                ent_environment->identity,
                "Writing",
                "Component");
        }

        if (adm_entity_system.ent_environment.live_list_head == ent_environment) {

            adm_entity_system.ent_environment.live_list_head = ent_environment->next;

        } else {

            (ent_environment->back)->next = ent_environment->next;
        }

        if (adm_entity_system.ent_environment.live_list_tail == ent_environment) {

            adm_entity_system.ent_environment.live_list_tail = ent_environment->back;

        } else {

            (ent_environment->next)->back = ent_environment->back;
        }

        adm_deallocate_memory(ent_environment->atb_id);
        adm_deallocate_memory(ent_environment->atb_name);
        adm_deallocate_memory(ent_environment->atb_value);

        ent_environment->deleted = TRUE;

        if (adm_entity_system.ent_environment.dead_list_head == NULL) {

            ent_environment->back = NULL;

            adm_entity_system.ent_environment.dead_list_head = ent_environment;

        } else {

            ent_environment->back = adm_entity_system.ent_environment.dead_list_tail;

            (adm_entity_system.ent_environment.dead_list_tail)->next = ent_environment;
        }

        ent_environment->next = NULL;

        adm_entity_system.ent_environment.dead_list_tail = ent_environment;

    } else {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_DELETE_CURRENT_OBJECT,
            error_file, error_line, error_rank,
            "Environment",
            ent_environment->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_environment");
    #endif
}


/* Link Entity Relations */

void adm_link_relation_environment_writing_component(
    adm_ent_environment_typ * ent_source_environment,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_rel_environment_writing_component_typ * rel_environment_writing_component;

    adm_base_boolean_typ component_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_environment_writing_component");
    #endif

    adm_object_existent_environment(
        ent_source_environment,
        error_file,
        error_line,
        error_rank);

    component_not_found = TRUE;

    rel_environment_writing_component = ent_source_environment->rel_writing_component_head;

    while (
        component_not_found &&
        rel_environment_writing_component != NULL) {

        if (rel_environment_writing_component->ent_component == ent_target_component) {

            component_not_found = FALSE;
        }

        rel_environment_writing_component = rel_environment_writing_component->next;
    }

    if (component_not_found) {

        rel_environment_writing_component = (adm_rel_environment_writing_component_typ*)
            adm_allocate_memory(sizeof(adm_rel_environment_writing_component_typ));

        rel_environment_writing_component->ent_component = ent_target_component;

        if (ent_source_environment->rel_writing_component_head == NULL) {

            rel_environment_writing_component->back = NULL;

            ent_source_environment->rel_writing_component_head = rel_environment_writing_component;

        } else {

            rel_environment_writing_component->back = ent_source_environment->rel_writing_component_tail;

            (ent_source_environment->rel_writing_component_tail)->next = rel_environment_writing_component;
        }

        rel_environment_writing_component->next = NULL;

        ent_source_environment->rel_writing_component_tail = rel_environment_writing_component;

    } else {

        adm_error_report(
            ADM_ERROR_OBJECTS_ALREADY_RELATED,
            error_file, error_line, error_rank,
            "Environment",
            ent_source_environment->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_environment_writing_component");
    #endif
}


/* Kill Entity Relations */

void adm_kill_relation_environment_writing_component(
    adm_ent_environment_typ * ent_environment,
    adm_rel_environment_writing_component_typ * rel_environment_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_environment_writing_component");
    #endif

    adm_object_existent_environment(
        ent_environment,
        error_file,
        error_line,
        error_rank);

    if (
        (adm_base_integer_typ)rel_environment_writing_component->next !=
        (adm_base_integer_typ)rel_environment_writing_component->ent_component) {

        if (ent_environment->rel_writing_component_head != NULL) {

            if (ent_environment->rel_writing_component_head == rel_environment_writing_component) {

                ent_environment->rel_writing_component_head = rel_environment_writing_component->next;

            } else {

                (rel_environment_writing_component->back)->next = rel_environment_writing_component->next;
            }

            if (ent_environment->rel_writing_component_tail == rel_environment_writing_component) {

                ent_environment->rel_writing_component_tail = rel_environment_writing_component->back;

            } else {

                (rel_environment_writing_component->next)->back = rel_environment_writing_component->back;
            }

            adm_deallocate_memory(rel_environment_writing_component);

        } else {

            adm_error_report(
                ADM_ERROR_NO_RELATIONS_EXIST,
                error_file, error_line, error_rank,
                "Environment",
                ent_environment->identity,
                "Writing",
                "Component");
        }

    } else {

        adm_error_report(
            ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
            error_file, error_line, error_rank,
            "Environment",
            ent_environment->identity,
            "Writing",
            "Component");
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_environment_writing_component");
    #endif
}


/* Object Existent */

void adm_object_existent_environment(
    adm_ent_environment_typ * ent_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_environment");
    #endif

    if (ent_environment->deleted) {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_USE_DELETED_OBJECT,
            error_file, error_line, error_rank,
            "Environment",
            ent_environment->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_environment");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */