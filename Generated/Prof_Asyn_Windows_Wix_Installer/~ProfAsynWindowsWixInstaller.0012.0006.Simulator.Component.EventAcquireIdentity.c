
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Component Acquire Identity Event */

void adm_sim_acquire_identity_event_component_generate(
    void)
{
    adm_ent_component_typ * ent_component;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_component_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_component = adm_entity_system.ent_component.live_list_head;

    while (
        entity_not_found &&
        ent_component != NULL) {

        if (ent_component->identity == identity) {

            adm_send_event_component_generate(
                NULL,
                ent_component,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_component = ent_component->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_component_generate");
    #endif
}

void adm_sim_acquire_identity_event_component_generate_reference(
    void)
{
    adm_ent_component_typ * ent_component;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_component_generate_reference");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_component = adm_entity_system.ent_component.live_list_head;

    while (
        entity_not_found &&
        ent_component != NULL) {

        if (ent_component->identity == identity) {

            adm_send_event_component_generate_reference(
                NULL,
                ent_component,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_component = ent_component->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_component_generate_reference");
    #endif
}

void adm_sim_acquire_identity_event_component_complete(
    void)
{
    adm_ent_component_typ * ent_component;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_component_complete");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_component = adm_entity_system.ent_component.live_list_head;

    while (
        entity_not_found &&
        ent_component != NULL) {

        if (ent_component->identity == identity) {

            adm_send_event_component_complete(
                NULL,
                ent_component,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_component = ent_component->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_component_complete");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */