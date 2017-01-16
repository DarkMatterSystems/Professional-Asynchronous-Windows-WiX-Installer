
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator File Shortcut Acquire Identity Event */

void adm_sim_acquire_identity_event_file_shortcut_generate(
    void)
{
    adm_ent_file_shortcut_typ * ent_file_shortcut;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_shortcut_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_file_shortcut = adm_entity_system.ent_file_shortcut.live_list_head;

    while (
        entity_not_found &&
        ent_file_shortcut != NULL) {

        if (ent_file_shortcut->identity == identity) {

            adm_send_event_file_shortcut_generate(
                NULL,
                ent_file_shortcut,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_file_shortcut = ent_file_shortcut->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_shortcut_generate");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */