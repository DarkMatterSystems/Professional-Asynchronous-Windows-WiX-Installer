
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Package Dispatcher */

/* Dispatcher */

void adm_dispatcher_package(
    void)
{
    adm_pool_target_package_typ * pool_target_package;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_package");
    #endif

    pool_target_package = adm_find_away_target_event_package();

    adm_dispatch_state_action_package(pool_target_package);

    adm_dispatch_home_pool_package();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_package");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_package(
    void)
{
    adm_pool_target_package_typ * pool_target_package;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_package");
    #endif

    while (adm_entity_system.ent_package.home_pool_head != NULL) {

        pool_target_package = adm_find_home_target_event_package();

        adm_dispatch_state_action_package(pool_target_package);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_package");
    #endif
}


/* Find Home Target Event */

adm_pool_target_package_typ * adm_find_home_target_event_package(
    void)
{
    adm_pool_target_package_typ * pool_target_package;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_package");
    #endif

    pool_target_package = adm_entity_system.ent_package.home_pool_head;

    adm_entity_system.ent_package.home_pool_head = pool_target_package->next;

    if (adm_entity_system.ent_package.home_pool_head == NULL) {

        adm_entity_system.ent_package.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_package");
    #endif

    return (pool_target_package);
}


/* Find Away Target Event */

adm_pool_target_package_typ * adm_find_away_target_event_package(
    void)
{
    adm_pool_target_package_typ * pool_target_package;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_package");
    #endif

    pool_target_package = adm_entity_system.ent_package.away_pool_head;

    adm_entity_system.ent_package.away_pool_head = pool_target_package->next;

    if (adm_entity_system.ent_package.away_pool_head == NULL) {

        adm_entity_system.ent_package.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_package");
    #endif

    return (pool_target_package);
}


/* Dispatch State Action */

void adm_dispatch_state_action_package(
    adm_pool_target_package_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_package");
    #endif

    if (pool_target->ent_package != NULL) {

        adm_object_existent_package(
            pool_target->ent_package,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_PACKAGE_GENERATE :

            switch ((pool_target->ent_package)->status) {

                case ADM_STATUS_PACKAGE_GENERATING :

                    adm_sim_display_state_package_generating(pool_target);

                    (pool_target->ent_package)->status = ADM_STATUS_PACKAGE_GENERATING;

                    adm_state_action_package_generating(
                        pool_target->ent_package);

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_package");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */