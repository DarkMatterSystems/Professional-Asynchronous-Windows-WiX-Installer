
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Package Data Access */

/* Make Entity Object */

adm_ent_package_typ * adm_make_object_package(
    adm_sta_package_typ status)
{
    adm_ent_package_typ * ent_package;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_package");
    #endif

    if (adm_entity_system.ent_package.dead_list_head != NULL) {

        ent_package = adm_entity_system.ent_package.dead_list_head;

        if (adm_entity_system.ent_package.dead_list_head == ent_package) {

            adm_entity_system.ent_package.dead_list_head = ent_package->next;

        } else {

            (ent_package->back)->next = ent_package->next;
        }

        if (adm_entity_system.ent_package.dead_list_tail == ent_package) {

            adm_entity_system.ent_package.dead_list_tail = ent_package->back;

        } else {

            (ent_package->next)->back = ent_package->back;
        }

    } else {

        ent_package = (adm_ent_package_typ*)adm_allocate_memory(sizeof(adm_ent_package_typ));
    }

    ent_package->identity = ++adm_entity_system.ent_package.tote;

    ent_package->unique  = FALSE;
    ent_package->deleted = FALSE;
    ent_package->marked  = FALSE;
    ent_package->status  = status;

    ent_package->atb_description = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);
    ent_package->atb_comments = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);
    ent_package->atb_manufacture = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);

    ent_package->rel_writing_product_head = NULL;
    ent_package->rel_writing_product_tail = NULL;

    ent_package->back = NULL;
    ent_package->next = NULL;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_package");
    #endif

    return (ent_package);
}


/* Bind Entity Object */

void adm_bind_object_package(
    adm_ent_package_typ * ent_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_package");
    #endif

    adm_object_existent_package(
        ent_package,
        error_file,
        error_line,
        error_rank);

    if (adm_entity_system.ent_package.live_list_head == NULL) {

        ent_package->back = NULL;

        adm_entity_system.ent_package.live_list_head = ent_package;

    } else {

        ent_package->back = adm_entity_system.ent_package.live_list_tail;

        (adm_entity_system.ent_package.live_list_tail)->next = ent_package;
    }

    ent_package->next = NULL;

    adm_entity_system.ent_package.live_list_tail = ent_package;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_package");
    #endif
}


/* Kill Entity Object */

void adm_kill_object_package(
    void * source_object,
    adm_ent_package_typ * ent_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_package");
    #endif

    adm_object_existent_package(
        ent_package,
        error_file,
        error_line,
        error_rank);

    if (source_object != ent_package) {

        if (ent_package->rel_writing_product_head != NULL) {

            adm_error_report(
                ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
                error_file, error_line, error_rank,
                "Package",
                ent_package->identity,
                "Writing",
                "Product");
        }

        if (adm_entity_system.ent_package.live_list_head == ent_package) {

            adm_entity_system.ent_package.live_list_head = ent_package->next;

        } else {

            (ent_package->back)->next = ent_package->next;
        }

        if (adm_entity_system.ent_package.live_list_tail == ent_package) {

            adm_entity_system.ent_package.live_list_tail = ent_package->back;

        } else {

            (ent_package->next)->back = ent_package->back;
        }

        adm_deallocate_memory(ent_package->atb_description);
        adm_deallocate_memory(ent_package->atb_comments);
        adm_deallocate_memory(ent_package->atb_manufacture);

        ent_package->deleted = TRUE;

        if (adm_entity_system.ent_package.dead_list_head == NULL) {

            ent_package->back = NULL;

            adm_entity_system.ent_package.dead_list_head = ent_package;

        } else {

            ent_package->back = adm_entity_system.ent_package.dead_list_tail;

            (adm_entity_system.ent_package.dead_list_tail)->next = ent_package;
        }

        ent_package->next = NULL;

        adm_entity_system.ent_package.dead_list_tail = ent_package;

    } else {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_DELETE_CURRENT_OBJECT,
            error_file, error_line, error_rank,
            "Package",
            ent_package->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_package");
    #endif
}


/* Link Entity Relations */

void adm_link_relation_package_writing_product(
    adm_ent_package_typ * ent_source_package,
    adm_ent_product_typ * ent_target_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_rel_package_writing_product_typ * rel_package_writing_product;

    adm_base_boolean_typ product_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_package_writing_product");
    #endif

    adm_object_existent_package(
        ent_source_package,
        error_file,
        error_line,
        error_rank);

    product_not_found = TRUE;

    rel_package_writing_product = ent_source_package->rel_writing_product_head;

    while (
        product_not_found &&
        rel_package_writing_product != NULL) {

        if (rel_package_writing_product->ent_product == ent_target_product) {

            product_not_found = FALSE;
        }

        rel_package_writing_product = rel_package_writing_product->next;
    }

    if (product_not_found) {

        rel_package_writing_product = (adm_rel_package_writing_product_typ*)
            adm_allocate_memory(sizeof(adm_rel_package_writing_product_typ));

        rel_package_writing_product->ent_product = ent_target_product;

        if (ent_source_package->rel_writing_product_head == NULL) {

            rel_package_writing_product->back = NULL;

            ent_source_package->rel_writing_product_head = rel_package_writing_product;

        } else {

            rel_package_writing_product->back = ent_source_package->rel_writing_product_tail;

            (ent_source_package->rel_writing_product_tail)->next = rel_package_writing_product;
        }

        rel_package_writing_product->next = NULL;

        ent_source_package->rel_writing_product_tail = rel_package_writing_product;

    } else {

        adm_error_report(
            ADM_ERROR_OBJECTS_ALREADY_RELATED,
            error_file, error_line, error_rank,
            "Package",
            ent_source_package->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_package_writing_product");
    #endif
}


/* Kill Entity Relations */

void adm_kill_relation_package_writing_product(
    adm_ent_package_typ * ent_package,
    adm_rel_package_writing_product_typ * rel_package_writing_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_package_writing_product");
    #endif

    adm_object_existent_package(
        ent_package,
        error_file,
        error_line,
        error_rank);

    if (
        (adm_base_integer_typ)rel_package_writing_product->next !=
        (adm_base_integer_typ)rel_package_writing_product->ent_product) {

        if (ent_package->rel_writing_product_head != NULL) {

            if (ent_package->rel_writing_product_head == rel_package_writing_product) {

                ent_package->rel_writing_product_head = rel_package_writing_product->next;

            } else {

                (rel_package_writing_product->back)->next = rel_package_writing_product->next;
            }

            if (ent_package->rel_writing_product_tail == rel_package_writing_product) {

                ent_package->rel_writing_product_tail = rel_package_writing_product->back;

            } else {

                (rel_package_writing_product->next)->back = rel_package_writing_product->back;
            }

            adm_deallocate_memory(rel_package_writing_product);

        } else {

            adm_error_report(
                ADM_ERROR_NO_RELATIONS_EXIST,
                error_file, error_line, error_rank,
                "Package",
                ent_package->identity,
                "Writing",
                "Product");
        }

    } else {

        adm_error_report(
            ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
            error_file, error_line, error_rank,
            "Package",
            ent_package->identity,
            "Writing",
            "Product");
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_package_writing_product");
    #endif
}


/* Object Existent */

void adm_object_existent_package(
    adm_ent_package_typ * ent_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_package");
    #endif

    if (ent_package->deleted) {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_USE_DELETED_OBJECT,
            error_file, error_line, error_rank,
            "Package",
            ent_package->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_package");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */