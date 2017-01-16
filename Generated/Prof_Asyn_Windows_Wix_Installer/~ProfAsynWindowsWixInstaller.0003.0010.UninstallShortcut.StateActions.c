
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Uninstall Shortcut State Actions */

void adm_state_action_uninstall_shortcut_generating(
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut)
{
    /* Entity Objects */
    adm_ent_shortcut_typ * ent_shortcut_0000000001;
    adm_ent_component_typ * ent_component_0000000002;

    /* Relationship Relations */
    adm_rel_uninstall_shortcut_specialisation_shortcut_typ * rel_uninstall_shortcut_specialisation_shortcut_0000000001;
    adm_rel_uninstall_shortcut_writing_component_typ * rel_uninstall_shortcut_writing_component_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_uninstall_shortcut_generating");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_uninstall_shortcut(
        ent_uninstall_shortcut,
        11, 21, 29);

    rel_uninstall_shortcut_specialisation_shortcut_0000000001 = ent_uninstall_shortcut->rel_specialisation_shortcut_head;

    ent_shortcut_0000000001 = rel_uninstall_shortcut_specialisation_shortcut_0000000001->ent_shortcut;

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<Shortcut");
    adm_template_tab_in(11, 23, 29);
    adm_write_newline();
    adm_write_str("Id='");
    adm_write_str(ent_shortcut_0000000001->atb_id);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Name='");
    adm_write_str(ent_shortcut_0000000001->atb_name);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Target='");
    adm_write_str(ent_uninstall_shortcut->atb_target);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Arguments='");
    adm_write_str(ent_uninstall_shortcut->atb_arguments);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Description='");
    adm_write_str(ent_shortcut_0000000001->atb_description);
    adm_write_str("'/>");
    adm_template_tab_out(11, 23, 29);

    /* Traverse - TraverseSelection */

    adm_object_existent_uninstall_shortcut(
        ent_uninstall_shortcut,
        11, 35, 29);

    rel_uninstall_shortcut_writing_component_0000000002 = ent_uninstall_shortcut->rel_writing_component_head;

    if (rel_uninstall_shortcut_writing_component_0000000002 != NULL) {

        ent_component_0000000002 = rel_uninstall_shortcut_writing_component_0000000002->ent_component;

        /* Unrelate */

        adm_kill_relation_uninstall_shortcut_writing_component(
            ent_uninstall_shortcut,
            rel_uninstall_shortcut_writing_component_0000000002,
            11, 38, 33);

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_uninstall_shortcut,
            ent_component_0000000002,
            11, 40, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_uninstall_shortcut_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */