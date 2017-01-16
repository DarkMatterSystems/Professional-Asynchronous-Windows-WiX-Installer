
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Feature Acquire Identity Event */

void adm_sim_acquire_identity_event_feature_generate(
    void)
{
    adm_ent_feature_typ * ent_feature;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_feature = adm_entity_system.ent_feature.live_list_head;

    while (
        entity_not_found &&
        ent_feature != NULL) {

        if (ent_feature->identity == identity) {

            adm_send_event_feature_generate(
                NULL,
                ent_feature,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_feature = ent_feature->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_generate");
    #endif
}

void adm_sim_acquire_identity_event_feature_generate_feature(
    void)
{
    adm_ent_feature_typ * ent_feature;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_generate_feature");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_feature = adm_entity_system.ent_feature.live_list_head;

    while (
        entity_not_found &&
        ent_feature != NULL) {

        if (ent_feature->identity == identity) {

            adm_send_event_feature_generate_feature(
                NULL,
                ent_feature,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_feature = ent_feature->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_generate_feature");
    #endif
}

void adm_sim_acquire_identity_event_feature_generate_component(
    void)
{
    adm_ent_feature_typ * ent_feature;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_generate_component");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_feature = adm_entity_system.ent_feature.live_list_head;

    while (
        entity_not_found &&
        ent_feature != NULL) {

        if (ent_feature->identity == identity) {

            adm_send_event_feature_generate_component(
                NULL,
                ent_feature,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_feature = ent_feature->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_generate_component");
    #endif
}

void adm_sim_acquire_identity_event_feature_done(
    void)
{
    adm_ent_feature_typ * ent_feature;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_done");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_feature = adm_entity_system.ent_feature.live_list_head;

    while (
        entity_not_found &&
        ent_feature != NULL) {

        if (ent_feature->identity == identity) {

            adm_send_event_feature_done(
                NULL,
                ent_feature,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_feature = ent_feature->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_done");
    #endif
}

void adm_sim_acquire_identity_event_feature_complete(
    void)
{
    adm_ent_feature_typ * ent_feature;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_complete");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_feature = adm_entity_system.ent_feature.live_list_head;

    while (
        entity_not_found &&
        ent_feature != NULL) {

        if (ent_feature->identity == identity) {

            adm_send_event_feature_complete(
                NULL,
                ent_feature,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_feature = ent_feature->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_feature_complete");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */