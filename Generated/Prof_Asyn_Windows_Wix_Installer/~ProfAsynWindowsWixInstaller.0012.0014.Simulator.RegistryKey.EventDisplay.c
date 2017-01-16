
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Registry Key Display Event */

void adm_sim_display_event_registry_key_generate(
    adm_ent_registry_key_typ * ent_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_registry_key_generate");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.events) {

        printf(NEWLINE);
        printf("EVENT (");
        printf("%d:%d:%d)", error_file, error_line, error_rank);
        printf(" - Registry_Key[");
        printf("%d", ent_registry_key->identity);
        printf("] Generate (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_registry_key_generate");
    #endif
}

void adm_sim_display_event_registry_key_complete(
    adm_ent_registry_key_typ * ent_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_registry_key_complete");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.events) {

        printf(NEWLINE);
        printf("EVENT (");
        printf("%d:%d:%d)", error_file, error_line, error_rank);
        printf(" - Registry_Key[");
        printf("%d", ent_registry_key->identity);
        printf("] Complete (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_registry_key_complete");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */