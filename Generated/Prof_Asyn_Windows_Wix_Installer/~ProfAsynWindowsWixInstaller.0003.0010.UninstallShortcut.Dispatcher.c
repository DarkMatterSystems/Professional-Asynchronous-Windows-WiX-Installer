
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Uninstall Shortcut Dispatcher */

/* Dispatcher */

void adm_dispatcher_uninstall_shortcut(
    void)
{
    adm_pool_target_uninstall_shortcut_typ * pool_target_uninstall_shortcut;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_uninstall_shortcut");
    #endif

    pool_target_uninstall_shortcut = adm_find_away_target_event_uninstall_shortcut();

    adm_dispatch_state_action_uninstall_shortcut(pool_target_uninstall_shortcut);

    adm_dispatch_home_pool_uninstall_shortcut();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_uninstall_shortcut");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_uninstall_shortcut(
    void)
{
    adm_pool_target_uninstall_shortcut_typ * pool_target_uninstall_shortcut;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_uninstall_shortcut");
    #endif

    while (adm_entity_system.ent_uninstall_shortcut.home_pool_head != NULL) {

        pool_target_uninstall_shortcut = adm_find_home_target_event_uninstall_shortcut();

        adm_dispatch_state_action_uninstall_shortcut(pool_target_uninstall_shortcut);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_uninstall_shortcut");
    #endif
}


/* Find Home Target Event */

adm_pool_target_uninstall_shortcut_typ * adm_find_home_target_event_uninstall_shortcut(
    void)
{
    adm_pool_target_uninstall_shortcut_typ * pool_target_uninstall_shortcut;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_uninstall_shortcut");
    #endif

    pool_target_uninstall_shortcut = adm_entity_system.ent_uninstall_shortcut.home_pool_head;

    adm_entity_system.ent_uninstall_shortcut.home_pool_head = pool_target_uninstall_shortcut->next;

    if (adm_entity_system.ent_uninstall_shortcut.home_pool_head == NULL) {

        adm_entity_system.ent_uninstall_shortcut.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_uninstall_shortcut");
    #endif

    return (pool_target_uninstall_shortcut);
}


/* Find Away Target Event */

adm_pool_target_uninstall_shortcut_typ * adm_find_away_target_event_uninstall_shortcut(
    void)
{
    adm_pool_target_uninstall_shortcut_typ * pool_target_uninstall_shortcut;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_uninstall_shortcut");
    #endif

    pool_target_uninstall_shortcut = adm_entity_system.ent_uninstall_shortcut.away_pool_head;

    adm_entity_system.ent_uninstall_shortcut.away_pool_head = pool_target_uninstall_shortcut->next;

    if (adm_entity_system.ent_uninstall_shortcut.away_pool_head == NULL) {

        adm_entity_system.ent_uninstall_shortcut.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_uninstall_shortcut");
    #endif

    return (pool_target_uninstall_shortcut);
}


/* Dispatch State Action */

void adm_dispatch_state_action_uninstall_shortcut(
    adm_pool_target_uninstall_shortcut_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_uninstall_shortcut");
    #endif

    if (pool_target->ent_uninstall_shortcut != NULL) {

        adm_object_existent_uninstall_shortcut(
            pool_target->ent_uninstall_shortcut,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_UNINSTALL_SHORTCUT_GENERATE :

            switch ((pool_target->ent_uninstall_shortcut)->status) {

                case ADM_STATUS_UNINSTALL_SHORTCUT_GENERATING :

                    adm_sim_display_state_uninstall_shortcut_generating(pool_target);

                    (pool_target->ent_uninstall_shortcut)->status = ADM_STATUS_UNINSTALL_SHORTCUT_GENERATING;

                    adm_state_action_uninstall_shortcut_generating(
                        pool_target->ent_uninstall_shortcut);

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_uninstall_shortcut");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */