
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Property Data Access */

/* Make Entity Object */

adm_ent_property_typ * adm_make_object_property(
    adm_sta_property_typ status)
{
    adm_ent_property_typ * ent_property;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_property");
    #endif

    if (adm_entity_system.ent_property.dead_list_head != NULL) {

        ent_property = adm_entity_system.ent_property.dead_list_head;

        if (adm_entity_system.ent_property.dead_list_head == ent_property) {

            adm_entity_system.ent_property.dead_list_head = ent_property->next;

        } else {

            (ent_property->back)->next = ent_property->next;
        }

        if (adm_entity_system.ent_property.dead_list_tail == ent_property) {

            adm_entity_system.ent_property.dead_list_tail = ent_property->back;

        } else {

            (ent_property->next)->back = ent_property->back;
        }

    } else {

        ent_property = (adm_ent_property_typ*)adm_allocate_memory(sizeof(adm_ent_property_typ));
    }

    ent_property->identity = ++adm_entity_system.ent_property.tote;

    ent_property->unique  = FALSE;
    ent_property->deleted = FALSE;
    ent_property->marked  = FALSE;
    ent_property->status  = status;

    ent_property->atb_id = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);
    ent_property->atb_value = (adm_str_text_typ*)adm_allocate_memory(ADM_TYPE_SIZE_TEXT+1);

    ent_property->rel_writing_product_head = NULL;
    ent_property->rel_writing_product_tail = NULL;

    ent_property->back = NULL;
    ent_property->next = NULL;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_property");
    #endif

    return (ent_property);
}


/* Bind Entity Object */

void adm_bind_object_property(
    adm_ent_property_typ * ent_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_property");
    #endif

    adm_object_existent_property(
        ent_property,
        error_file,
        error_line,
        error_rank);

    if (adm_entity_system.ent_property.live_list_head == NULL) {

        ent_property->back = NULL;

        adm_entity_system.ent_property.live_list_head = ent_property;

    } else {

        ent_property->back = adm_entity_system.ent_property.live_list_tail;

        (adm_entity_system.ent_property.live_list_tail)->next = ent_property;
    }

    ent_property->next = NULL;

    adm_entity_system.ent_property.live_list_tail = ent_property;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_property");
    #endif
}


/* Kill Entity Object */

void adm_kill_object_property(
    void * source_object,
    adm_ent_property_typ * ent_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_property");
    #endif

    adm_object_existent_property(
        ent_property,
        error_file,
        error_line,
        error_rank);

    if (source_object != ent_property) {

        if (ent_property->rel_writing_product_head != NULL) {

            adm_error_report(
                ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
                error_file, error_line, error_rank,
                "Property",
                ent_property->identity,
                "Writing",
                "Product");
        }

        if (adm_entity_system.ent_property.live_list_head == ent_property) {

            adm_entity_system.ent_property.live_list_head = ent_property->next;

        } else {

            (ent_property->back)->next = ent_property->next;
        }

        if (adm_entity_system.ent_property.live_list_tail == ent_property) {

            adm_entity_system.ent_property.live_list_tail = ent_property->back;

        } else {

            (ent_property->next)->back = ent_property->back;
        }

        adm_deallocate_memory(ent_property->atb_id);
        adm_deallocate_memory(ent_property->atb_value);

        ent_property->deleted = TRUE;

        if (adm_entity_system.ent_property.dead_list_head == NULL) {

            ent_property->back = NULL;

            adm_entity_system.ent_property.dead_list_head = ent_property;

        } else {

            ent_property->back = adm_entity_system.ent_property.dead_list_tail;

            (adm_entity_system.ent_property.dead_list_tail)->next = ent_property;
        }

        ent_property->next = NULL;

        adm_entity_system.ent_property.dead_list_tail = ent_property;

    } else {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_DELETE_CURRENT_OBJECT,
            error_file, error_line, error_rank,
            "Property",
            ent_property->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_property");
    #endif
}


/* Link Entity Relations */

void adm_link_relation_property_writing_product(
    adm_ent_property_typ * ent_source_property,
    adm_ent_product_typ * ent_target_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_rel_property_writing_product_typ * rel_property_writing_product;

    adm_base_boolean_typ product_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_property_writing_product");
    #endif

    adm_object_existent_property(
        ent_source_property,
        error_file,
        error_line,
        error_rank);

    product_not_found = TRUE;

    rel_property_writing_product = ent_source_property->rel_writing_product_head;

    while (
        product_not_found &&
        rel_property_writing_product != NULL) {

        if (rel_property_writing_product->ent_product == ent_target_product) {

            product_not_found = FALSE;
        }

        rel_property_writing_product = rel_property_writing_product->next;
    }

    if (product_not_found) {

        rel_property_writing_product = (adm_rel_property_writing_product_typ*)
            adm_allocate_memory(sizeof(adm_rel_property_writing_product_typ));

        rel_property_writing_product->ent_product = ent_target_product;

        if (ent_source_property->rel_writing_product_head == NULL) {

            rel_property_writing_product->back = NULL;

            ent_source_property->rel_writing_product_head = rel_property_writing_product;

        } else {

            rel_property_writing_product->back = ent_source_property->rel_writing_product_tail;

            (ent_source_property->rel_writing_product_tail)->next = rel_property_writing_product;
        }

        rel_property_writing_product->next = NULL;

        ent_source_property->rel_writing_product_tail = rel_property_writing_product;

    } else {

        adm_error_report(
            ADM_ERROR_OBJECTS_ALREADY_RELATED,
            error_file, error_line, error_rank,
            "Property",
            ent_source_property->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_property_writing_product");
    #endif
}


/* Kill Entity Relations */

void adm_kill_relation_property_writing_product(
    adm_ent_property_typ * ent_property,
    adm_rel_property_writing_product_typ * rel_property_writing_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_property_writing_product");
    #endif

    adm_object_existent_property(
        ent_property,
        error_file,
        error_line,
        error_rank);

    if (
        (adm_base_integer_typ)rel_property_writing_product->next !=
        (adm_base_integer_typ)rel_property_writing_product->ent_product) {

        if (ent_property->rel_writing_product_head != NULL) {

            if (ent_property->rel_writing_product_head == rel_property_writing_product) {

                ent_property->rel_writing_product_head = rel_property_writing_product->next;

            } else {

                (rel_property_writing_product->back)->next = rel_property_writing_product->next;
            }

            if (ent_property->rel_writing_product_tail == rel_property_writing_product) {

                ent_property->rel_writing_product_tail = rel_property_writing_product->back;

            } else {

                (rel_property_writing_product->next)->back = rel_property_writing_product->back;
            }

            adm_deallocate_memory(rel_property_writing_product);

        } else {

            adm_error_report(
                ADM_ERROR_NO_RELATIONS_EXIST,
                error_file, error_line, error_rank,
                "Property",
                ent_property->identity,
                "Writing",
                "Product");
        }

    } else {

        adm_error_report(
            ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
            error_file, error_line, error_rank,
            "Property",
            ent_property->identity,
            "Writing",
            "Product");
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_property_writing_product");
    #endif
}


/* Object Existent */

void adm_object_existent_property(
    adm_ent_property_typ * ent_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_property");
    #endif

    if (ent_property->deleted) {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_USE_DELETED_OBJECT,
            error_file, error_line, error_rank,
            "Property",
            ent_property->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_property");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */