
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Registry Key Display State */

void adm_sim_display_state_registry_key_generating(
    adm_pool_target_registry_key_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_registry_key_generating");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (15:26:26) - Registry_Key[");
        printf("%d", (pool_target->ent_registry_key)->identity);
        printf("] ");
        printf("Generating");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_REGISTRY_KEY, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_registry_key[(pool_target->ent_registry_key)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_registry_key_generating");
    #endif
}

void adm_sim_display_state_registry_key_generating_registry_value(
    adm_pool_target_registry_key_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_registry_key_generating_registry_value");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (15:44:26) - Registry_Key[");
        printf("%d", (pool_target->ent_registry_key)->identity);
        printf("] ");
        printf("Generating_Registry_Value");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_REGISTRY_KEY, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_registry_key[(pool_target->ent_registry_key)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_registry_key_generating_registry_value");
    #endif
}

void adm_sim_display_state_registry_key_idle(
    adm_pool_target_registry_key_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_registry_key_idle");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (15:62:26) - Registry_Key[");
        printf("%d", (pool_target->ent_registry_key)->identity);
        printf("] ");
        printf("Idle");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_REGISTRY_KEY, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_registry_key[(pool_target->ent_registry_key)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_registry_key_idle");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */