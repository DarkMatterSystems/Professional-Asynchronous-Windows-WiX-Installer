
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Simulator System Configuration */

/* Domain Map */

adm_sim_domain_typ adm_sim_domain[] = {
    {"Matrix_Installer"},
    {SNULL}
};

/* Entity Map */

adm_sim_entity_typ adm_sim_entity[] = {
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Product", TRUE, adm_sim_display_entity_product},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Icon", TRUE, adm_sim_display_entity_icon},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Package", TRUE, adm_sim_display_entity_package},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Property", TRUE, adm_sim_display_entity_property},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Directory", TRUE, adm_sim_display_entity_directory},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Component", TRUE, adm_sim_display_entity_component},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "File", TRUE, adm_sim_display_entity_file},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Shortcut", FALSE, adm_sim_display_entity_shortcut},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "File_Shortcut", TRUE, adm_sim_display_entity_file_shortcut},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Uninstall_Shortcut", TRUE, adm_sim_display_entity_uninstall_shortcut},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Create_Folder", TRUE, adm_sim_display_entity_create_folder},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Remove_Folder", TRUE, adm_sim_display_entity_remove_folder},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Environment", TRUE, adm_sim_display_entity_environment},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Registry_Key", TRUE, adm_sim_display_entity_registry_key},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Registry_Value", TRUE, adm_sim_display_entity_registry_value},
    {ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER, "Feature", TRUE, adm_sim_display_entity_feature},
    {null, SNULL, null, NULL}
};

/* Event Map */

adm_sim_event_typ adm_sim_event[] = {
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_product_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT,
        "Done",
        FALSE,
        adm_sim_acquire_identity_event_product_done
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PRODUCT,
        "Complete",
        FALSE,
        adm_sim_acquire_identity_event_product_complete
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_ICON,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_icon_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PACKAGE,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_package_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_PROPERTY,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_property_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_directory_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY,
        "Generate_component",
        FALSE,
        adm_sim_acquire_identity_event_directory_generate_component
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY,
        "Generate_directory",
        FALSE,
        adm_sim_acquire_identity_event_directory_generate_directory
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY,
        "Done",
        FALSE,
        adm_sim_acquire_identity_event_directory_done
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_DIRECTORY,
        "Complete",
        FALSE,
        adm_sim_acquire_identity_event_directory_complete
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_component_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT,
        "Generate_reference",
        FALSE,
        adm_sim_acquire_identity_event_component_generate_reference
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_COMPONENT,
        "Complete",
        FALSE,
        adm_sim_acquire_identity_event_component_complete
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FILE,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_file_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FILE,
        "Generate_file_shortcut",
        FALSE,
        adm_sim_acquire_identity_event_file_generate_file_shortcut
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FILE,
        "Done",
        FALSE,
        adm_sim_acquire_identity_event_file_done
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FILE,
        "Complete",
        FALSE,
        adm_sim_acquire_identity_event_file_complete
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FILE_SHORTCUT,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_file_shortcut_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_UNINSTALL_SHORTCUT,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_uninstall_shortcut_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_CREATE_FOLDER,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_create_folder_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_REMOVE_FOLDER,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_remove_folder_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_ENVIRONMENT,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_environment_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_REGISTRY_KEY,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_registry_key_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_REGISTRY_KEY,
        "Complete",
        FALSE,
        adm_sim_acquire_identity_event_registry_key_complete
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_REGISTRY_VALUE,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_registry_value_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE,
        "Generate",
        FALSE,
        adm_sim_acquire_identity_event_feature_generate
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE,
        "Generate_feature",
        FALSE,
        adm_sim_acquire_identity_event_feature_generate_feature
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE,
        "Generate_component",
        FALSE,
        adm_sim_acquire_identity_event_feature_generate_component
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE,
        "Done",
        FALSE,
        adm_sim_acquire_identity_event_feature_done
    },
    {
        ADM_SIM_INDEX_DOMAIN_MATRIX_INSTALLER,
        ADM_SIM_INDEX_ENTITY_MATRIX_INSTALLER_FEATURE,
        "Complete",
        FALSE,
        adm_sim_acquire_identity_event_feature_complete
    },
    {
        null,
        null,
        SNULL,
        null,
        NULL
    }
};

/* Identifier Map */

adm_sim_identifier_typ adm_sim_identifier[] = {
    {
        null,
        null,
        null,
        SNULL,
        NULL
    }
};


/* Find Event Name From Event Index */

adm_base_string_typ * adm_sim_find_event_name(
    adm_base_integer_typ entity_index,
    adm_base_integer_typ entity_event_index)
{
    adm_base_integer_typ index;

    adm_base_boolean_typ event_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_find_event_name");
    #endif

    index = 0;

    event_not_found = TRUE;

    while (event_not_found) {

        if (adm_sim_event[index].entity == entity_index) {

            index += entity_event_index;

            event_not_found = FALSE;

        } else {

            ++index;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_find_event_name");
    #endif

    return (adm_sim_event[index].name);
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */