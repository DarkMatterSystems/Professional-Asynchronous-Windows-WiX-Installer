
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Registry Key Dispatcher */

/* Dispatcher */

void adm_dispatcher_registry_key(
    void)
{
    adm_pool_target_registry_key_typ * pool_target_registry_key;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_registry_key");
    #endif

    pool_target_registry_key = adm_find_away_target_event_registry_key();

    adm_dispatch_state_action_registry_key(pool_target_registry_key);

    adm_dispatch_home_pool_registry_key();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_registry_key");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_registry_key(
    void)
{
    adm_pool_target_registry_key_typ * pool_target_registry_key;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_registry_key");
    #endif

    while (adm_entity_system.ent_registry_key.home_pool_head != NULL) {

        pool_target_registry_key = adm_find_home_target_event_registry_key();

        adm_dispatch_state_action_registry_key(pool_target_registry_key);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_registry_key");
    #endif
}


/* Find Home Target Event */

adm_pool_target_registry_key_typ * adm_find_home_target_event_registry_key(
    void)
{
    adm_pool_target_registry_key_typ * pool_target_registry_key;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_registry_key");
    #endif

    pool_target_registry_key = adm_entity_system.ent_registry_key.home_pool_head;

    adm_entity_system.ent_registry_key.home_pool_head = pool_target_registry_key->next;

    if (adm_entity_system.ent_registry_key.home_pool_head == NULL) {

        adm_entity_system.ent_registry_key.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_registry_key");
    #endif

    return (pool_target_registry_key);
}


/* Find Away Target Event */

adm_pool_target_registry_key_typ * adm_find_away_target_event_registry_key(
    void)
{
    adm_pool_target_registry_key_typ * pool_target_registry_key;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_registry_key");
    #endif

    pool_target_registry_key = adm_entity_system.ent_registry_key.away_pool_head;

    adm_entity_system.ent_registry_key.away_pool_head = pool_target_registry_key->next;

    if (adm_entity_system.ent_registry_key.away_pool_head == NULL) {

        adm_entity_system.ent_registry_key.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_registry_key");
    #endif

    return (pool_target_registry_key);
}


/* Dispatch State Action */

void adm_dispatch_state_action_registry_key(
    adm_pool_target_registry_key_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_registry_key");
    #endif

    if (pool_target->ent_registry_key != NULL) {

        adm_object_existent_registry_key(
            pool_target->ent_registry_key,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_REGISTRY_KEY_GENERATE :

            switch ((pool_target->ent_registry_key)->status) {

                case ADM_STATUS_REGISTRY_KEY_CREATING :

                    adm_sim_display_state_registry_key_generating(pool_target);

                    (pool_target->ent_registry_key)->status = ADM_STATUS_REGISTRY_KEY_GENERATING;

                    adm_state_action_registry_key_generating(
                        pool_target->ent_registry_key);

                break;

                case ADM_STATUS_REGISTRY_KEY_GENERATING :

                    adm_sim_display_state_registry_key_generating_registry_value(pool_target);

                    (pool_target->ent_registry_key)->status = ADM_STATUS_REGISTRY_KEY_GENERATING_REGISTRY_VALUE;

                    adm_state_action_registry_key_generating_registry_value(
                        pool_target->ent_registry_key);

                break;

                case ADM_STATUS_REGISTRY_KEY_GENERATING_REGISTRY_VALUE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Registry_Key",
                        (pool_target->ent_registry_key)->identity,
                        "Event:Generate",
                        "State:Generating_Registry_Value");

                break;

                case ADM_STATUS_REGISTRY_KEY_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Registry_Key",
                        (pool_target->ent_registry_key)->identity,
                        "Event:Generate",
                        "State:Idle");

                break;
            }

        break;

        case ADM_EVENT_REGISTRY_KEY_COMPLETE :

            switch ((pool_target->ent_registry_key)->status) {

                case ADM_STATUS_REGISTRY_KEY_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Registry_Key",
                        (pool_target->ent_registry_key)->identity,
                        "Event:Complete",
                        "State:Creating");

                break;

                case ADM_STATUS_REGISTRY_KEY_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Registry_Key",
                        (pool_target->ent_registry_key)->identity,
                        "Event:Complete",
                        "State:Generating");

                break;

                case ADM_STATUS_REGISTRY_KEY_GENERATING_REGISTRY_VALUE :

                    adm_sim_display_state_registry_key_idle(pool_target);

                    (pool_target->ent_registry_key)->status = ADM_STATUS_REGISTRY_KEY_IDLE;

                    adm_state_action_registry_key_idle(
                        pool_target->ent_registry_key);

                break;

                case ADM_STATUS_REGISTRY_KEY_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Registry_Key",
                        (pool_target->ent_registry_key)->identity,
                        "Event:Complete",
                        "State:Idle");

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_registry_key");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */