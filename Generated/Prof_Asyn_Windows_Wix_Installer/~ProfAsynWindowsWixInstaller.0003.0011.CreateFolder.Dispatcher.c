
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Create Folder Dispatcher */

/* Dispatcher */

void adm_dispatcher_create_folder(
    void)
{
    adm_pool_target_create_folder_typ * pool_target_create_folder;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_create_folder");
    #endif

    pool_target_create_folder = adm_find_away_target_event_create_folder();

    adm_dispatch_state_action_create_folder(pool_target_create_folder);

    adm_dispatch_home_pool_create_folder();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_create_folder");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_create_folder(
    void)
{
    adm_pool_target_create_folder_typ * pool_target_create_folder;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_create_folder");
    #endif

    while (adm_entity_system.ent_create_folder.home_pool_head != NULL) {

        pool_target_create_folder = adm_find_home_target_event_create_folder();

        adm_dispatch_state_action_create_folder(pool_target_create_folder);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_create_folder");
    #endif
}


/* Find Home Target Event */

adm_pool_target_create_folder_typ * adm_find_home_target_event_create_folder(
    void)
{
    adm_pool_target_create_folder_typ * pool_target_create_folder;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_create_folder");
    #endif

    pool_target_create_folder = adm_entity_system.ent_create_folder.home_pool_head;

    adm_entity_system.ent_create_folder.home_pool_head = pool_target_create_folder->next;

    if (adm_entity_system.ent_create_folder.home_pool_head == NULL) {

        adm_entity_system.ent_create_folder.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_create_folder");
    #endif

    return (pool_target_create_folder);
}


/* Find Away Target Event */

adm_pool_target_create_folder_typ * adm_find_away_target_event_create_folder(
    void)
{
    adm_pool_target_create_folder_typ * pool_target_create_folder;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_create_folder");
    #endif

    pool_target_create_folder = adm_entity_system.ent_create_folder.away_pool_head;

    adm_entity_system.ent_create_folder.away_pool_head = pool_target_create_folder->next;

    if (adm_entity_system.ent_create_folder.away_pool_head == NULL) {

        adm_entity_system.ent_create_folder.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_create_folder");
    #endif

    return (pool_target_create_folder);
}


/* Dispatch State Action */

void adm_dispatch_state_action_create_folder(
    adm_pool_target_create_folder_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_create_folder");
    #endif

    if (pool_target->ent_create_folder != NULL) {

        adm_object_existent_create_folder(
            pool_target->ent_create_folder,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_CREATE_FOLDER_GENERATE :

            switch ((pool_target->ent_create_folder)->status) {

                case ADM_STATUS_CREATE_FOLDER_GENERATING :

                    adm_sim_display_state_create_folder_generating(pool_target);

                    (pool_target->ent_create_folder)->status = ADM_STATUS_CREATE_FOLDER_GENERATING;

                    adm_state_action_create_folder_generating(
                        pool_target->ent_create_folder);

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_create_folder");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */