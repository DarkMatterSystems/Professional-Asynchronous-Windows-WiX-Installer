
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Package State Actions */

void adm_state_action_package_generating(
    adm_ent_package_typ * ent_package)
{
    /* Entity Objects */
    adm_ent_product_typ * ent_product_0000000001;

    /* Relationship Relations */
    adm_rel_package_writing_product_typ * rel_package_writing_product_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_package_generating");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<Package");
    adm_template_tab_in(4, 19, 21);
    adm_write_newline();
    adm_write_str("Id='*'");
    adm_write_newline();
    adm_write_str("Keywords='Installer'");
    adm_write_newline();
    adm_write_str("Description='");
    adm_write_str(ent_package->atb_description);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Comments='");
    adm_write_str(ent_package->atb_comments);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Manufacturer='");
    adm_write_str(ent_package->atb_manufacture);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("InstallerVersion='100'");
    adm_write_newline();
    adm_write_str("Languages='1033'");
    adm_write_newline();
    adm_write_str("Compressed='yes'");
    adm_write_newline();
    adm_write_str("SummaryCodepage='1252'/>");
    adm_template_tab_out(4, 19, 21);

    /* Traverse - TraverseSelection */

    adm_object_existent_package(
        ent_package,
        4, 35, 29);

    rel_package_writing_product_0000000001 = ent_package->rel_writing_product_head;

    if (rel_package_writing_product_0000000001 != NULL) {

        ent_product_0000000001 = rel_package_writing_product_0000000001->ent_product;

        /* Unrelate */

        adm_kill_relation_package_writing_product(
            ent_package,
            rel_package_writing_product_0000000001,
            4, 38, 33);

        /* GenerateEvent */

        adm_send_event_product_complete(
            ent_package,
            ent_product_0000000001,
            4, 40, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_package_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */