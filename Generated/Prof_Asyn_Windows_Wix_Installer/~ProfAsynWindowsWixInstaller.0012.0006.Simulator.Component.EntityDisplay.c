
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Component Simulator Display Entity */

void adm_sim_display_entity_component(
    void)
{
    adm_base_string_typ buffer [ADM_SIM_BUFFER_SIZE];

    adm_base_integer_typ width;

    adm_ent_component_typ * ent_component;

    adm_sim_width_component_typ width_component;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_component");
    #endif

    width_component.identity = strlen("Identity");
    width_component.status = strlen("Status");
    width_component.atb_processed = strlen("Processed");
    width_component.atb_id = strlen("Id");
    width_component.atb_guid = strlen("Guid");
    width_component.atb_condition = strlen("Condition");

    ent_component = adm_entity_system.ent_component.live_list_head;

    while (ent_component != NULL) {

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%d", ent_component->identity);
        if (width > width_component.identity) width_component.identity = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%s", adm_sim_status_component[ent_component->status]);
        if (width > width_component.status) width_component.status = width;

        if (ent_component->atb_processed == TRUE || ent_component->atb_processed == FALSE) {
            width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%s", adm_boolean[ent_component->atb_processed]);
            if (width > width_component.atb_processed) width_component.atb_processed = width;}

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_component->atb_id);
        if (width > width_component.atb_id) width_component.atb_id = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_component->atb_guid);
        if (width > width_component.atb_guid) width_component.atb_guid = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_component->atb_condition);
        if (width > width_component.atb_condition) width_component.atb_condition = width;

        ent_component = ent_component->next;
    }

    printf(NEWLINE);
    printf("Component:");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    printf("%-*s", width_component.identity, "Identity");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_component.status, "Status");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_component.atb_processed, "Processed");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_component.atb_id, "Id");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_component.atb_guid, "Guid");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_component.atb_condition, "Condition");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    adm_sim_display_underline(width_component.identity);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_component.status);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_component.atb_processed);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_component.atb_id);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_component.atb_guid);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_component.atb_condition);

    ent_component = adm_entity_system.ent_component.live_list_head;

    while (ent_component != NULL) {

        printf(NEWLINE);
        printf(ADM_SIM_INDENT);
        printf("%*d", width_component.identity, ent_component->identity);
        printf(ADM_SIM_COLUMN_GAP);

        switch (ent_component->status) {
            case ADM_STATUS_COMPONENT_CREATING :
                printf("%-*s", width_component.status, "Creating");
            break;
            case ADM_STATUS_COMPONENT_GENERATING :
                printf("%-*s", width_component.status, "Generating");
            break;
            case ADM_STATUS_COMPONENT_GENERATING_FILE :
                printf("%-*s", width_component.status, "Generating_File");
            break;
            case ADM_STATUS_COMPONENT_GENERATING_UNINSTALL_SHORTCUT :
                printf("%-*s", width_component.status, "Generating_Uninstall_Shortcut");
            break;
            case ADM_STATUS_COMPONENT_GENERATING_CREATE_FOLDER :
                printf("%-*s", width_component.status, "Generating_Create_Folder");
            break;
            case ADM_STATUS_COMPONENT_GENERATING_REMOVE_FOLDER :
                printf("%-*s", width_component.status, "Generating_Remove_Folder");
            break;
            case ADM_STATUS_COMPONENT_GENERATING_ENVIRONMENT :
                printf("%-*s", width_component.status, "Generating_Environment");
            break;
            case ADM_STATUS_COMPONENT_GENERATING_REGISTRY_KEY :
                printf("%-*s", width_component.status, "Generating_Registry_Key");
            break;
            case ADM_STATUS_COMPONENT_GENERATING_REGISTRY_VALUE :
                printf("%-*s", width_component.status, "Generating_Registry_Value");
            break;
            case ADM_STATUS_COMPONENT_IDLE :
                printf("%-*s", width_component.status, "Idle");
            break;
            case ADM_STATUS_COMPONENT_GENERATING_REFERENCE :
                printf("%-*s", width_component.status, "Generating_Reference");
            break;
            default :
                printf("%-*s", width_component.status, "ERROR");
            break;
        }

        printf(ADM_SIM_COLUMN_GAP);
        if (ent_component->atb_processed == TRUE || ent_component->atb_processed == FALSE)
            printf("%-*s", width_component.atb_processed, adm_boolean[ent_component->atb_processed]);
        else
            adm_sim_display_row('*', width_component.atb_processed);
        printf(ADM_SIM_COLUMN_GAP);
        sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_component->atb_id);
        printf("%-*s", width_component.atb_id, buffer);
        printf(ADM_SIM_COLUMN_GAP);
        sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_component->atb_guid);
        printf("%-*s", width_component.atb_guid, buffer);
        printf(ADM_SIM_COLUMN_GAP);
        sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_component->atb_condition);
        printf("%-*s", width_component.atb_condition, buffer);

        ent_component = ent_component->next;
    }

    printf(NEWLINE);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_component");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */