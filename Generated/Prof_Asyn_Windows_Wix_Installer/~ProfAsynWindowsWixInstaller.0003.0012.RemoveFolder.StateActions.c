
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Remove Folder State Actions */

void adm_state_action_remove_folder_generating(
    adm_ent_remove_folder_typ * ent_remove_folder)
{
    /* Entity Objects */
    adm_ent_component_typ * ent_component_0000000001;

    /* Relationship Relations */
    adm_rel_remove_folder_writing_component_typ * rel_remove_folder_writing_component_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_remove_folder_generating");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<RemoveFolder");
    adm_template_tab_in(13, 18, 21);
    adm_write_newline();
    adm_write_str("Id='");
    adm_write_str(ent_remove_folder->atb_id);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("On='");
    adm_write_str(ent_remove_folder->atb_on);
    adm_write_str("'/>");
    adm_template_tab_out(13, 18, 21);

    /* Traverse - TraverseSelection */

    adm_object_existent_remove_folder(
        ent_remove_folder,
        13, 27, 29);

    rel_remove_folder_writing_component_0000000001 = ent_remove_folder->rel_writing_component_head;

    if (rel_remove_folder_writing_component_0000000001 != NULL) {

        ent_component_0000000001 = rel_remove_folder_writing_component_0000000001->ent_component;

        /* Unrelate */

        adm_kill_relation_remove_folder_writing_component(
            ent_remove_folder,
            rel_remove_folder_writing_component_0000000001,
            13, 30, 33);

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_remove_folder,
            ent_component_0000000001,
            13, 32, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_remove_folder_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */