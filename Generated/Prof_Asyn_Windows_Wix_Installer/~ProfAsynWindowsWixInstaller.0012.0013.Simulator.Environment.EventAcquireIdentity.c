
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Environment Acquire Identity Event */

void adm_sim_acquire_identity_event_environment_generate(
    void)
{
    adm_ent_environment_typ * ent_environment;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_environment_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_environment = adm_entity_system.ent_environment.live_list_head;

    while (
        entity_not_found &&
        ent_environment != NULL) {

        if (ent_environment->identity == identity) {

            adm_send_event_environment_generate(
                NULL,
                ent_environment,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_environment = ent_environment->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_environment_generate");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */