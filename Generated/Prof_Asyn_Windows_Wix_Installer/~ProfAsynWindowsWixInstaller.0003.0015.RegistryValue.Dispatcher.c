
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Registry Value Dispatcher */

/* Dispatcher */

void adm_dispatcher_registry_value(
    void)
{
    adm_pool_target_registry_value_typ * pool_target_registry_value;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_registry_value");
    #endif

    pool_target_registry_value = adm_find_away_target_event_registry_value();

    adm_dispatch_state_action_registry_value(pool_target_registry_value);

    adm_dispatch_home_pool_registry_value();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_registry_value");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_registry_value(
    void)
{
    adm_pool_target_registry_value_typ * pool_target_registry_value;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_registry_value");
    #endif

    while (adm_entity_system.ent_registry_value.home_pool_head != NULL) {

        pool_target_registry_value = adm_find_home_target_event_registry_value();

        adm_dispatch_state_action_registry_value(pool_target_registry_value);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_registry_value");
    #endif
}


/* Find Home Target Event */

adm_pool_target_registry_value_typ * adm_find_home_target_event_registry_value(
    void)
{
    adm_pool_target_registry_value_typ * pool_target_registry_value;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_registry_value");
    #endif

    pool_target_registry_value = adm_entity_system.ent_registry_value.home_pool_head;

    adm_entity_system.ent_registry_value.home_pool_head = pool_target_registry_value->next;

    if (adm_entity_system.ent_registry_value.home_pool_head == NULL) {

        adm_entity_system.ent_registry_value.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_registry_value");
    #endif

    return (pool_target_registry_value);
}


/* Find Away Target Event */

adm_pool_target_registry_value_typ * adm_find_away_target_event_registry_value(
    void)
{
    adm_pool_target_registry_value_typ * pool_target_registry_value;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_registry_value");
    #endif

    pool_target_registry_value = adm_entity_system.ent_registry_value.away_pool_head;

    adm_entity_system.ent_registry_value.away_pool_head = pool_target_registry_value->next;

    if (adm_entity_system.ent_registry_value.away_pool_head == NULL) {

        adm_entity_system.ent_registry_value.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_registry_value");
    #endif

    return (pool_target_registry_value);
}


/* Dispatch State Action */

void adm_dispatch_state_action_registry_value(
    adm_pool_target_registry_value_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_registry_value");
    #endif

    if (pool_target->ent_registry_value != NULL) {

        adm_object_existent_registry_value(
            pool_target->ent_registry_value,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_REGISTRY_VALUE_GENERATE :

            switch ((pool_target->ent_registry_value)->status) {

                case ADM_STATUS_REGISTRY_VALUE_GENERATING :

                    adm_sim_display_state_registry_value_generating(pool_target);

                    (pool_target->ent_registry_value)->status = ADM_STATUS_REGISTRY_VALUE_GENERATING;

                    adm_state_action_registry_value_generating(
                        pool_target->ent_registry_value);

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_registry_value");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */