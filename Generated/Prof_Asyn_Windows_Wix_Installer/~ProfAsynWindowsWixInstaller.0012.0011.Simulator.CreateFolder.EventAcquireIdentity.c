
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Create Folder Acquire Identity Event */

void adm_sim_acquire_identity_event_create_folder_generate(
    void)
{
    adm_ent_create_folder_typ * ent_create_folder;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_create_folder_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_create_folder = adm_entity_system.ent_create_folder.live_list_head;

    while (
        entity_not_found &&
        ent_create_folder != NULL) {

        if (ent_create_folder->identity == identity) {

            adm_send_event_create_folder_generate(
                NULL,
                ent_create_folder,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_create_folder = ent_create_folder->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_create_folder_generate");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */