
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Feature Dispatcher */

/* Dispatcher */

void adm_dispatcher_feature(
    void)
{
    adm_pool_target_feature_typ * pool_target_feature;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_feature");
    #endif

    pool_target_feature = adm_find_away_target_event_feature();

    adm_dispatch_state_action_feature(pool_target_feature);

    adm_dispatch_home_pool_feature();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_feature");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_feature(
    void)
{
    adm_pool_target_feature_typ * pool_target_feature;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_feature");
    #endif

    while (adm_entity_system.ent_feature.home_pool_head != NULL) {

        pool_target_feature = adm_find_home_target_event_feature();

        adm_dispatch_state_action_feature(pool_target_feature);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_feature");
    #endif
}


/* Find Home Target Event */

adm_pool_target_feature_typ * adm_find_home_target_event_feature(
    void)
{
    adm_pool_target_feature_typ * pool_target_feature;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_feature");
    #endif

    pool_target_feature = adm_entity_system.ent_feature.home_pool_head;

    adm_entity_system.ent_feature.home_pool_head = pool_target_feature->next;

    if (adm_entity_system.ent_feature.home_pool_head == NULL) {

        adm_entity_system.ent_feature.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_feature");
    #endif

    return (pool_target_feature);
}


/* Find Away Target Event */

adm_pool_target_feature_typ * adm_find_away_target_event_feature(
    void)
{
    adm_pool_target_feature_typ * pool_target_feature;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_feature");
    #endif

    pool_target_feature = adm_entity_system.ent_feature.away_pool_head;

    adm_entity_system.ent_feature.away_pool_head = pool_target_feature->next;

    if (adm_entity_system.ent_feature.away_pool_head == NULL) {

        adm_entity_system.ent_feature.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_feature");
    #endif

    return (pool_target_feature);
}


/* Dispatch State Action */

void adm_dispatch_state_action_feature(
    adm_pool_target_feature_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_feature");
    #endif

    if (pool_target->ent_feature != NULL) {

        adm_object_existent_feature(
            pool_target->ent_feature,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_FEATURE_GENERATE :

            switch ((pool_target->ent_feature)->status) {

                case ADM_STATUS_FEATURE_CREATING :

                    adm_sim_display_state_feature_display_heading(pool_target);

                    (pool_target->ent_feature)->status = ADM_STATUS_FEATURE_DISPLAY_HEADING;

                    adm_state_action_feature_display_heading(
                        pool_target->ent_feature);

                break;

                case ADM_STATUS_FEATURE_DISPLAY_HEADING :

                    adm_sim_display_state_feature_generating(pool_target);

                    (pool_target->ent_feature)->status = ADM_STATUS_FEATURE_GENERATING;

                    adm_state_action_feature_generating(
                        pool_target->ent_feature);

                break;

                case ADM_STATUS_FEATURE_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate",
                        "State:Generating");

                break;

                case ADM_STATUS_FEATURE_GENERATING_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate",
                        "State:Generating_Feature");

                break;

                case ADM_STATUS_FEATURE_FINISHING_PRODUCT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate",
                        "State:Finishing_Product_Feature");

                break;

                case ADM_STATUS_FEATURE_GENERATING_COMPONENT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate",
                        "State:Generating_Component");

                break;

                case ADM_STATUS_FEATURE_FINISHING_COMPONENT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate",
                        "State:Finishing_Component_Feature");

                break;
            }

        break;

        case ADM_EVENT_FEATURE_GENERATE_FEATURE :

            switch ((pool_target->ent_feature)->status) {

                case ADM_STATUS_FEATURE_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_feature",
                        "State:Creating");

                break;

                case ADM_STATUS_FEATURE_DISPLAY_HEADING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_feature",
                        "State:Display_Heading");

                break;

                case ADM_STATUS_FEATURE_GENERATING :

                    adm_sim_display_state_feature_generating_feature(pool_target);

                    (pool_target->ent_feature)->status = ADM_STATUS_FEATURE_GENERATING_FEATURE;

                    adm_state_action_feature_generating_feature(
                        pool_target->ent_feature);

                break;

                case ADM_STATUS_FEATURE_GENERATING_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_feature",
                        "State:Generating_Feature");

                break;

                case ADM_STATUS_FEATURE_FINISHING_PRODUCT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_feature",
                        "State:Finishing_Product_Feature");

                break;

                case ADM_STATUS_FEATURE_GENERATING_COMPONENT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_feature",
                        "State:Generating_Component");

                break;

                case ADM_STATUS_FEATURE_FINISHING_COMPONENT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_feature",
                        "State:Finishing_Component_Feature");

                break;
            }

        break;

        case ADM_EVENT_FEATURE_GENERATE_COMPONENT :

            switch ((pool_target->ent_feature)->status) {

                case ADM_STATUS_FEATURE_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_component",
                        "State:Creating");

                break;

                case ADM_STATUS_FEATURE_DISPLAY_HEADING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_component",
                        "State:Display_Heading");

                break;

                case ADM_STATUS_FEATURE_GENERATING :

                    adm_sim_display_state_feature_generating_component(pool_target);

                    (pool_target->ent_feature)->status = ADM_STATUS_FEATURE_GENERATING_COMPONENT;

                    adm_state_action_feature_generating_component(
                        pool_target->ent_feature);

                break;

                case ADM_STATUS_FEATURE_GENERATING_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_component",
                        "State:Generating_Feature");

                break;

                case ADM_STATUS_FEATURE_FINISHING_PRODUCT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_component",
                        "State:Finishing_Product_Feature");

                break;

                case ADM_STATUS_FEATURE_GENERATING_COMPONENT :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_component",
                        "State:Generating_Component");

                break;

                case ADM_STATUS_FEATURE_FINISHING_COMPONENT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Generate_component",
                        "State:Finishing_Component_Feature");

                break;
            }

        break;

        case ADM_EVENT_FEATURE_DONE :

            switch ((pool_target->ent_feature)->status) {

                case ADM_STATUS_FEATURE_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Done",
                        "State:Creating");

                break;

                case ADM_STATUS_FEATURE_DISPLAY_HEADING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Done",
                        "State:Display_Heading");

                break;

                case ADM_STATUS_FEATURE_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Done",
                        "State:Generating");

                break;

                case ADM_STATUS_FEATURE_GENERATING_FEATURE :

                    adm_sim_display_state_feature_generating_feature(pool_target);

                    (pool_target->ent_feature)->status = ADM_STATUS_FEATURE_GENERATING_FEATURE;

                    adm_state_action_feature_generating_feature(
                        pool_target->ent_feature);

                break;

                case ADM_STATUS_FEATURE_FINISHING_PRODUCT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Done",
                        "State:Finishing_Product_Feature");

                break;

                case ADM_STATUS_FEATURE_GENERATING_COMPONENT :

                    adm_sim_display_state_feature_generating_component(pool_target);

                    (pool_target->ent_feature)->status = ADM_STATUS_FEATURE_GENERATING_COMPONENT;

                    adm_state_action_feature_generating_component(
                        pool_target->ent_feature);

                break;

                case ADM_STATUS_FEATURE_FINISHING_COMPONENT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Done",
                        "State:Finishing_Component_Feature");

                break;
            }

        break;

        case ADM_EVENT_FEATURE_COMPLETE :

            switch ((pool_target->ent_feature)->status) {

                case ADM_STATUS_FEATURE_CREATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Complete",
                        "State:Creating");

                break;

                case ADM_STATUS_FEATURE_DISPLAY_HEADING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Complete",
                        "State:Display_Heading");

                break;

                case ADM_STATUS_FEATURE_GENERATING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Complete",
                        "State:Generating");

                break;

                case ADM_STATUS_FEATURE_GENERATING_FEATURE :

                    adm_sim_display_state_feature_finishing_product_feature(pool_target);

                    (pool_target->ent_feature)->status = ADM_STATUS_FEATURE_FINISHING_PRODUCT_FEATURE;

                    adm_state_action_feature_finishing_product_feature(
                        pool_target->ent_feature);

                break;

                case ADM_STATUS_FEATURE_FINISHING_PRODUCT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Complete",
                        "State:Finishing_Product_Feature");

                break;

                case ADM_STATUS_FEATURE_GENERATING_COMPONENT :

                    adm_sim_display_state_feature_finishing_component_feature(pool_target);

                    (pool_target->ent_feature)->status = ADM_STATUS_FEATURE_FINISHING_COMPONENT_FEATURE;

                    adm_state_action_feature_finishing_component_feature(
                        pool_target->ent_feature);

                break;

                case ADM_STATUS_FEATURE_FINISHING_COMPONENT_FEATURE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Feature",
                        (pool_target->ent_feature)->identity,
                        "Event:Complete",
                        "State:Finishing_Component_Feature");

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_feature");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */