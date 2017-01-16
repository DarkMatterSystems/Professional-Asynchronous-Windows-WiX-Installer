
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Property State Actions */

void adm_state_action_property_generating(
    adm_ent_property_typ * ent_property)
{
    /* Entity Objects */
    adm_ent_product_typ * ent_product_0000000001;

    /* Relationship Relations */
    adm_rel_property_writing_product_typ * rel_property_writing_product_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_property_generating");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<Property");
    adm_template_tab_in(5, 19, 21);
    adm_write_newline();
    adm_write_str("Id='");
    adm_write_str(ent_property->atb_id);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Value='");
    adm_write_str(ent_property->atb_value);
    adm_write_str("'/>");
    adm_template_tab_out(5, 19, 21);

    /* Traverse - TraverseSelection */

    adm_object_existent_property(
        ent_property,
        5, 28, 29);

    rel_property_writing_product_0000000001 = ent_property->rel_writing_product_head;

    if (rel_property_writing_product_0000000001 != NULL) {

        ent_product_0000000001 = rel_property_writing_product_0000000001->ent_product;

        /* Unrelate */

        adm_kill_relation_property_writing_product(
            ent_property,
            rel_property_writing_product_0000000001,
            5, 31, 33);

        /* GenerateEvent */

        adm_send_event_product_done(
            ent_property,
            ent_product_0000000001,
            5, 33, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_property_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */