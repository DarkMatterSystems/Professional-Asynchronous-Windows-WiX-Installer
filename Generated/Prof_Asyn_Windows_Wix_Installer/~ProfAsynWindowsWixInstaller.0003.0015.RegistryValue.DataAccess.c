
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Registry Value Data Access */

/* Make Entity Object */

adm_ent_registry_value_typ * adm_make_object_registry_value(
    adm_sta_registry_value_typ status)
{
    adm_ent_registry_value_typ * ent_registry_value;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_registry_value");
    #endif

    if (adm_entity_system.ent_registry_value.dead_list_head != NULL) {

        ent_registry_value = adm_entity_system.ent_registry_value.dead_list_head;

        if (adm_entity_system.ent_registry_value.dead_list_head == ent_registry_value) {

            adm_entity_system.ent_registry_value.dead_list_head = ent_registry_value->next;

        } else {

            (ent_registry_value->back)->next = ent_registry_value->next;
        }

        if (adm_entity_system.ent_registry_value.dead_list_tail == ent_registry_value) {

            adm_entity_system.ent_registry_value.dead_list_tail = ent_registry_value->back;

        } else {

            (ent_registry_value->next)->back = ent_registry_value->back;
        }

    } else {

        ent_registry_value = (adm_ent_registry_value_typ*)adm_allocate_memory(sizeof(adm_ent_registry_value_typ));
    }

    ent_registry_value->identity = ++adm_entity_system.ent_registry_value.tote;

    ent_registry_value->unique  = FALSE;
    ent_registry_value->deleted = FALSE;
    ent_registry_value->marked  = FALSE;
    ent_registry_value->status  = status;

    ent_registry_value->atb_root = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);
    ent_registry_value->atb_key = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);
    ent_registry_value->atb_value = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);

    ent_registry_value->rel_writing_component_head = NULL;
    ent_registry_value->rel_writing_component_tail = NULL;

    ent_registry_value->rel_writing_registry_key_head = NULL;
    ent_registry_value->rel_writing_registry_key_tail = NULL;

    ent_registry_value->back = NULL;
    ent_registry_value->next = NULL;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_registry_value");
    #endif

    return (ent_registry_value);
}


/* Bind Entity Object */

void adm_bind_object_registry_value(
    adm_ent_registry_value_typ * ent_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_registry_value");
    #endif

    adm_object_existent_registry_value(
        ent_registry_value,
        error_file,
        error_line,
        error_rank);

    if (adm_entity_system.ent_registry_value.live_list_head == NULL) {

        ent_registry_value->back = NULL;

        adm_entity_system.ent_registry_value.live_list_head = ent_registry_value;

    } else {

        ent_registry_value->back = adm_entity_system.ent_registry_value.live_list_tail;

        (adm_entity_system.ent_registry_value.live_list_tail)->next = ent_registry_value;
    }

    ent_registry_value->next = NULL;

    adm_entity_system.ent_registry_value.live_list_tail = ent_registry_value;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_registry_value");
    #endif
}


/* Kill Entity Object */

void adm_kill_object_registry_value(
    void * source_object,
    adm_ent_registry_value_typ * ent_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_registry_value");
    #endif

    adm_object_existent_registry_value(
        ent_registry_value,
        error_file,
        error_line,
        error_rank);

    if (source_object != ent_registry_value) {

        if (ent_registry_value->rel_writing_component_head != NULL) {

            adm_error_report(
                ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
                error_file, error_line, error_rank,
                "Registry_Value",
                ent_registry_value->identity,
                "Writing",
                "Component");
        }

        if (ent_registry_value->rel_writing_registry_key_head != NULL) {

            adm_error_report(
                ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
                error_file, error_line, error_rank,
                "Registry_Value",
                ent_registry_value->identity,
                "Writing",
                "Registry_Key");
        }

        if (adm_entity_system.ent_registry_value.live_list_head == ent_registry_value) {

            adm_entity_system.ent_registry_value.live_list_head = ent_registry_value->next;

        } else {

            (ent_registry_value->back)->next = ent_registry_value->next;
        }

        if (adm_entity_system.ent_registry_value.live_list_tail == ent_registry_value) {

            adm_entity_system.ent_registry_value.live_list_tail = ent_registry_value->back;

        } else {

            (ent_registry_value->next)->back = ent_registry_value->back;
        }

        adm_deallocate_memory(ent_registry_value->atb_root);
        adm_deallocate_memory(ent_registry_value->atb_key);
        adm_deallocate_memory(ent_registry_value->atb_value);

        ent_registry_value->deleted = TRUE;

        if (adm_entity_system.ent_registry_value.dead_list_head == NULL) {

            ent_registry_value->back = NULL;

            adm_entity_system.ent_registry_value.dead_list_head = ent_registry_value;

        } else {

            ent_registry_value->back = adm_entity_system.ent_registry_value.dead_list_tail;

            (adm_entity_system.ent_registry_value.dead_list_tail)->next = ent_registry_value;
        }

        ent_registry_value->next = NULL;

        adm_entity_system.ent_registry_value.dead_list_tail = ent_registry_value;

    } else {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_DELETE_CURRENT_OBJECT,
            error_file, error_line, error_rank,
            "Registry_Value",
            ent_registry_value->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_registry_value");
    #endif
}


/* Link Entity Relations */

void adm_link_relation_registry_value_writing_component(
    adm_ent_registry_value_typ * ent_source_registry_value,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_rel_registry_value_writing_component_typ * rel_registry_value_writing_component;

    adm_base_boolean_typ component_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_registry_value_writing_component");
    #endif

    adm_object_existent_registry_value(
        ent_source_registry_value,
        error_file,
        error_line,
        error_rank);

    component_not_found = TRUE;

    rel_registry_value_writing_component = ent_source_registry_value->rel_writing_component_head;

    while (
        component_not_found &&
        rel_registry_value_writing_component != NULL) {

        if (rel_registry_value_writing_component->ent_component == ent_target_component) {

            component_not_found = FALSE;
        }

        rel_registry_value_writing_component = rel_registry_value_writing_component->next;
    }

    if (component_not_found) {

        rel_registry_value_writing_component = (adm_rel_registry_value_writing_component_typ*)
            adm_allocate_memory(sizeof(adm_rel_registry_value_writing_component_typ));

        rel_registry_value_writing_component->ent_component = ent_target_component;

        if (ent_source_registry_value->rel_writing_component_head == NULL) {

            rel_registry_value_writing_component->back = NULL;

            ent_source_registry_value->rel_writing_component_head = rel_registry_value_writing_component;

        } else {

            rel_registry_value_writing_component->back = ent_source_registry_value->rel_writing_component_tail;

            (ent_source_registry_value->rel_writing_component_tail)->next = rel_registry_value_writing_component;
        }

        rel_registry_value_writing_component->next = NULL;

        ent_source_registry_value->rel_writing_component_tail = rel_registry_value_writing_component;

    } else {

        adm_error_report(
            ADM_ERROR_OBJECTS_ALREADY_RELATED,
            error_file, error_line, error_rank,
            "Registry_Value",
            ent_source_registry_value->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_registry_value_writing_component");
    #endif
}

void adm_link_relation_registry_value_writing_registry_key(
    adm_ent_registry_value_typ * ent_source_registry_value,
    adm_ent_registry_key_typ * ent_target_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_rel_registry_value_writing_registry_key_typ * rel_registry_value_writing_registry_key;

    adm_base_boolean_typ registry_key_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_registry_value_writing_registry_key");
    #endif

    adm_object_existent_registry_value(
        ent_source_registry_value,
        error_file,
        error_line,
        error_rank);

    registry_key_not_found = TRUE;

    rel_registry_value_writing_registry_key = ent_source_registry_value->rel_writing_registry_key_head;

    while (
        registry_key_not_found &&
        rel_registry_value_writing_registry_key != NULL) {

        if (rel_registry_value_writing_registry_key->ent_registry_key == ent_target_registry_key) {

            registry_key_not_found = FALSE;
        }

        rel_registry_value_writing_registry_key = rel_registry_value_writing_registry_key->next;
    }

    if (registry_key_not_found) {

        rel_registry_value_writing_registry_key = (adm_rel_registry_value_writing_registry_key_typ*)
            adm_allocate_memory(sizeof(adm_rel_registry_value_writing_registry_key_typ));

        rel_registry_value_writing_registry_key->ent_registry_key = ent_target_registry_key;

        if (ent_source_registry_value->rel_writing_registry_key_head == NULL) {

            rel_registry_value_writing_registry_key->back = NULL;

            ent_source_registry_value->rel_writing_registry_key_head = rel_registry_value_writing_registry_key;

        } else {

            rel_registry_value_writing_registry_key->back = ent_source_registry_value->rel_writing_registry_key_tail;

            (ent_source_registry_value->rel_writing_registry_key_tail)->next = rel_registry_value_writing_registry_key;
        }

        rel_registry_value_writing_registry_key->next = NULL;

        ent_source_registry_value->rel_writing_registry_key_tail = rel_registry_value_writing_registry_key;

    } else {

        adm_error_report(
            ADM_ERROR_OBJECTS_ALREADY_RELATED,
            error_file, error_line, error_rank,
            "Registry_Value",
            ent_source_registry_value->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_registry_value_writing_registry_key");
    #endif
}


/* Kill Entity Relations */

void adm_kill_relation_registry_value_writing_component(
    adm_ent_registry_value_typ * ent_registry_value,
    adm_rel_registry_value_writing_component_typ * rel_registry_value_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_registry_value_writing_component");
    #endif

    adm_object_existent_registry_value(
        ent_registry_value,
        error_file,
        error_line,
        error_rank);

    if (
        (adm_base_integer_typ)rel_registry_value_writing_component->next !=
        (adm_base_integer_typ)rel_registry_value_writing_component->ent_component) {

        if (ent_registry_value->rel_writing_component_head != NULL) {

            if (ent_registry_value->rel_writing_component_head == rel_registry_value_writing_component) {

                ent_registry_value->rel_writing_component_head = rel_registry_value_writing_component->next;

            } else {

                (rel_registry_value_writing_component->back)->next = rel_registry_value_writing_component->next;
            }

            if (ent_registry_value->rel_writing_component_tail == rel_registry_value_writing_component) {

                ent_registry_value->rel_writing_component_tail = rel_registry_value_writing_component->back;

            } else {

                (rel_registry_value_writing_component->next)->back = rel_registry_value_writing_component->back;
            }

            adm_deallocate_memory(rel_registry_value_writing_component);

        } else {

            adm_error_report(
                ADM_ERROR_NO_RELATIONS_EXIST,
                error_file, error_line, error_rank,
                "Registry_Value",
                ent_registry_value->identity,
                "Writing",
                "Component");
        }

    } else {

        adm_error_report(
            ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
            error_file, error_line, error_rank,
            "Registry_Value",
            ent_registry_value->identity,
            "Writing",
            "Component");
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_registry_value_writing_component");
    #endif
}

void adm_kill_relation_registry_value_writing_registry_key(
    adm_ent_registry_value_typ * ent_registry_value,
    adm_rel_registry_value_writing_registry_key_typ * rel_registry_value_writing_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_registry_value_writing_registry_key");
    #endif

    adm_object_existent_registry_value(
        ent_registry_value,
        error_file,
        error_line,
        error_rank);

    if (
        (adm_base_integer_typ)rel_registry_value_writing_registry_key->next !=
        (adm_base_integer_typ)rel_registry_value_writing_registry_key->ent_registry_key) {

        if (ent_registry_value->rel_writing_registry_key_head != NULL) {

            if (ent_registry_value->rel_writing_registry_key_head == rel_registry_value_writing_registry_key) {

                ent_registry_value->rel_writing_registry_key_head = rel_registry_value_writing_registry_key->next;

            } else {

                (rel_registry_value_writing_registry_key->back)->next = rel_registry_value_writing_registry_key->next;
            }

            if (ent_registry_value->rel_writing_registry_key_tail == rel_registry_value_writing_registry_key) {

                ent_registry_value->rel_writing_registry_key_tail = rel_registry_value_writing_registry_key->back;

            } else {

                (rel_registry_value_writing_registry_key->next)->back = rel_registry_value_writing_registry_key->back;
            }

            adm_deallocate_memory(rel_registry_value_writing_registry_key);

        } else {

            adm_error_report(
                ADM_ERROR_NO_RELATIONS_EXIST,
                error_file, error_line, error_rank,
                "Registry_Value",
                ent_registry_value->identity,
                "Writing",
                "Registry_Key");
        }

    } else {

        adm_error_report(
            ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
            error_file, error_line, error_rank,
            "Registry_Value",
            ent_registry_value->identity,
            "Writing",
            "Registry_Key");
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_registry_value_writing_registry_key");
    #endif
}


/* Object Existent */

void adm_object_existent_registry_value(
    adm_ent_registry_value_typ * ent_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_registry_value");
    #endif

    if (ent_registry_value->deleted) {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_USE_DELETED_OBJECT,
            error_file, error_line, error_rank,
            "Registry_Value",
            ent_registry_value->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_registry_value");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */