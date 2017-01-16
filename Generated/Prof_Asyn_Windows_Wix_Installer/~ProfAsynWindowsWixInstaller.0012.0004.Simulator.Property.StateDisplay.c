
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Property Display State */

void adm_sim_display_state_property_generating(
    adm_pool_target_property_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_property_generating");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (5:17:26) - Property[");
        printf("%d", (pool_target->ent_property)->identity);
        printf("] ");
        printf("Generating");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PROPERTY, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_property[(pool_target->ent_property)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_property_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */