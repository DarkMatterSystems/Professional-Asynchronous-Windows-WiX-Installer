
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Property Dispatcher */

/* Dispatcher */

void adm_dispatcher_property(
    void)
{
    adm_pool_target_property_typ * pool_target_property;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_property");
    #endif

    pool_target_property = adm_find_away_target_event_property();

    adm_dispatch_state_action_property(pool_target_property);

    adm_dispatch_home_pool_property();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_property");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_property(
    void)
{
    adm_pool_target_property_typ * pool_target_property;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_property");
    #endif

    while (adm_entity_system.ent_property.home_pool_head != NULL) {

        pool_target_property = adm_find_home_target_event_property();

        adm_dispatch_state_action_property(pool_target_property);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_property");
    #endif
}


/* Find Home Target Event */

adm_pool_target_property_typ * adm_find_home_target_event_property(
    void)
{
    adm_pool_target_property_typ * pool_target_property;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_property");
    #endif

    pool_target_property = adm_entity_system.ent_property.home_pool_head;

    adm_entity_system.ent_property.home_pool_head = pool_target_property->next;

    if (adm_entity_system.ent_property.home_pool_head == NULL) {

        adm_entity_system.ent_property.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_property");
    #endif

    return (pool_target_property);
}


/* Find Away Target Event */

adm_pool_target_property_typ * adm_find_away_target_event_property(
    void)
{
    adm_pool_target_property_typ * pool_target_property;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_property");
    #endif

    pool_target_property = adm_entity_system.ent_property.away_pool_head;

    adm_entity_system.ent_property.away_pool_head = pool_target_property->next;

    if (adm_entity_system.ent_property.away_pool_head == NULL) {

        adm_entity_system.ent_property.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_property");
    #endif

    return (pool_target_property);
}


/* Dispatch State Action */

void adm_dispatch_state_action_property(
    adm_pool_target_property_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_property");
    #endif

    if (pool_target->ent_property != NULL) {

        adm_object_existent_property(
            pool_target->ent_property,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_PROPERTY_GENERATE :

            switch ((pool_target->ent_property)->status) {

                case ADM_STATUS_PROPERTY_GENERATING :

                    adm_sim_display_state_property_generating(pool_target);

                    (pool_target->ent_property)->status = ADM_STATUS_PROPERTY_GENERATING;

                    adm_state_action_property_generating(
                        pool_target->ent_property);

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_property");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */