
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Icon Dispatcher */

/* Dispatcher */

void adm_dispatcher_icon(
    void)
{
    adm_pool_target_icon_typ * pool_target_icon;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_icon");
    #endif

    pool_target_icon = adm_find_away_target_event_icon();

    adm_dispatch_state_action_icon(pool_target_icon);

    adm_dispatch_home_pool_icon();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_icon");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_icon(
    void)
{
    adm_pool_target_icon_typ * pool_target_icon;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_icon");
    #endif

    while (adm_entity_system.ent_icon.home_pool_head != NULL) {

        pool_target_icon = adm_find_home_target_event_icon();

        adm_dispatch_state_action_icon(pool_target_icon);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_icon");
    #endif
}


/* Find Home Target Event */

adm_pool_target_icon_typ * adm_find_home_target_event_icon(
    void)
{
    adm_pool_target_icon_typ * pool_target_icon;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_icon");
    #endif

    pool_target_icon = adm_entity_system.ent_icon.home_pool_head;

    adm_entity_system.ent_icon.home_pool_head = pool_target_icon->next;

    if (adm_entity_system.ent_icon.home_pool_head == NULL) {

        adm_entity_system.ent_icon.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_icon");
    #endif

    return (pool_target_icon);
}


/* Find Away Target Event */

adm_pool_target_icon_typ * adm_find_away_target_event_icon(
    void)
{
    adm_pool_target_icon_typ * pool_target_icon;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_icon");
    #endif

    pool_target_icon = adm_entity_system.ent_icon.away_pool_head;

    adm_entity_system.ent_icon.away_pool_head = pool_target_icon->next;

    if (adm_entity_system.ent_icon.away_pool_head == NULL) {

        adm_entity_system.ent_icon.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_icon");
    #endif

    return (pool_target_icon);
}


/* Dispatch State Action */

void adm_dispatch_state_action_icon(
    adm_pool_target_icon_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_icon");
    #endif

    if (pool_target->ent_icon != NULL) {

        adm_object_existent_icon(
            pool_target->ent_icon,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_ICON_GENERATE :

            switch ((pool_target->ent_icon)->status) {

                case ADM_STATUS_ICON_GENERATING :

                    adm_sim_display_state_icon_generating(pool_target);

                    (pool_target->ent_icon)->status = ADM_STATUS_ICON_GENERATING;

                    adm_state_action_icon_generating(
                        pool_target->ent_icon);

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_icon");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */