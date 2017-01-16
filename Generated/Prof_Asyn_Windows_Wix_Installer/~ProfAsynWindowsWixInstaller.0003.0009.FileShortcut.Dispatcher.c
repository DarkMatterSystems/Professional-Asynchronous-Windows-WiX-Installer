
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* File Shortcut Dispatcher */

/* Dispatcher */

void adm_dispatcher_file_shortcut(
    void)
{
    adm_pool_target_file_shortcut_typ * pool_target_file_shortcut;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_file_shortcut");
    #endif

    pool_target_file_shortcut = adm_find_away_target_event_file_shortcut();

    adm_dispatch_state_action_file_shortcut(pool_target_file_shortcut);

    adm_dispatch_home_pool_file_shortcut();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_file_shortcut");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_file_shortcut(
    void)
{
    adm_pool_target_file_shortcut_typ * pool_target_file_shortcut;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_file_shortcut");
    #endif

    while (adm_entity_system.ent_file_shortcut.home_pool_head != NULL) {

        pool_target_file_shortcut = adm_find_home_target_event_file_shortcut();

        adm_dispatch_state_action_file_shortcut(pool_target_file_shortcut);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_file_shortcut");
    #endif
}


/* Find Home Target Event */

adm_pool_target_file_shortcut_typ * adm_find_home_target_event_file_shortcut(
    void)
{
    adm_pool_target_file_shortcut_typ * pool_target_file_shortcut;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_file_shortcut");
    #endif

    pool_target_file_shortcut = adm_entity_system.ent_file_shortcut.home_pool_head;

    adm_entity_system.ent_file_shortcut.home_pool_head = pool_target_file_shortcut->next;

    if (adm_entity_system.ent_file_shortcut.home_pool_head == NULL) {

        adm_entity_system.ent_file_shortcut.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_file_shortcut");
    #endif

    return (pool_target_file_shortcut);
}


/* Find Away Target Event */

adm_pool_target_file_shortcut_typ * adm_find_away_target_event_file_shortcut(
    void)
{
    adm_pool_target_file_shortcut_typ * pool_target_file_shortcut;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_file_shortcut");
    #endif

    pool_target_file_shortcut = adm_entity_system.ent_file_shortcut.away_pool_head;

    adm_entity_system.ent_file_shortcut.away_pool_head = pool_target_file_shortcut->next;

    if (adm_entity_system.ent_file_shortcut.away_pool_head == NULL) {

        adm_entity_system.ent_file_shortcut.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_file_shortcut");
    #endif

    return (pool_target_file_shortcut);
}


/* Dispatch State Action */

void adm_dispatch_state_action_file_shortcut(
    adm_pool_target_file_shortcut_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_file_shortcut");
    #endif

    if (pool_target->ent_file_shortcut != NULL) {

        adm_object_existent_file_shortcut(
            pool_target->ent_file_shortcut,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_FILE_SHORTCUT_GENERATE :

            switch ((pool_target->ent_file_shortcut)->status) {

                case ADM_STATUS_FILE_SHORTCUT_GENERATING :

                    adm_sim_display_state_file_shortcut_generating(pool_target);

                    (pool_target->ent_file_shortcut)->status = ADM_STATUS_FILE_SHORTCUT_GENERATING;

                    adm_state_action_file_shortcut_generating(
                        pool_target->ent_file_shortcut);

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_file_shortcut");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */