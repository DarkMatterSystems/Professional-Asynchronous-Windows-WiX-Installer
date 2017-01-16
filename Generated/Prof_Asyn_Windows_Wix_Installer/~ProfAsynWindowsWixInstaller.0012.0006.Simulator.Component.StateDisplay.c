
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator Component Display State */

void adm_sim_display_state_component_generating(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:36:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Generating");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating");
    #endif
}

void adm_sim_display_state_component_generating_file(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_file");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:70:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Generating_File");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_file");
    #endif
}

void adm_sim_display_state_component_generating_uninstall_shortcut(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_uninstall_shortcut");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:92:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Generating_Uninstall_Shortcut");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_uninstall_shortcut");
    #endif
}

void adm_sim_display_state_component_generating_create_folder(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_create_folder");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:114:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Generating_Create_Folder");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_create_folder");
    #endif
}

void adm_sim_display_state_component_generating_remove_folder(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_remove_folder");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:136:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Generating_Remove_Folder");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_remove_folder");
    #endif
}

void adm_sim_display_state_component_generating_environment(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_environment");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:158:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Generating_Environment");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_environment");
    #endif
}

void adm_sim_display_state_component_generating_registry_key(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_registry_key");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:180:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Generating_Registry_Key");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_registry_key");
    #endif
}

void adm_sim_display_state_component_generating_registry_value(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_registry_value");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:202:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Generating_Registry_Value");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_registry_value");
    #endif
}

void adm_sim_display_state_component_idle(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_idle");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:224:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Idle");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_idle");
    #endif
}

void adm_sim_display_state_component_generating_reference(
    adm_pool_target_component_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_reference");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (7:247:26) - Component[");
        printf("%d", (pool_target->ent_component)->identity);
        printf("] ");
        printf("Generating_Reference");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_component[(pool_target->ent_component)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_component_generating_reference");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */