
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* File Shortcut State Actions */

void adm_state_action_file_shortcut_generating(
    adm_ent_file_shortcut_typ * ent_file_shortcut)
{
    /* Entity Objects */
    adm_ent_shortcut_typ * ent_shortcut_0000000001;
    adm_ent_file_typ * ent_file_0000000002;

    /* Relationship Relations */
    adm_rel_file_shortcut_specialisation_shortcut_typ * rel_file_shortcut_specialisation_shortcut_0000000001;
    adm_rel_file_shortcut_writing_file_typ * rel_file_shortcut_writing_file_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_file_shortcut_generating");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_file_shortcut(
        ent_file_shortcut,
        10, 22, 29);

    rel_file_shortcut_specialisation_shortcut_0000000001 = ent_file_shortcut->rel_specialisation_shortcut_head;

    ent_shortcut_0000000001 = rel_file_shortcut_specialisation_shortcut_0000000001->ent_shortcut;

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<Shortcut");
    adm_template_tab_in(10, 24, 29);
    adm_write_newline();
    adm_write_str("Id='");
    adm_write_str(ent_shortcut_0000000001->atb_id);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Directory='");
    adm_write_str(ent_file_shortcut->atb_directory);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Name='");
    adm_write_str(ent_shortcut_0000000001->atb_name);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("WorkingDirectory='INSTALLDIR'");
    adm_write_newline();
    adm_write_str("Icon='");
    adm_write_str(ent_file_shortcut->atb_icon);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("IconIndex='0'");
    adm_write_newline();
    adm_write_str("Advertise='yes'");
    adm_write_newline();
    adm_write_str("Description='");
    adm_write_str(ent_shortcut_0000000001->atb_description);
    adm_write_str("'/>");
    adm_template_tab_out(10, 24, 29);

    /* Traverse - TraverseSelection */

    adm_object_existent_file_shortcut(
        ent_file_shortcut,
        10, 39, 29);

    rel_file_shortcut_writing_file_0000000002 = ent_file_shortcut->rel_writing_file_head;

    if (rel_file_shortcut_writing_file_0000000002 != NULL) {

        ent_file_0000000002 = rel_file_shortcut_writing_file_0000000002->ent_file;

        /* Unrelate */

        adm_kill_relation_file_shortcut_writing_file(
            ent_file_shortcut,
            rel_file_shortcut_writing_file_0000000002,
            10, 42, 33);

        /* GenerateEvent */

        adm_send_event_file_done(
            ent_file_shortcut,
            ent_file_0000000002,
            10, 44, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_file_shortcut_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */