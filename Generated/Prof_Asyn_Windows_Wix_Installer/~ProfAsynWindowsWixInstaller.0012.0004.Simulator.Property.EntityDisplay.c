
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Property Simulator Display Entity */

void adm_sim_display_entity_property(
    void)
{
    adm_base_string_typ buffer [ADM_SIM_BUFFER_SIZE];

    adm_base_integer_typ width;

    adm_ent_property_typ * ent_property;

    adm_sim_width_property_typ width_property;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_property");
    #endif

    width_property.identity = strlen("Identity");
    width_property.status = strlen("Status");
    width_property.atb_processed = strlen("Processed");
    width_property.atb_id = strlen("Id");
    width_property.atb_value = strlen("Value");

    ent_property = adm_entity_system.ent_property.live_list_head;

    while (ent_property != NULL) {

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%d", ent_property->identity);
        if (width > width_property.identity) width_property.identity = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%s", adm_sim_status_property[ent_property->status]);
        if (width > width_property.status) width_property.status = width;

        if (ent_property->atb_processed == TRUE || ent_property->atb_processed == FALSE) {
            width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%s", adm_boolean[ent_property->atb_processed]);
            if (width > width_property.atb_processed) width_property.atb_processed = width;}

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_property->atb_id);
        if (width > width_property.atb_id) width_property.atb_id = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_property->atb_value);
        if (width > width_property.atb_value) width_property.atb_value = width;

        ent_property = ent_property->next;
    }

    printf(NEWLINE);
    printf("Property:");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    printf("%-*s", width_property.identity, "Identity");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_property.status, "Status");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_property.atb_processed, "Processed");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_property.atb_id, "Id");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_property.atb_value, "Value");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    adm_sim_display_underline(width_property.identity);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_property.status);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_property.atb_processed);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_property.atb_id);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_property.atb_value);

    ent_property = adm_entity_system.ent_property.live_list_head;

    while (ent_property != NULL) {

        printf(NEWLINE);
        printf(ADM_SIM_INDENT);
        printf("%*d", width_property.identity, ent_property->identity);
        printf(ADM_SIM_COLUMN_GAP);

        switch (ent_property->status) {
            case ADM_STATUS_PROPERTY_GENERATING :
                printf("%-*s", width_property.status, "Generating");
            break;
            default :
                printf("%-*s", width_property.status, "ERROR");
            break;
        }

        printf(ADM_SIM_COLUMN_GAP);
        if (ent_property->atb_processed == TRUE || ent_property->atb_processed == FALSE)
            printf("%-*s", width_property.atb_processed, adm_boolean[ent_property->atb_processed]);
        else
            adm_sim_display_row('*', width_property.atb_processed);
        printf(ADM_SIM_COLUMN_GAP);
        sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_property->atb_id);
        printf("%-*s", width_property.atb_id, buffer);
        printf(ADM_SIM_COLUMN_GAP);
        sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_property->atb_value);
        printf("%-*s", width_property.atb_value, buffer);

        ent_property = ent_property->next;
    }

    printf(NEWLINE);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_property");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */