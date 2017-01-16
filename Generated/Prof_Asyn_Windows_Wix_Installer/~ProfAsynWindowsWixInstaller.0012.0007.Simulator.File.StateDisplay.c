
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator File Display State */

void adm_sim_display_state_file_generating(
    adm_pool_target_file_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_file_generating");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (8:29:26) - File[");
        printf("%d", (pool_target->ent_file)->identity);
        printf("] ");
        printf("Generating");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FILE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_file[(pool_target->ent_file)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_file_generating");
    #endif
}

void adm_sim_display_state_file_generating_file_shortcut(
    adm_pool_target_file_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_file_generating_file_shortcut");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (8:62:26) - File[");
        printf("%d", (pool_target->ent_file)->identity);
        printf("] ");
        printf("Generating_File_Shortcut");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FILE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_file[(pool_target->ent_file)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_file_generating_file_shortcut");
    #endif
}

void adm_sim_display_state_file_idle(
    adm_pool_target_file_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_file_idle");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (8:107:26) - File[");
        printf("%d", (pool_target->ent_file)->identity);
        printf("] ");
        printf("Idle");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FILE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_file[(pool_target->ent_file)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_file_idle");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */