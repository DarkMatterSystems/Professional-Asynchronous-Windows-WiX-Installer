
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Domain Scheduler Initialisation */

void adm_scheduler_initialisation_matrix_installer(
    void)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_INITIALISATION, "adm_scheduler_initialisation_matrix_installer");
    #endif

    adm_dispatch_home_pool_product();
    adm_dispatch_home_pool_icon();
    adm_dispatch_home_pool_package();
    adm_dispatch_home_pool_property();
    adm_dispatch_home_pool_directory();
    adm_dispatch_home_pool_component();
    adm_dispatch_home_pool_file();
    adm_dispatch_home_pool_file_shortcut();
    adm_dispatch_home_pool_uninstall_shortcut();
    adm_dispatch_home_pool_create_folder();
    adm_dispatch_home_pool_remove_folder();
    adm_dispatch_home_pool_environment();
    adm_dispatch_home_pool_registry_key();
    adm_dispatch_home_pool_registry_value();
    adm_dispatch_home_pool_feature();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_INITIALISATION, "adm_scheduler_initialisation_matrix_installer");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */