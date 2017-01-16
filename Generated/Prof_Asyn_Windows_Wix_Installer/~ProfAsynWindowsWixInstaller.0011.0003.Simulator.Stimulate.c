
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* System Stimulate */

void adm_sim_simulate(
    void)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_simulate");
    #endif

    if (adm_sim_err_success) {

        while (
            adm_entity_system.ent_product.away_pool_head != NULL ||
            adm_entity_system.ent_icon.away_pool_head != NULL ||
            adm_entity_system.ent_package.away_pool_head != NULL ||
            adm_entity_system.ent_property.away_pool_head != NULL ||
            adm_entity_system.ent_directory.away_pool_head != NULL ||
            adm_entity_system.ent_component.away_pool_head != NULL ||
            adm_entity_system.ent_file.away_pool_head != NULL ||
            adm_entity_system.ent_file_shortcut.away_pool_head != NULL ||
            adm_entity_system.ent_uninstall_shortcut.away_pool_head != NULL ||
            adm_entity_system.ent_create_folder.away_pool_head != NULL ||
            adm_entity_system.ent_remove_folder.away_pool_head != NULL ||
            adm_entity_system.ent_environment.away_pool_head != NULL ||
            adm_entity_system.ent_registry_key.away_pool_head != NULL ||
            adm_entity_system.ent_registry_value.away_pool_head != NULL ||
            adm_entity_system.ent_feature.away_pool_head != NULL) {

            adm_scheduler_dom_matrix_installer();
        }

        adm_integrity_check();
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_simulate");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */