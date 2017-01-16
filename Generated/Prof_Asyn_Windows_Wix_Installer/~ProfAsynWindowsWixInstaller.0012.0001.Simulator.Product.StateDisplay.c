
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Product Display State */

void adm_sim_display_state_product_generating_product(
    adm_pool_target_product_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_product");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (2:34:26) - Product[");
        printf("%d", (pool_target->ent_product)->identity);
        printf("] ");
        printf("Generating_Product");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_product[(pool_target->ent_product)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_product");
    #endif
}

void adm_sim_display_state_product_generating_package(
    adm_pool_target_product_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_package");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (2:73:26) - Product[");
        printf("%d", (pool_target->ent_product)->identity);
        printf("] ");
        printf("Generating_Package");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_product[(pool_target->ent_product)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_package");
    #endif
}

void adm_sim_display_state_product_generating_property(
    adm_pool_target_product_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_property");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (2:92:26) - Product[");
        printf("%d", (pool_target->ent_product)->identity);
        printf("] ");
        printf("Generating_Property");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_product[(pool_target->ent_product)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_property");
    #endif
}

void adm_sim_display_state_product_generating_icon(
    adm_pool_target_product_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_icon");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (2:136:26) - Product[");
        printf("%d", (pool_target->ent_product)->identity);
        printf("] ");
        printf("Generating_Icon");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_product[(pool_target->ent_product)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_icon");
    #endif
}

void adm_sim_display_state_product_generating_directory(
    adm_pool_target_product_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_directory");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (2:180:26) - Product[");
        printf("%d", (pool_target->ent_product)->identity);
        printf("] ");
        printf("Generating_Directory");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_product[(pool_target->ent_product)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_directory");
    #endif
}

void adm_sim_display_state_product_generating_feature(
    adm_pool_target_product_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_feature");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (2:199:26) - Product[");
        printf("%d", (pool_target->ent_product)->identity);
        printf("] ");
        printf("Generating_Feature");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_product[(pool_target->ent_product)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_feature");
    #endif
}

void adm_sim_display_state_product_generating_miscellaneous(
    adm_pool_target_product_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_miscellaneous");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (2:218:26) - Product[");
        printf("%d", (pool_target->ent_product)->identity);
        printf("] ");
        printf("Generating_Miscellaneous");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_product[(pool_target->ent_product)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_generating_miscellaneous");
    #endif
}

void adm_sim_display_state_product_idle(
    adm_pool_target_product_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_idle");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (2:282:26) - Product[");
        printf("%d", (pool_target->ent_product)->identity);
        printf("] ");
        printf("Idle");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_product[(pool_target->ent_product)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_product_idle");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */