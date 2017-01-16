
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Directory Acquire Identity Event */

void adm_sim_acquire_identity_event_directory_generate(
    void)
{
    adm_ent_directory_typ * ent_directory;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_directory = adm_entity_system.ent_directory.live_list_head;

    while (
        entity_not_found &&
        ent_directory != NULL) {

        if (ent_directory->identity == identity) {

            adm_send_event_directory_generate(
                NULL,
                ent_directory,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_directory = ent_directory->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_generate");
    #endif
}

void adm_sim_acquire_identity_event_directory_generate_component(
    void)
{
    adm_ent_directory_typ * ent_directory;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_generate_component");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_directory = adm_entity_system.ent_directory.live_list_head;

    while (
        entity_not_found &&
        ent_directory != NULL) {

        if (ent_directory->identity == identity) {

            adm_send_event_directory_generate_component(
                NULL,
                ent_directory,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_directory = ent_directory->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_generate_component");
    #endif
}

void adm_sim_acquire_identity_event_directory_generate_directory(
    void)
{
    adm_ent_directory_typ * ent_directory;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_generate_directory");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_directory = adm_entity_system.ent_directory.live_list_head;

    while (
        entity_not_found &&
        ent_directory != NULL) {

        if (ent_directory->identity == identity) {

            adm_send_event_directory_generate_directory(
                NULL,
                ent_directory,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_directory = ent_directory->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_generate_directory");
    #endif
}

void adm_sim_acquire_identity_event_directory_done(
    void)
{
    adm_ent_directory_typ * ent_directory;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_done");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_directory = adm_entity_system.ent_directory.live_list_head;

    while (
        entity_not_found &&
        ent_directory != NULL) {

        if (ent_directory->identity == identity) {

            adm_send_event_directory_done(
                NULL,
                ent_directory,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_directory = ent_directory->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_done");
    #endif
}

void adm_sim_acquire_identity_event_directory_complete(
    void)
{
    adm_ent_directory_typ * ent_directory;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_complete");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_directory = adm_entity_system.ent_directory.live_list_head;

    while (
        entity_not_found &&
        ent_directory != NULL) {

        if (ent_directory->identity == identity) {

            adm_send_event_directory_complete(
                NULL,
                ent_directory,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_directory = ent_directory->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_directory_complete");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */