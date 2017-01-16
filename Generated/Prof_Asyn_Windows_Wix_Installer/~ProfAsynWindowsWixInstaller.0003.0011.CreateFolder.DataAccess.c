
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Create Folder Data Access */

/* Make Entity Object */

adm_ent_create_folder_typ * adm_make_object_create_folder(
    adm_sta_create_folder_typ status)
{
    adm_ent_create_folder_typ * ent_create_folder;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_create_folder");
    #endif

    if (adm_entity_system.ent_create_folder.dead_list_head != NULL) {

        ent_create_folder = adm_entity_system.ent_create_folder.dead_list_head;

        if (adm_entity_system.ent_create_folder.dead_list_head == ent_create_folder) {

            adm_entity_system.ent_create_folder.dead_list_head = ent_create_folder->next;

        } else {

            (ent_create_folder->back)->next = ent_create_folder->next;
        }

        if (adm_entity_system.ent_create_folder.dead_list_tail == ent_create_folder) {

            adm_entity_system.ent_create_folder.dead_list_tail = ent_create_folder->back;

        } else {

            (ent_create_folder->next)->back = ent_create_folder->back;
        }

    } else {

        ent_create_folder = (adm_ent_create_folder_typ*)adm_allocate_memory(sizeof(adm_ent_create_folder_typ));
    }

    ent_create_folder->identity = ++adm_entity_system.ent_create_folder.tote;

    ent_create_folder->unique  = FALSE;
    ent_create_folder->deleted = FALSE;
    ent_create_folder->marked  = FALSE;
    ent_create_folder->status  = status;

    ent_create_folder->rel_writing_component_head = NULL;
    ent_create_folder->rel_writing_component_tail = NULL;

    ent_create_folder->back = NULL;
    ent_create_folder->next = NULL;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_create_folder");
    #endif

    return (ent_create_folder);
}


/* Bind Entity Object */

void adm_bind_object_create_folder(
    adm_ent_create_folder_typ * ent_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_create_folder");
    #endif

    adm_object_existent_create_folder(
        ent_create_folder,
        error_file,
        error_line,
        error_rank);

    if (adm_entity_system.ent_create_folder.live_list_head == NULL) {

        ent_create_folder->back = NULL;

        adm_entity_system.ent_create_folder.live_list_head = ent_create_folder;

    } else {

        ent_create_folder->back = adm_entity_system.ent_create_folder.live_list_tail;

        (adm_entity_system.ent_create_folder.live_list_tail)->next = ent_create_folder;
    }

    ent_create_folder->next = NULL;

    adm_entity_system.ent_create_folder.live_list_tail = ent_create_folder;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_create_folder");
    #endif
}


/* Kill Entity Object */

void adm_kill_object_create_folder(
    void * source_object,
    adm_ent_create_folder_typ * ent_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_create_folder");
    #endif

    adm_object_existent_create_folder(
        ent_create_folder,
        error_file,
        error_line,
        error_rank);

    if (source_object != ent_create_folder) {

        if (ent_create_folder->rel_writing_component_head != NULL) {

            adm_error_report(
                ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
                error_file, error_line, error_rank,
                "Create_Folder",
                ent_create_folder->identity,
                "Writing",
                "Component");
        }

        if (adm_entity_system.ent_create_folder.live_list_head == ent_create_folder) {

            adm_entity_system.ent_create_folder.live_list_head = ent_create_folder->next;

        } else {

            (ent_create_folder->back)->next = ent_create_folder->next;
        }

        if (adm_entity_system.ent_create_folder.live_list_tail == ent_create_folder) {

            adm_entity_system.ent_create_folder.live_list_tail = ent_create_folder->back;

        } else {

            (ent_create_folder->next)->back = ent_create_folder->back;
        }

        ent_create_folder->deleted = TRUE;

        if (adm_entity_system.ent_create_folder.dead_list_head == NULL) {

            ent_create_folder->back = NULL;

            adm_entity_system.ent_create_folder.dead_list_head = ent_create_folder;

        } else {

            ent_create_folder->back = adm_entity_system.ent_create_folder.dead_list_tail;

            (adm_entity_system.ent_create_folder.dead_list_tail)->next = ent_create_folder;
        }

        ent_create_folder->next = NULL;

        adm_entity_system.ent_create_folder.dead_list_tail = ent_create_folder;

    } else {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_DELETE_CURRENT_OBJECT,
            error_file, error_line, error_rank,
            "Create_Folder",
            ent_create_folder->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_create_folder");
    #endif
}


/* Link Entity Relations */

void adm_link_relation_create_folder_writing_component(
    adm_ent_create_folder_typ * ent_source_create_folder,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_rel_create_folder_writing_component_typ * rel_create_folder_writing_component;

    adm_base_boolean_typ component_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_create_folder_writing_component");
    #endif

    adm_object_existent_create_folder(
        ent_source_create_folder,
        error_file,
        error_line,
        error_rank);

    component_not_found = TRUE;

    rel_create_folder_writing_component = ent_source_create_folder->rel_writing_component_head;

    while (
        component_not_found &&
        rel_create_folder_writing_component != NULL) {

        if (rel_create_folder_writing_component->ent_component == ent_target_component) {

            component_not_found = FALSE;
        }

        rel_create_folder_writing_component = rel_create_folder_writing_component->next;
    }

    if (component_not_found) {

        rel_create_folder_writing_component = (adm_rel_create_folder_writing_component_typ*)
            adm_allocate_memory(sizeof(adm_rel_create_folder_writing_component_typ));

        rel_create_folder_writing_component->ent_component = ent_target_component;

        if (ent_source_create_folder->rel_writing_component_head == NULL) {

            rel_create_folder_writing_component->back = NULL;

            ent_source_create_folder->rel_writing_component_head = rel_create_folder_writing_component;

        } else {

            rel_create_folder_writing_component->back = ent_source_create_folder->rel_writing_component_tail;

            (ent_source_create_folder->rel_writing_component_tail)->next = rel_create_folder_writing_component;
        }

        rel_create_folder_writing_component->next = NULL;

        ent_source_create_folder->rel_writing_component_tail = rel_create_folder_writing_component;

    } else {

        adm_error_report(
            ADM_ERROR_OBJECTS_ALREADY_RELATED,
            error_file, error_line, error_rank,
            "Create_Folder",
            ent_source_create_folder->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_create_folder_writing_component");
    #endif
}


/* Kill Entity Relations */

void adm_kill_relation_create_folder_writing_component(
    adm_ent_create_folder_typ * ent_create_folder,
    adm_rel_create_folder_writing_component_typ * rel_create_folder_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_create_folder_writing_component");
    #endif

    adm_object_existent_create_folder(
        ent_create_folder,
        error_file,
        error_line,
        error_rank);

    if (
        (adm_base_integer_typ)rel_create_folder_writing_component->next !=
        (adm_base_integer_typ)rel_create_folder_writing_component->ent_component) {

        if (ent_create_folder->rel_writing_component_head != NULL) {

            if (ent_create_folder->rel_writing_component_head == rel_create_folder_writing_component) {

                ent_create_folder->rel_writing_component_head = rel_create_folder_writing_component->next;

            } else {

                (rel_create_folder_writing_component->back)->next = rel_create_folder_writing_component->next;
            }

            if (ent_create_folder->rel_writing_component_tail == rel_create_folder_writing_component) {

                ent_create_folder->rel_writing_component_tail = rel_create_folder_writing_component->back;

            } else {

                (rel_create_folder_writing_component->next)->back = rel_create_folder_writing_component->back;
            }

            adm_deallocate_memory(rel_create_folder_writing_component);

        } else {

            adm_error_report(
                ADM_ERROR_NO_RELATIONS_EXIST,
                error_file, error_line, error_rank,
                "Create_Folder",
                ent_create_folder->identity,
                "Writing",
                "Component");
        }

    } else {

        adm_error_report(
            ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
            error_file, error_line, error_rank,
            "Create_Folder",
            ent_create_folder->identity,
            "Writing",
            "Component");
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_create_folder_writing_component");
    #endif
}


/* Object Existent */

void adm_object_existent_create_folder(
    adm_ent_create_folder_typ * ent_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_create_folder");
    #endif

    if (ent_create_folder->deleted) {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_USE_DELETED_OBJECT,
            error_file, error_line, error_rank,
            "Create_Folder",
            ent_create_folder->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_create_folder");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */