
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator File Shortcut Display State */

void adm_sim_display_state_file_shortcut_generating(
    adm_pool_target_file_shortcut_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_file_shortcut_generating");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (10:18:26) - File_Shortcut[");
        printf("%d", (pool_target->ent_file_shortcut)->identity);
        printf("] ");
        printf("Generating");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FILE_SHORTCUT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_file_shortcut[(pool_target->ent_file_shortcut)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_file_shortcut_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */