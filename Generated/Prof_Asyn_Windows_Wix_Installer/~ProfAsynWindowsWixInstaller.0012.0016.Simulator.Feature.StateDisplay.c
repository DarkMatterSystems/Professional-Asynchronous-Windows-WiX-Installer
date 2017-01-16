
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Feature Display State */

void adm_sim_display_state_feature_display_heading(
    adm_pool_target_feature_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_display_heading");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (17:36:26) - Feature[");
        printf("%d", (pool_target->ent_feature)->identity);
        printf("] ");
        printf("Display_Heading");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_feature[(pool_target->ent_feature)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_display_heading");
    #endif
}

void adm_sim_display_state_feature_generating(
    adm_pool_target_feature_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_generating");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (17:61:26) - Feature[");
        printf("%d", (pool_target->ent_feature)->identity);
        printf("] ");
        printf("Generating");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_feature[(pool_target->ent_feature)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_generating");
    #endif
}

void adm_sim_display_state_feature_generating_feature(
    adm_pool_target_feature_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_generating_feature");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (17:131:26) - Feature[");
        printf("%d", (pool_target->ent_feature)->identity);
        printf("] ");
        printf("Generating_Feature");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_feature[(pool_target->ent_feature)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_generating_feature");
    #endif
}

void adm_sim_display_state_feature_finishing_product_feature(
    adm_pool_target_feature_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_finishing_product_feature");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (17:177:26) - Feature[");
        printf("%d", (pool_target->ent_feature)->identity);
        printf("] ");
        printf("Finishing_Product_Feature");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_feature[(pool_target->ent_feature)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_finishing_product_feature");
    #endif
}

void adm_sim_display_state_feature_generating_component(
    adm_pool_target_feature_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_generating_component");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (17:201:26) - Feature[");
        printf("%d", (pool_target->ent_feature)->identity);
        printf("] ");
        printf("Generating_Component");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_feature[(pool_target->ent_feature)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_generating_component");
    #endif
}

void adm_sim_display_state_feature_finishing_component_feature(
    adm_pool_target_feature_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_finishing_component_feature");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (17:247:26) - Feature[");
        printf("%d", (pool_target->ent_feature)->identity);
        printf("] ");
        printf("Finishing_Component_Feature");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_feature[(pool_target->ent_feature)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_feature_finishing_component_feature");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */