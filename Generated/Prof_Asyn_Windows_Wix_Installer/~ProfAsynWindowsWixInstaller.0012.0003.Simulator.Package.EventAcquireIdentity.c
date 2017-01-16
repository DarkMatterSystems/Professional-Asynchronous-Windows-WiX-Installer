
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Package Acquire Identity Event */

void adm_sim_acquire_identity_event_package_generate(
    void)
{
    adm_ent_package_typ * ent_package;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_package_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_package = adm_entity_system.ent_package.live_list_head;

    while (
        entity_not_found &&
        ent_package != NULL) {

        if (ent_package->identity == identity) {

            adm_send_event_package_generate(
                NULL,
                ent_package,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_package = ent_package->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_package_generate");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */