
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Directory Dispatcher */

/* Dispatcher */

void adm_dispatcher_directory(
    void)
{
    adm_pool_target_directory_typ * pool_target_directory;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_directory");
    #endif

    pool_target_directory = adm_find_away_target_event_directory();

    adm_dispatch_state_action_directory(pool_target_directory);

    adm_dispatch_home_pool_directory();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_directory");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_directory(
    void)
{
    adm_pool_target_directory_typ * pool_target_directory;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_directory");
    #endif

    while (adm_entity_system.ent_directory.home_pool_head != NULL) {

        pool_target_directory = adm_find_home_target_event_directory();

        adm_dispatch_state_action_directory(pool_target_directory);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_directory");
    #endif
}


/* Find Home Target Event */

adm_pool_target_directory_typ * adm_find_home_target_event_directory(
    void)
{
    adm_pool_target_directory_typ * pool_target_directory;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_directory");
    #endif

    pool_target_directory = adm_entity_system.ent_directory.home_pool_head;

    adm_entity_system.ent_directory.home_pool_head = pool_target_directory->next;

    if (adm_entity_system.ent_directory.home_pool_head == NULL) {

        adm_entity_system.ent_directory.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_directory");
    #endif

    return (pool_target_directory);
}


/* Find Away Target Event */

adm_pool_target_directory_typ * adm_find_away_target_event_directory(
    void)
{
    adm_pool_target_directory_typ * pool_target_directory;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_directory");
    #endif

    pool_target_directory = adm_entity_system.ent_directory.away_pool_head;

    adm_entity_system.ent_directory.away_pool_head = pool_target_directory->next;

    if (adm_entity_system.ent_directory.away_pool_head == NULL) {

        adm_entity_system.ent_directory.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_directory");
    #endif

    return (pool_target_directory);
}


/* Dispatch State Action */

void adm_dispatch_state_action_directory(
    adm_pool_target_directory_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_directory");
    #endif

    if (pool_target->ent_directory != NULL) {

        adm_object_existent_directory(
            pool_target->ent_directory,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_DIRECTORY_GENERATE :

            switch ((pool_target->ent_directory)->status) {

                case ADM_STATUS_DIRECTORY_CREATING :

                    adm_sim_display_state_directory_display_heading(pool_target);

                    (pool_target->ent_directory)->status = ADM_STATUS_DIRECTORY_DISPLAY_HEADING;

                    adm_state_action_directory_display_heading(
                        pool_target->ent_directory);

                break;

                case ADM_STATUS_DIRECTORY_DISPLAY_HEADING :

                    adm_sim_display_state_directory_generating(pool_target);

                    (pool_target->ent_directory)->status = ADM_STATUS_DIRECTORY_GENERATING;

                    adm_state_action_directory_generating(
                        pool_target->ent_directory);

                break;

                case ADM_STATUS_DIRECTORY_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate",
                        "State:Generating");

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_COMPONENT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate",
                        "State:Generating_Component");

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_DIRECTORY :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate",
                        "State:Generating_Directory");

                break;

                case ADM_STATUS_DIRECTORY_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate",
                        "State:Idle");

                break;
            }

        break;

        case ADM_EVENT_DIRECTORY_GENERATE_COMPONENT :

            switch ((pool_target->ent_directory)->status) {

                case ADM_STATUS_DIRECTORY_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_component",
                        "State:Creating");

                break;

                case ADM_STATUS_DIRECTORY_DISPLAY_HEADING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_component",
                        "State:Display_Heading");

                break;

                case ADM_STATUS_DIRECTORY_GENERATING :

                    adm_sim_display_state_directory_generating_component(pool_target);

                    (pool_target->ent_directory)->status = ADM_STATUS_DIRECTORY_GENERATING_COMPONENT;

                    adm_state_action_directory_generating_component(
                        pool_target->ent_directory);

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_COMPONENT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_component",
                        "State:Generating_Component");

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_DIRECTORY :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_component",
                        "State:Generating_Directory");

                break;

                case ADM_STATUS_DIRECTORY_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_component",
                        "State:Idle");

                break;
            }

        break;

        case ADM_EVENT_DIRECTORY_GENERATE_DIRECTORY :

            switch ((pool_target->ent_directory)->status) {

                case ADM_STATUS_DIRECTORY_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_directory",
                        "State:Creating");

                break;

                case ADM_STATUS_DIRECTORY_DISPLAY_HEADING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_directory",
                        "State:Display_Heading");

                break;

                case ADM_STATUS_DIRECTORY_GENERATING :

                    adm_sim_display_state_directory_generating_directory(pool_target);

                    (pool_target->ent_directory)->status = ADM_STATUS_DIRECTORY_GENERATING_DIRECTORY;

                    adm_state_action_directory_generating_directory(
                        pool_target->ent_directory);

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_COMPONENT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_directory",
                        "State:Generating_Component");

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_DIRECTORY :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_directory",
                        "State:Generating_Directory");

                break;

                case ADM_STATUS_DIRECTORY_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Generate_directory",
                        "State:Idle");

                break;
            }

        break;

        case ADM_EVENT_DIRECTORY_DONE :

            switch ((pool_target->ent_directory)->status) {

                case ADM_STATUS_DIRECTORY_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Done",
                        "State:Creating");

                break;

                case ADM_STATUS_DIRECTORY_DISPLAY_HEADING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Done",
                        "State:Display_Heading");

                break;

                case ADM_STATUS_DIRECTORY_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Done",
                        "State:Generating");

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_COMPONENT :

                    adm_sim_display_state_directory_generating_component(pool_target);

                    (pool_target->ent_directory)->status = ADM_STATUS_DIRECTORY_GENERATING_COMPONENT;

                    adm_state_action_directory_generating_component(
                        pool_target->ent_directory);

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_DIRECTORY :

                    adm_sim_display_state_directory_generating_directory(pool_target);

                    (pool_target->ent_directory)->status = ADM_STATUS_DIRECTORY_GENERATING_DIRECTORY;

                    adm_state_action_directory_generating_directory(
                        pool_target->ent_directory);

                break;

                case ADM_STATUS_DIRECTORY_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Done",
                        "State:Idle");

                break;
            }

        break;

        case ADM_EVENT_DIRECTORY_COMPLETE :

            switch ((pool_target->ent_directory)->status) {

                case ADM_STATUS_DIRECTORY_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Complete",
                        "State:Creating");

                break;

                case ADM_STATUS_DIRECTORY_DISPLAY_HEADING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Complete",
                        "State:Display_Heading");

                break;

                case ADM_STATUS_DIRECTORY_GENERATING :

                    adm_sim_display_state_directory_idle(pool_target);

                    (pool_target->ent_directory)->status = ADM_STATUS_DIRECTORY_IDLE;

                    adm_state_action_directory_idle(
                        pool_target->ent_directory);

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_COMPONENT :

                    adm_sim_display_state_directory_generating_directory(pool_target);

                    (pool_target->ent_directory)->status = ADM_STATUS_DIRECTORY_GENERATING_DIRECTORY;

                    adm_state_action_directory_generating_directory(
                        pool_target->ent_directory);

                break;

                case ADM_STATUS_DIRECTORY_GENERATING_DIRECTORY :

                    adm_sim_display_state_directory_idle(pool_target);

                    (pool_target->ent_directory)->status = ADM_STATUS_DIRECTORY_IDLE;

                    adm_state_action_directory_idle(
                        pool_target->ent_directory);

                break;

                case ADM_STATUS_DIRECTORY_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Directory",
                        (pool_target->ent_directory)->identity,
                        "Event:Complete",
                        "State:Idle");

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_directory");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */