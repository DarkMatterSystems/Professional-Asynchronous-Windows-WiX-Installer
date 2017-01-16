
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* File Dispatcher */

/* Dispatcher */

void adm_dispatcher_file(
    void)
{
    adm_pool_target_file_typ * pool_target_file;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_file");
    #endif

    pool_target_file = adm_find_away_target_event_file();

    adm_dispatch_state_action_file(pool_target_file);

    adm_dispatch_home_pool_file();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_file");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_file(
    void)
{
    adm_pool_target_file_typ * pool_target_file;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_file");
    #endif

    while (adm_entity_system.ent_file.home_pool_head != NULL) {

        pool_target_file = adm_find_home_target_event_file();

        adm_dispatch_state_action_file(pool_target_file);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_file");
    #endif
}


/* Find Home Target Event */

adm_pool_target_file_typ * adm_find_home_target_event_file(
    void)
{
    adm_pool_target_file_typ * pool_target_file;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_file");
    #endif

    pool_target_file = adm_entity_system.ent_file.home_pool_head;

    adm_entity_system.ent_file.home_pool_head = pool_target_file->next;

    if (adm_entity_system.ent_file.home_pool_head == NULL) {

        adm_entity_system.ent_file.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_file");
    #endif

    return (pool_target_file);
}


/* Find Away Target Event */

adm_pool_target_file_typ * adm_find_away_target_event_file(
    void)
{
    adm_pool_target_file_typ * pool_target_file;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_file");
    #endif

    pool_target_file = adm_entity_system.ent_file.away_pool_head;

    adm_entity_system.ent_file.away_pool_head = pool_target_file->next;

    if (adm_entity_system.ent_file.away_pool_head == NULL) {

        adm_entity_system.ent_file.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_file");
    #endif

    return (pool_target_file);
}


/* Dispatch State Action */

void adm_dispatch_state_action_file(
    adm_pool_target_file_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_file");
    #endif

    if (pool_target->ent_file != NULL) {

        adm_object_existent_file(
            pool_target->ent_file,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_FILE_GENERATE :

            switch ((pool_target->ent_file)->status) {

                case ADM_STATUS_FILE_CREATING :

                    adm_sim_display_state_file_generating(pool_target);

                    (pool_target->ent_file)->status = ADM_STATUS_FILE_GENERATING;

                    adm_state_action_file_generating(
                        pool_target->ent_file);

                break;

                case ADM_STATUS_FILE_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Generate",
                        "State:Generating");

                break;

                case ADM_STATUS_FILE_GENERATING_FILE_SHORTCUT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Generate",
                        "State:Generating_File_Shortcut");

                break;

                case ADM_STATUS_FILE_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Generate",
                        "State:Idle");

                break;
            }

        break;

        case ADM_EVENT_FILE_GENERATE_FILE_SHORTCUT :

            switch ((pool_target->ent_file)->status) {

                case ADM_STATUS_FILE_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Generate_file_shortcut",
                        "State:Creating");

                break;

                case ADM_STATUS_FILE_GENERATING :

                    adm_sim_display_state_file_generating_file_shortcut(pool_target);

                    (pool_target->ent_file)->status = ADM_STATUS_FILE_GENERATING_FILE_SHORTCUT;

                    adm_state_action_file_generating_file_shortcut(
                        pool_target->ent_file);

                break;

                case ADM_STATUS_FILE_GENERATING_FILE_SHORTCUT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Generate_file_shortcut",
                        "State:Generating_File_Shortcut");

                break;

                case ADM_STATUS_FILE_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Generate_file_shortcut",
                        "State:Idle");

                break;
            }

        break;

        case ADM_EVENT_FILE_DONE :

            switch ((pool_target->ent_file)->status) {

                case ADM_STATUS_FILE_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Done",
                        "State:Creating");

                break;

                case ADM_STATUS_FILE_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Done",
                        "State:Generating");

                break;

                case ADM_STATUS_FILE_GENERATING_FILE_SHORTCUT :

                    adm_sim_display_state_file_generating_file_shortcut(pool_target);

                    (pool_target->ent_file)->status = ADM_STATUS_FILE_GENERATING_FILE_SHORTCUT;

                    adm_state_action_file_generating_file_shortcut(
                        pool_target->ent_file);

                break;

                case ADM_STATUS_FILE_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Done",
                        "State:Idle");

                break;
            }

        break;

        case ADM_EVENT_FILE_COMPLETE :

            switch ((pool_target->ent_file)->status) {

                case ADM_STATUS_FILE_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Complete",
                        "State:Creating");

                break;

                case ADM_STATUS_FILE_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Complete",
                        "State:Generating");

                break;

                case ADM_STATUS_FILE_GENERATING_FILE_SHORTCUT :

                    adm_sim_display_state_file_idle(pool_target);

                    (pool_target->ent_file)->status = ADM_STATUS_FILE_IDLE;

                    adm_state_action_file_idle(
                        pool_target->ent_file);

                break;

                case ADM_STATUS_FILE_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:File",
                        (pool_target->ent_file)->identity,
                        "Event:Complete",
                        "State:Idle");

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_file");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */