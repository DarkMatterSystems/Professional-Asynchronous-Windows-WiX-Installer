
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Environment Dispatcher */

/* Dispatcher */

void adm_dispatcher_environment(
    void)
{
    adm_pool_target_environment_typ * pool_target_environment;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_environment");
    #endif

    pool_target_environment = adm_find_away_target_event_environment();

    adm_dispatch_state_action_environment(pool_target_environment);

    adm_dispatch_home_pool_environment();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_environment");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_environment(
    void)
{
    adm_pool_target_environment_typ * pool_target_environment;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_environment");
    #endif

    while (adm_entity_system.ent_environment.home_pool_head != NULL) {

        pool_target_environment = adm_find_home_target_event_environment();

        adm_dispatch_state_action_environment(pool_target_environment);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_environment");
    #endif
}


/* Find Home Target Event */

adm_pool_target_environment_typ * adm_find_home_target_event_environment(
    void)
{
    adm_pool_target_environment_typ * pool_target_environment;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_environment");
    #endif

    pool_target_environment = adm_entity_system.ent_environment.home_pool_head;

    adm_entity_system.ent_environment.home_pool_head = pool_target_environment->next;

    if (adm_entity_system.ent_environment.home_pool_head == NULL) {

        adm_entity_system.ent_environment.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_environment");
    #endif

    return (pool_target_environment);
}


/* Find Away Target Event */

adm_pool_target_environment_typ * adm_find_away_target_event_environment(
    void)
{
    adm_pool_target_environment_typ * pool_target_environment;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_environment");
    #endif

    pool_target_environment = adm_entity_system.ent_environment.away_pool_head;

    adm_entity_system.ent_environment.away_pool_head = pool_target_environment->next;

    if (adm_entity_system.ent_environment.away_pool_head == NULL) {

        adm_entity_system.ent_environment.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_environment");
    #endif

    return (pool_target_environment);
}


/* Dispatch State Action */

void adm_dispatch_state_action_environment(
    adm_pool_target_environment_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_environment");
    #endif

    if (pool_target->ent_environment != NULL) {

        adm_object_existent_environment(
            pool_target->ent_environment,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_ENVIRONMENT_GENERATE :

            switch ((pool_target->ent_environment)->status) {

                case ADM_STATUS_ENVIRONMENT_GENERATING :

                    adm_sim_display_state_environment_generating(pool_target);

                    (pool_target->ent_environment)->status = ADM_STATUS_ENVIRONMENT_GENERATING;

                    adm_state_action_environment_generating(
                        pool_target->ent_environment);

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_environment");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */