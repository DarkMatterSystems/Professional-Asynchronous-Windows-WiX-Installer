
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Icon Acquire Identity Event */

void adm_sim_acquire_identity_event_icon_generate(
    void)
{
    adm_ent_icon_typ * ent_icon;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_icon_generate");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_icon = adm_entity_system.ent_icon.live_list_head;

    while (
        entity_not_found &&
        ent_icon != NULL) {

        if (ent_icon->identity == identity) {

            adm_send_event_icon_generate(
                NULL,
                ent_icon,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_icon = ent_icon->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_icon_generate");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */