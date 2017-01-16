
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator File Acquire Identity Event */

void adm_sim_acquire_identity_event_file_generate(
    void)
{
    adm_ent_file_typ * ent_file;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_file = adm_entity_system.ent_file.live_list_head;

    while (
        entity_not_found &&
        ent_file != NULL) {

        if (ent_file->identity == identity) {

            adm_send_event_file_generate(
                NULL,
                ent_file,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_file = ent_file->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_generate");
    #endif
}

void adm_sim_acquire_identity_event_file_generate_file_shortcut(
    void)
{
    adm_ent_file_typ * ent_file;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_generate_file_shortcut");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_file = adm_entity_system.ent_file.live_list_head;

    while (
        entity_not_found &&
        ent_file != NULL) {

        if (ent_file->identity == identity) {

            adm_send_event_file_generate_file_shortcut(
                NULL,
                ent_file,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_file = ent_file->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_generate_file_shortcut");
    #endif
}

void adm_sim_acquire_identity_event_file_done(
    void)
{
    adm_ent_file_typ * ent_file;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_done");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_file = adm_entity_system.ent_file.live_list_head;

    while (
        entity_not_found &&
        ent_file != NULL) {

        if (ent_file->identity == identity) {

            adm_send_event_file_done(
                NULL,
                ent_file,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_file = ent_file->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_done");
    #endif
}

void adm_sim_acquire_identity_event_file_complete(
    void)
{
    adm_ent_file_typ * ent_file;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_complete");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_file = adm_entity_system.ent_file.live_list_head;

    while (
        entity_not_found &&
        ent_file != NULL) {

        if (ent_file->identity == identity) {

            adm_send_event_file_complete(
                NULL,
                ent_file,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_file = ent_file->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_file_complete");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */