
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* File Shortcut Simulator Display Entity */

void adm_sim_display_entity_file_shortcut(
    void)
{
    adm_base_string_typ buffer [ADM_SIM_BUFFER_SIZE];

    adm_base_integer_typ width;

    adm_ent_file_shortcut_typ * ent_file_shortcut;

    adm_sim_width_file_shortcut_typ width_file_shortcut;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_file_shortcut");
    #endif

    width_file_shortcut.identity = strlen("Identity");
    width_file_shortcut.status = strlen("Status");
    width_file_shortcut.atb_processed = strlen("Processed");
    width_file_shortcut.atb_directory = strlen("Directory");
    width_file_shortcut.atb_icon = strlen("Icon");

    ent_file_shortcut = adm_entity_system.ent_file_shortcut.live_list_head;

    while (ent_file_shortcut != NULL) {

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%d", ent_file_shortcut->identity);
        if (width > width_file_shortcut.identity) width_file_shortcut.identity = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%s", adm_sim_status_file_shortcut[ent_file_shortcut->status]);
        if (width > width_file_shortcut.status) width_file_shortcut.status = width;

        if (ent_file_shortcut->atb_processed == TRUE || ent_file_shortcut->atb_processed == FALSE) {
            width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%s", adm_boolean[ent_file_shortcut->atb_processed]);
            if (width > width_file_shortcut.atb_processed) width_file_shortcut.atb_processed = width;}

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_file_shortcut->atb_directory);
        if (width > width_file_shortcut.atb_directory) width_file_shortcut.atb_directory = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_file_shortcut->atb_icon);
        if (width > width_file_shortcut.atb_icon) width_file_shortcut.atb_icon = width;

        ent_file_shortcut = ent_file_shortcut->next;
    }

    printf(NEWLINE);
    printf("File_Shortcut:");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    printf("%-*s", width_file_shortcut.identity, "Identity");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_file_shortcut.status, "Status");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_file_shortcut.atb_processed, "Processed");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_file_shortcut.atb_directory, "Directory");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_file_shortcut.atb_icon, "Icon");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    adm_sim_display_underline(width_file_shortcut.identity);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_file_shortcut.status);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_file_shortcut.atb_processed);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_file_shortcut.atb_directory);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_file_shortcut.atb_icon);

    ent_file_shortcut = adm_entity_system.ent_file_shortcut.live_list_head;

    while (ent_file_shortcut != NULL) {

        printf(NEWLINE);
        printf(ADM_SIM_INDENT);
        printf("%*d", width_file_shortcut.identity, ent_file_shortcut->identity);
        printf(ADM_SIM_COLUMN_GAP);

        switch (ent_file_shortcut->status) {
            case ADM_STATUS_FILE_SHORTCUT_GENERATING :
                printf("%-*s", width_file_shortcut.status, "Generating");
            break;
            default :
                printf("%-*s", width_file_shortcut.status, "ERROR");
            break;
        }

        printf(ADM_SIM_COLUMN_GAP);
        if (ent_file_shortcut->atb_processed == TRUE || ent_file_shortcut->atb_processed == FALSE)
            printf("%-*s", width_file_shortcut.atb_processed, adm_boolean[ent_file_shortcut->atb_processed]);
        else
            adm_sim_display_row('*', width_file_shortcut.atb_processed);
        printf(ADM_SIM_COLUMN_GAP);
        sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_file_shortcut->atb_directory);
        printf("%-*s", width_file_shortcut.atb_directory, buffer);
        printf(ADM_SIM_COLUMN_GAP);
        sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_file_shortcut->atb_icon);
        printf("%-*s", width_file_shortcut.atb_icon, buffer);

        ent_file_shortcut = ent_file_shortcut->next;
    }

    printf(NEWLINE);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_file_shortcut");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */