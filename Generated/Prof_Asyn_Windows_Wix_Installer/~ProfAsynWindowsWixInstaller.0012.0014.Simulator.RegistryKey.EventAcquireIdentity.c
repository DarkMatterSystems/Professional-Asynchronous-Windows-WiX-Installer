
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Registry Key Acquire Identity Event */

void adm_sim_acquire_identity_event_registry_key_generate(
    void)
{
    adm_ent_registry_key_typ * ent_registry_key;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_registry_key_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_registry_key = adm_entity_system.ent_registry_key.live_list_head;

    while (
        entity_not_found &&
        ent_registry_key != NULL) {

        if (ent_registry_key->identity == identity) {

            adm_send_event_registry_key_generate(
                NULL,
                ent_registry_key,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_registry_key = ent_registry_key->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_registry_key_generate");
    #endif
}

void adm_sim_acquire_identity_event_registry_key_complete(
    void)
{
    adm_ent_registry_key_typ * ent_registry_key;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_registry_key_complete");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_registry_key = adm_entity_system.ent_registry_key.live_list_head;

    while (
        entity_not_found &&
        ent_registry_key != NULL) {

        if (ent_registry_key->identity == identity) {

            adm_send_event_registry_key_complete(
                NULL,
                ent_registry_key,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_registry_key = ent_registry_key->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_registry_key_complete");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */