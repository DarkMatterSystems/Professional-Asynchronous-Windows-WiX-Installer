
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Icon Data Access */

/* Make Entity Object */

adm_ent_icon_typ * adm_make_object_icon(
    adm_sta_icon_typ status)
{
    adm_ent_icon_typ * ent_icon;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_icon");
    #endif

    if (adm_entity_system.ent_icon.dead_list_head != NULL) {

        ent_icon = adm_entity_system.ent_icon.dead_list_head;

        if (adm_entity_system.ent_icon.dead_list_head == ent_icon) {

            adm_entity_system.ent_icon.dead_list_head = ent_icon->next;

        } else {

            (ent_icon->back)->next = ent_icon->next;
        }

        if (adm_entity_system.ent_icon.dead_list_tail == ent_icon) {

            adm_entity_system.ent_icon.dead_list_tail = ent_icon->back;

        } else {

            (ent_icon->next)->back = ent_icon->back;
        }

    } else {

        ent_icon = (adm_ent_icon_typ*)adm_allocate_memory(sizeof(adm_ent_icon_typ));
    }

    ent_icon->identity = ++adm_entity_system.ent_icon.tote;

    ent_icon->unique  = FALSE;
    ent_icon->deleted = FALSE;
    ent_icon->marked  = FALSE;
    ent_icon->status  = status;

    ent_icon->atb_id = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);
    ent_icon->atb_source_file = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);

    ent_icon->rel_writing_product_head = NULL;
    ent_icon->rel_writing_product_tail = NULL;

    ent_icon->back = NULL;
    ent_icon->next = NULL;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_icon");
    #endif

    return (ent_icon);
}


/* Bind Entity Object */

void adm_bind_object_icon(
    adm_ent_icon_typ * ent_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_icon");
    #endif

    adm_object_existent_icon(
        ent_icon,
        error_file,
        error_line,
        error_rank);

    if (adm_entity_system.ent_icon.live_list_head == NULL) {

        ent_icon->back = NULL;

        adm_entity_system.ent_icon.live_list_head = ent_icon;

    } else {

        ent_icon->back = adm_entity_system.ent_icon.live_list_tail;

        (adm_entity_system.ent_icon.live_list_tail)->next = ent_icon;
    }

    ent_icon->next = NULL;

    adm_entity_system.ent_icon.live_list_tail = ent_icon;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_icon");
    #endif
}


/* Kill Entity Object */

void adm_kill_object_icon(
    void * source_object,
    adm_ent_icon_typ * ent_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_icon");
    #endif

    adm_object_existent_icon(
        ent_icon,
        error_file,
        error_line,
        error_rank);

    if (source_object != ent_icon) {

        if (ent_icon->rel_writing_product_head != NULL) {

            adm_error_report(
                ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
                error_file, error_line, error_rank,
                "Icon",
                ent_icon->identity,
                "Writing",
                "Product");
        }

        if (adm_entity_system.ent_icon.live_list_head == ent_icon) {

            adm_entity_system.ent_icon.live_list_head = ent_icon->next;

        } else {

            (ent_icon->back)->next = ent_icon->next;
        }

        if (adm_entity_system.ent_icon.live_list_tail == ent_icon) {

            adm_entity_system.ent_icon.live_list_tail = ent_icon->back;

        } else {

            (ent_icon->next)->back = ent_icon->back;
        }

        adm_deallocate_memory(ent_icon->atb_id);
        adm_deallocate_memory(ent_icon->atb_source_file);

        ent_icon->deleted = TRUE;

        if (adm_entity_system.ent_icon.dead_list_head == NULL) {

            ent_icon->back = NULL;

            adm_entity_system.ent_icon.dead_list_head = ent_icon;

        } else {

            ent_icon->back = adm_entity_system.ent_icon.dead_list_tail;

            (adm_entity_system.ent_icon.dead_list_tail)->next = ent_icon;
        }

        ent_icon->next = NULL;

        adm_entity_system.ent_icon.dead_list_tail = ent_icon;

    } else {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_DELETE_CURRENT_OBJECT,
            error_file, error_line, error_rank,
            "Icon",
            ent_icon->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_icon");
    #endif
}


/* Link Entity Relations */

void adm_link_relation_icon_writing_product(
    adm_ent_icon_typ * ent_source_icon,
    adm_ent_product_typ * ent_target_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_rel_icon_writing_product_typ * rel_icon_writing_product;

    adm_base_boolean_typ product_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_icon_writing_product");
    #endif

    adm_object_existent_icon(
        ent_source_icon,
        error_file,
        error_line,
        error_rank);

    product_not_found = TRUE;

    rel_icon_writing_product = ent_source_icon->rel_writing_product_head;

    while (
        product_not_found &&
        rel_icon_writing_product != NULL) {

        if (rel_icon_writing_product->ent_product == ent_target_product) {

            product_not_found = FALSE;
        }

        rel_icon_writing_product = rel_icon_writing_product->next;
    }

    if (product_not_found) {

        rel_icon_writing_product = (adm_rel_icon_writing_product_typ*)
            adm_allocate_memory(sizeof(adm_rel_icon_writing_product_typ));

        rel_icon_writing_product->ent_product = ent_target_product;

        if (ent_source_icon->rel_writing_product_head == NULL) {

            rel_icon_writing_product->back = NULL;

            ent_source_icon->rel_writing_product_head = rel_icon_writing_product;

        } else {

            rel_icon_writing_product->back = ent_source_icon->rel_writing_product_tail;

            (ent_source_icon->rel_writing_product_tail)->next = rel_icon_writing_product;
        }

        rel_icon_writing_product->next = NULL;

        ent_source_icon->rel_writing_product_tail = rel_icon_writing_product;

    } else {

        adm_error_report(
            ADM_ERROR_OBJECTS_ALREADY_RELATED,
            error_file, error_line, error_rank,
            "Icon",
            ent_source_icon->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_icon_writing_product");
    #endif
}


/* Kill Entity Relations */

void adm_kill_relation_icon_writing_product(
    adm_ent_icon_typ * ent_icon,
    adm_rel_icon_writing_product_typ * rel_icon_writing_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_icon_writing_product");
    #endif

    adm_object_existent_icon(
        ent_icon,
        error_file,
        error_line,
        error_rank);

    if (
        (adm_base_integer_typ)rel_icon_writing_product->next !=
        (adm_base_integer_typ)rel_icon_writing_product->ent_product) {

        if (ent_icon->rel_writing_product_head != NULL) {

            if (ent_icon->rel_writing_product_head == rel_icon_writing_product) {

                ent_icon->rel_writing_product_head = rel_icon_writing_product->next;

            } else {

                (rel_icon_writing_product->back)->next = rel_icon_writing_product->next;
            }

            if (ent_icon->rel_writing_product_tail == rel_icon_writing_product) {

                ent_icon->rel_writing_product_tail = rel_icon_writing_product->back;

            } else {

                (rel_icon_writing_product->next)->back = rel_icon_writing_product->back;
            }

            adm_deallocate_memory(rel_icon_writing_product);

        } else {

            adm_error_report(
                ADM_ERROR_NO_RELATIONS_EXIST,
                error_file, error_line, error_rank,
                "Icon",
                ent_icon->identity,
                "Writing",
                "Product");
        }

    } else {

        adm_error_report(
            ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
            error_file, error_line, error_rank,
            "Icon",
            ent_icon->identity,
            "Writing",
            "Product");
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_icon_writing_product");
    #endif
}


/* Object Existent */

void adm_object_existent_icon(
    adm_ent_icon_typ * ent_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_icon");
    #endif

    if (ent_icon->deleted) {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_USE_DELETED_OBJECT,
            error_file, error_line, error_rank,
            "Icon",
            ent_icon->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_icon");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */