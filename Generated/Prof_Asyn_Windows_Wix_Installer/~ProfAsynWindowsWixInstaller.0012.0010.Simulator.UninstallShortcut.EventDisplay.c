
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Uninstall Shortcut Display Event */

void adm_sim_display_event_uninstall_shortcut_generate(
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_uninstall_shortcut_generate");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.events) {

        printf(NEWLINE);
        printf("EVENT (");
        printf("%d:%d:%d)", error_file, error_line, error_rank);
        printf(" - Uninstall_Shortcut[");
        printf("%d", ent_uninstall_shortcut->identity);
        printf("] Generate (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_uninstall_shortcut_generate");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */