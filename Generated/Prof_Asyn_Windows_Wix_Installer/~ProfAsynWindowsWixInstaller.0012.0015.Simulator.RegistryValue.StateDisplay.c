
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Registry Value Display State */

void adm_sim_display_state_registry_value_generating(
    adm_pool_target_registry_value_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_registry_value_generating");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (16:18:26) - Registry_Value[");
        printf("%d", (pool_target->ent_registry_value)->identity);
        printf("] ");
        printf("Generating");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_REGISTRY_VALUE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_registry_value[(pool_target->ent_registry_value)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_registry_value_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */