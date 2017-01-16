
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Uninstall Shortcut Display State */

void adm_sim_display_state_uninstall_shortcut_generating(
    adm_pool_target_uninstall_shortcut_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_uninstall_shortcut_generating");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (11:17:26) - Uninstall_Shortcut[");
        printf("%d", (pool_target->ent_uninstall_shortcut)->identity);
        printf("] ");
        printf("Generating");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_UNINSTALL_SHORTCUT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_uninstall_shortcut[(pool_target->ent_uninstall_shortcut)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_uninstall_shortcut_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */