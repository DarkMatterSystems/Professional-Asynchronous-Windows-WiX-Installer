
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Directory Display State */

void adm_sim_display_state_directory_display_heading(
    adm_pool_target_directory_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_display_heading");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (6:33:26) - Directory[");
        printf("%d", (pool_target->ent_directory)->identity);
        printf("] ");
        printf("Display_Heading");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_directory[(pool_target->ent_directory)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_display_heading");
    #endif
}

void adm_sim_display_state_directory_generating(
    adm_pool_target_directory_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_generating");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (6:58:26) - Directory[");
        printf("%d", (pool_target->ent_directory)->identity);
        printf("] ");
        printf("Generating");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_directory[(pool_target->ent_directory)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_generating");
    #endif
}

void adm_sim_display_state_directory_generating_component(
    adm_pool_target_directory_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_generating_component");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (6:101:26) - Directory[");
        printf("%d", (pool_target->ent_directory)->identity);
        printf("] ");
        printf("Generating_Component");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_directory[(pool_target->ent_directory)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_generating_component");
    #endif
}

void adm_sim_display_state_directory_generating_directory(
    adm_pool_target_directory_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_generating_directory");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (6:147:26) - Directory[");
        printf("%d", (pool_target->ent_directory)->identity);
        printf("] ");
        printf("Generating_Directory");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_directory[(pool_target->ent_directory)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_generating_directory");
    #endif
}

void adm_sim_display_state_directory_idle(
    adm_pool_target_directory_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_idle");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (6:193:26) - Directory[");
        printf("%d", (pool_target->ent_directory)->identity);
        printf("] ");
        printf("Idle");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_directory[(pool_target->ent_directory)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_directory_idle");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */