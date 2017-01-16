
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Component Dispatcher */

/* Dispatcher */

void adm_dispatcher_component(
    void)
{
    adm_pool_target_component_typ * pool_target_component;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_component");
    #endif

    pool_target_component = adm_find_away_target_event_component();

    adm_dispatch_state_action_component(pool_target_component);

    adm_dispatch_home_pool_component();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_component");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_component(
    void)
{
    adm_pool_target_component_typ * pool_target_component;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_component");
    #endif

    while (adm_entity_system.ent_component.home_pool_head != NULL) {

        pool_target_component = adm_find_home_target_event_component();

        adm_dispatch_state_action_component(pool_target_component);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_component");
    #endif
}


/* Find Home Target Event */

adm_pool_target_component_typ * adm_find_home_target_event_component(
    void)
{
    adm_pool_target_component_typ * pool_target_component;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_component");
    #endif

    pool_target_component = adm_entity_system.ent_component.home_pool_head;

    adm_entity_system.ent_component.home_pool_head = pool_target_component->next;

    if (adm_entity_system.ent_component.home_pool_head == NULL) {

        adm_entity_system.ent_component.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_component");
    #endif

    return (pool_target_component);
}


/* Find Away Target Event */

adm_pool_target_component_typ * adm_find_away_target_event_component(
    void)
{
    adm_pool_target_component_typ * pool_target_component;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_component");
    #endif

    pool_target_component = adm_entity_system.ent_component.away_pool_head;

    adm_entity_system.ent_component.away_pool_head = pool_target_component->next;

    if (adm_entity_system.ent_component.away_pool_head == NULL) {

        adm_entity_system.ent_component.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_component");
    #endif

    return (pool_target_component);
}


/* Dispatch State Action */

void adm_dispatch_state_action_component(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_component");
    #endif

    if (pool_target->ent_component != NULL) {

        adm_object_existent_component(
            pool_target->ent_component,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_COMPONENT_GENERATE :

            switch ((pool_target->ent_component)->status) {

                case ADM_STATUS_COMPONENT_CREATING :

                    adm_sim_display_state_component_generating(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING;

                    adm_state_action_component_generating(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING :

                    adm_sim_display_state_component_generating_file(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING_FILE;

                    adm_state_action_component_generating_file(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING_FILE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate",
                        "State:Generating_File");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_UNINSTALL_SHORTCUT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate",
                        "State:Generating_Uninstall_Shortcut");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_CREATE_FOLDER :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate",
                        "State:Generating_Create_Folder");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REMOVE_FOLDER :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate",
                        "State:Generating_Remove_Folder");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_ENVIRONMENT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate",
                        "State:Generating_Environment");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REGISTRY_KEY :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate",
                        "State:Generating_Registry_Key");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REGISTRY_VALUE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate",
                        "State:Generating_Registry_Value");

                break;

                case ADM_STATUS_COMPONENT_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate",
                        "State:Idle");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REFERENCE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate",
                        "State:Generating_Reference");

                break;
            }

        break;

        case ADM_EVENT_COMPONENT_GENERATE_REFERENCE :

            switch ((pool_target->ent_component)->status) {

                case ADM_STATUS_COMPONENT_CREATING :

                    adm_sim_display_state_component_generating_reference(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING_REFERENCE;

                    adm_state_action_component_generating_reference(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate_reference",
                        "State:Generating");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_FILE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate_reference",
                        "State:Generating_File");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_UNINSTALL_SHORTCUT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate_reference",
                        "State:Generating_Uninstall_Shortcut");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_CREATE_FOLDER :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate_reference",
                        "State:Generating_Create_Folder");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REMOVE_FOLDER :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate_reference",
                        "State:Generating_Remove_Folder");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_ENVIRONMENT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate_reference",
                        "State:Generating_Environment");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REGISTRY_KEY :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate_reference",
                        "State:Generating_Registry_Key");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REGISTRY_VALUE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate_reference",
                        "State:Generating_Registry_Value");

                break;

                case ADM_STATUS_COMPONENT_IDLE :

                    adm_sim_display_state_component_generating_reference(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING_REFERENCE;

                    adm_state_action_component_generating_reference(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REFERENCE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Generate_reference",
                        "State:Generating_Reference");

                break;
            }

        break;

        case ADM_EVENT_COMPONENT_COMPLETE :

            switch ((pool_target->ent_component)->status) {

                case ADM_STATUS_COMPONENT_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Complete",
                        "State:Creating");

                break;

                case ADM_STATUS_COMPONENT_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Complete",
                        "State:Generating");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_FILE :

                    adm_sim_display_state_component_generating_uninstall_shortcut(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING_UNINSTALL_SHORTCUT;

                    adm_state_action_component_generating_uninstall_shortcut(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING_UNINSTALL_SHORTCUT :

                    adm_sim_display_state_component_generating_create_folder(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING_CREATE_FOLDER;

                    adm_state_action_component_generating_create_folder(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING_CREATE_FOLDER :

                    adm_sim_display_state_component_generating_remove_folder(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING_REMOVE_FOLDER;

                    adm_state_action_component_generating_remove_folder(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REMOVE_FOLDER :

                    adm_sim_display_state_component_generating_environment(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING_ENVIRONMENT;

                    adm_state_action_component_generating_environment(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING_ENVIRONMENT :

                    adm_sim_display_state_component_generating_registry_key(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING_REGISTRY_KEY;

                    adm_state_action_component_generating_registry_key(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REGISTRY_KEY :

                    adm_sim_display_state_component_generating_registry_value(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_GENERATING_REGISTRY_VALUE;

                    adm_state_action_component_generating_registry_value(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REGISTRY_VALUE :

                    adm_sim_display_state_component_idle(pool_target);

                    (pool_target->ent_component)->status = ADM_STATUS_COMPONENT_IDLE;

                    adm_state_action_component_idle(
                        pool_target->ent_component);

                break;

                case ADM_STATUS_COMPONENT_IDLE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Complete",
                        "State:Idle");

                break;

                case ADM_STATUS_COMPONENT_GENERATING_REFERENCE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Component",
                        (pool_target->ent_component)->identity,
                        "Event:Complete",
                        "State:Generating_Reference");

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_component");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */