
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Create Folder State Actions */

void adm_state_action_create_folder_generating(
    adm_ent_create_folder_typ * ent_create_folder)
{
    /* Entity Objects */
    adm_ent_component_typ * ent_component_0000000001;

    /* Relationship Relations */
    adm_rel_create_folder_writing_component_typ * rel_create_folder_writing_component_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_create_folder_generating");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<CreateFolder/>");

    /* Traverse - TraverseSelection */

    adm_object_existent_create_folder(
        ent_create_folder,
        12, 20, 29);

    rel_create_folder_writing_component_0000000001 = ent_create_folder->rel_writing_component_head;

    if (rel_create_folder_writing_component_0000000001 != NULL) {

        ent_component_0000000001 = rel_create_folder_writing_component_0000000001->ent_component;

        /* Unrelate */

        adm_kill_relation_create_folder_writing_component(
            ent_create_folder,
            rel_create_folder_writing_component_0000000001,
            12, 23, 33);

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_create_folder,
            ent_component_0000000001,
            12, 25, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_create_folder_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */