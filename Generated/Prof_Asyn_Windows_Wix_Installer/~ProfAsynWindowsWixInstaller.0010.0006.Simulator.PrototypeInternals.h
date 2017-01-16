
/* Simulator System Prototype Internals Header */

/* Display Entity Prototypes */

void adm_sim_display_entity_product(
    void);

void adm_sim_display_entity_icon(
    void);

void adm_sim_display_entity_package(
    void);

void adm_sim_display_entity_property(
    void);

void adm_sim_display_entity_directory(
    void);

void adm_sim_display_entity_component(
    void);

void adm_sim_display_entity_file(
    void);

void adm_sim_display_entity_shortcut(
    void);

void adm_sim_display_entity_file_shortcut(
    void);

void adm_sim_display_entity_uninstall_shortcut(
    void);

void adm_sim_display_entity_create_folder(
    void);

void adm_sim_display_entity_remove_folder(
    void);

void adm_sim_display_entity_environment(
    void);

void adm_sim_display_entity_registry_key(
    void);

void adm_sim_display_entity_registry_value(
    void);

void adm_sim_display_entity_feature(
    void);


/* Acquire Identity Event Prototypes */

void adm_sim_acquire_identity_event_product_generate(
    void);

void adm_sim_acquire_identity_event_product_done(
    void);

void adm_sim_acquire_identity_event_product_complete(
    void);

void adm_sim_acquire_identity_event_icon_generate(
    void);

void adm_sim_acquire_identity_event_package_generate(
    void);

void adm_sim_acquire_identity_event_property_generate(
    void);

void adm_sim_acquire_identity_event_directory_generate(
    void);

void adm_sim_acquire_identity_event_directory_generate_component(
    void);

void adm_sim_acquire_identity_event_directory_generate_directory(
    void);

void adm_sim_acquire_identity_event_directory_done(
    void);

void adm_sim_acquire_identity_event_directory_complete(
    void);

void adm_sim_acquire_identity_event_component_generate(
    void);

void adm_sim_acquire_identity_event_component_generate_reference(
    void);

void adm_sim_acquire_identity_event_component_complete(
    void);

void adm_sim_acquire_identity_event_file_generate(
    void);

void adm_sim_acquire_identity_event_file_generate_file_shortcut(
    void);

void adm_sim_acquire_identity_event_file_done(
    void);

void adm_sim_acquire_identity_event_file_complete(
    void);

void adm_sim_acquire_identity_event_file_shortcut_generate(
    void);

void adm_sim_acquire_identity_event_uninstall_shortcut_generate(
    void);

void adm_sim_acquire_identity_event_create_folder_generate(
    void);

void adm_sim_acquire_identity_event_remove_folder_generate(
    void);

void adm_sim_acquire_identity_event_environment_generate(
    void);

void adm_sim_acquire_identity_event_registry_key_generate(
    void);

void adm_sim_acquire_identity_event_registry_key_complete(
    void);

void adm_sim_acquire_identity_event_registry_value_generate(
    void);

void adm_sim_acquire_identity_event_feature_generate(
    void);

void adm_sim_acquire_identity_event_feature_generate_feature(
    void);

void adm_sim_acquire_identity_event_feature_generate_component(
    void);

void adm_sim_acquire_identity_event_feature_done(
    void);

void adm_sim_acquire_identity_event_feature_complete(
    void);


/* Acquire Identifier Event Prototypes */


/* Display Event Prototypes */

void adm_sim_display_event_product_generate(
    adm_ent_product_typ * ent_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_product_done(
    adm_ent_product_typ * ent_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_product_complete(
    adm_ent_product_typ * ent_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_icon_generate(
    adm_ent_icon_typ * ent_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_package_generate(
    adm_ent_package_typ * ent_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_property_generate(
    adm_ent_property_typ * ent_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_directory_generate(
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_directory_generate_component(
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_directory_generate_directory(
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_directory_done(
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_directory_complete(
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_component_generate(
    adm_ent_component_typ * ent_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_component_generate_reference(
    adm_ent_component_typ * ent_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_component_complete(
    adm_ent_component_typ * ent_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_file_generate(
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_file_generate_file_shortcut(
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_file_done(
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_file_complete(
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_file_shortcut_generate(
    adm_ent_file_shortcut_typ * ent_file_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_uninstall_shortcut_generate(
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_create_folder_generate(
    adm_ent_create_folder_typ * ent_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_remove_folder_generate(
    adm_ent_remove_folder_typ * ent_remove_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_environment_generate(
    adm_ent_environment_typ * ent_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_registry_key_generate(
    adm_ent_registry_key_typ * ent_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_registry_key_complete(
    adm_ent_registry_key_typ * ent_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_registry_value_generate(
    adm_ent_registry_value_typ * ent_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_feature_generate(
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_feature_generate_feature(
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_feature_generate_component(
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_feature_done(
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_feature_complete(
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);


/* Display State Prototypes */

void adm_sim_display_state_product_generating_product(
    adm_pool_target_product_typ * pool_target);

void adm_sim_display_state_product_generating_package(
    adm_pool_target_product_typ * pool_target);

void adm_sim_display_state_product_generating_property(
    adm_pool_target_product_typ * pool_target);

void adm_sim_display_state_product_generating_icon(
    adm_pool_target_product_typ * pool_target);

void adm_sim_display_state_product_generating_directory(
    adm_pool_target_product_typ * pool_target);

void adm_sim_display_state_product_generating_feature(
    adm_pool_target_product_typ * pool_target);

void adm_sim_display_state_product_generating_miscellaneous(
    adm_pool_target_product_typ * pool_target);

void adm_sim_display_state_product_idle(
    adm_pool_target_product_typ * pool_target);

void adm_sim_display_state_icon_generating(
    adm_pool_target_icon_typ * pool_target);

void adm_sim_display_state_package_generating(
    adm_pool_target_package_typ * pool_target);

void adm_sim_display_state_property_generating(
    adm_pool_target_property_typ * pool_target);

void adm_sim_display_state_directory_display_heading(
    adm_pool_target_directory_typ * pool_target);

void adm_sim_display_state_directory_generating(
    adm_pool_target_directory_typ * pool_target);

void adm_sim_display_state_directory_generating_component(
    adm_pool_target_directory_typ * pool_target);

void adm_sim_display_state_directory_generating_directory(
    adm_pool_target_directory_typ * pool_target);

void adm_sim_display_state_directory_idle(
    adm_pool_target_directory_typ * pool_target);

void adm_sim_display_state_component_generating(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_component_generating_file(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_component_generating_uninstall_shortcut(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_component_generating_create_folder(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_component_generating_remove_folder(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_component_generating_environment(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_component_generating_registry_key(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_component_generating_registry_value(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_component_idle(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_component_generating_reference(
    adm_pool_target_component_typ * pool_target);

void adm_sim_display_state_file_generating(
    adm_pool_target_file_typ * pool_target);

void adm_sim_display_state_file_generating_file_shortcut(
    adm_pool_target_file_typ * pool_target);

void adm_sim_display_state_file_idle(
    adm_pool_target_file_typ * pool_target);

void adm_sim_display_state_file_shortcut_generating(
    adm_pool_target_file_shortcut_typ * pool_target);

void adm_sim_display_state_uninstall_shortcut_generating(
    adm_pool_target_uninstall_shortcut_typ * pool_target);

void adm_sim_display_state_create_folder_generating(
    adm_pool_target_create_folder_typ * pool_target);

void adm_sim_display_state_remove_folder_generating(
    adm_pool_target_remove_folder_typ * pool_target);

void adm_sim_display_state_environment_generating(
    adm_pool_target_environment_typ * pool_target);

void adm_sim_display_state_registry_key_generating(
    adm_pool_target_registry_key_typ * pool_target);

void adm_sim_display_state_registry_key_generating_registry_value(
    adm_pool_target_registry_key_typ * pool_target);

void adm_sim_display_state_registry_key_idle(
    adm_pool_target_registry_key_typ * pool_target);

void adm_sim_display_state_registry_value_generating(
    adm_pool_target_registry_value_typ * pool_target);

void adm_sim_display_state_feature_display_heading(
    adm_pool_target_feature_typ * pool_target);

void adm_sim_display_state_feature_generating(
    adm_pool_target_feature_typ * pool_target);

void adm_sim_display_state_feature_generating_feature(
    adm_pool_target_feature_typ * pool_target);

void adm_sim_display_state_feature_finishing_product_feature(
    adm_pool_target_feature_typ * pool_target);

void adm_sim_display_state_feature_generating_component(
    adm_pool_target_feature_typ * pool_target);

void adm_sim_display_state_feature_finishing_component_feature(
    adm_pool_target_feature_typ * pool_target);


/* Find Event Name Prototype */

adm_base_string_typ * adm_sim_find_event_name(
    adm_base_integer_typ entity_index,
    adm_base_integer_typ entity_event_index);

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */