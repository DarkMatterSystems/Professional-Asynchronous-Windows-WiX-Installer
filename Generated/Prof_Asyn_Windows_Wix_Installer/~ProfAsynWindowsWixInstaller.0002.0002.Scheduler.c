
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Domain Scheduler */

void adm_scheduler_dom_matrix_installer(
    void)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SCHEDULER, "adm_scheduler_dom_matrix_installer");
    #endif

    if (adm_entity_system.ent_product.away_pool_head != NULL) adm_dispatcher_product();
    if (adm_entity_system.ent_icon.away_pool_head != NULL) adm_dispatcher_icon();
    if (adm_entity_system.ent_package.away_pool_head != NULL) adm_dispatcher_package();
    if (adm_entity_system.ent_property.away_pool_head != NULL) adm_dispatcher_property();
    if (adm_entity_system.ent_directory.away_pool_head != NULL) adm_dispatcher_directory();
    if (adm_entity_system.ent_component.away_pool_head != NULL) adm_dispatcher_component();
    if (adm_entity_system.ent_file.away_pool_head != NULL) adm_dispatcher_file();
    if (adm_entity_system.ent_file_shortcut.away_pool_head != NULL) adm_dispatcher_file_shortcut();
    if (adm_entity_system.ent_uninstall_shortcut.away_pool_head != NULL) adm_dispatcher_uninstall_shortcut();
    if (adm_entity_system.ent_create_folder.away_pool_head != NULL) adm_dispatcher_create_folder();
    if (adm_entity_system.ent_remove_folder.away_pool_head != NULL) adm_dispatcher_remove_folder();
    if (adm_entity_system.ent_environment.away_pool_head != NULL) adm_dispatcher_environment();
    if (adm_entity_system.ent_registry_key.away_pool_head != NULL) adm_dispatcher_registry_key();
    if (adm_entity_system.ent_registry_value.away_pool_head != NULL) adm_dispatcher_registry_value();
    if (adm_entity_system.ent_feature.away_pool_head != NULL) adm_dispatcher_feature();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SCHEDULER, "adm_scheduler_dom_matrix_installer");
    #endif
}

adm_base_boolean_typ adm_scheduler_determine_termination_dom_matrix_installer(
    void)
{
    adm_base_boolean_typ event_pending;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SCHEDULER, "adm_scheduler_determine_termination_dom_matrix_installer");
    #endif

    event_pending =
        (adm_entity_system.ent_product.away_pool_head != NULL) ||
        (adm_entity_system.ent_icon.away_pool_head != NULL) ||
        (adm_entity_system.ent_package.away_pool_head != NULL) ||
        (adm_entity_system.ent_property.away_pool_head != NULL) ||
        (adm_entity_system.ent_directory.away_pool_head != NULL) ||
        (adm_entity_system.ent_component.away_pool_head != NULL) ||
        (adm_entity_system.ent_file.away_pool_head != NULL) ||
        (adm_entity_system.ent_file_shortcut.away_pool_head != NULL) ||
        (adm_entity_system.ent_uninstall_shortcut.away_pool_head != NULL) ||
        (adm_entity_system.ent_create_folder.away_pool_head != NULL) ||
        (adm_entity_system.ent_remove_folder.away_pool_head != NULL) ||
        (adm_entity_system.ent_environment.away_pool_head != NULL) ||
        (adm_entity_system.ent_registry_key.away_pool_head != NULL) ||
        (adm_entity_system.ent_registry_value.away_pool_head != NULL) ||
        (adm_entity_system.ent_feature.away_pool_head != NULL);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SCHEDULER, "adm_scheduler_determine_termination_dom_matrix_installer");
    #endif

    return (event_pending);
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */