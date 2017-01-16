
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Registry Key Simulator Display Entity */

void adm_sim_display_entity_registry_key(
    void)
{
    adm_base_string_typ buffer [ADM_SIM_BUFFER_SIZE];

    adm_base_integer_typ width;

    adm_ent_registry_key_typ * ent_registry_key;

    adm_sim_width_registry_key_typ width_registry_key;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_registry_key");
    #endif

    width_registry_key.identity = strlen("Identity");
    width_registry_key.status = strlen("Status");
    width_registry_key.atb_root = strlen("Root");
    width_registry_key.atb_key = strlen("Key");

    ent_registry_key = adm_entity_system.ent_registry_key.live_list_head;

    while (ent_registry_key != NULL) {

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%d", ent_registry_key->identity);
        if (width > width_registry_key.identity) width_registry_key.identity = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%s", adm_sim_status_registry_key[ent_registry_key->status]);
        if (width > width_registry_key.status) width_registry_key.status = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_registry_key->atb_root);
        if (width > width_registry_key.atb_root) width_registry_key.atb_root = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_registry_key->atb_key);
        if (width > width_registry_key.atb_key) width_registry_key.atb_key = width;

        ent_registry_key = ent_registry_key->next;
    }

    printf(NEWLINE);
    printf("Registry_Key:");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    printf("%-*s", width_registry_key.identity, "Identity");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_registry_key.status, "Status");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_registry_key.atb_root, "Root");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_registry_key.atb_key, "Key");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    adm_sim_display_underline(width_registry_key.identity);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_registry_key.status);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_registry_key.atb_root);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_registry_key.atb_key);

    ent_registry_key = adm_entity_system.ent_registry_key.live_list_head;

    while (ent_registry_key != NULL) {

        printf(NEWLINE);
        printf(ADM_SIM_INDENT);
        printf("%*d", width_registry_key.identity, ent_registry_key->identity);
        printf(ADM_SIM_COLUMN_GAP);

        switch (ent_registry_key->status) {
            case ADM_STATUS_REGISTRY_KEY_CREATING :
                printf("%-*s", width_registry_key.status, "Creating");
            break;
            case ADM_STATUS_REGISTRY_KEY_GENERATING :
                printf("%-*s", width_registry_key.status, "Generating");
            break;
            case ADM_STATUS_REGISTRY_KEY_GENERATING_REGISTRY_VALUE :
                printf("%-*s", width_registry_key.status, "Generating_Registry_Value");
            break;
            case ADM_STATUS_REGISTRY_KEY_IDLE :
                printf("%-*s", width_registry_key.status, "Idle");
            break;
            default :
                printf("%-*s", width_registry_key.status, "ERROR");
            break;
        }

        printf(ADM_SIM_COLUMN_GAP);
        sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_registry_key->atb_root);
        printf("%-*s", width_registry_key.atb_root, buffer);
        printf(ADM_SIM_COLUMN_GAP);
        sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "\"%s\"", ent_registry_key->atb_key);
        printf("%-*s", width_registry_key.atb_key, buffer);

        ent_registry_key = ent_registry_key->next;
    }

    printf(NEWLINE);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_registry_key");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */