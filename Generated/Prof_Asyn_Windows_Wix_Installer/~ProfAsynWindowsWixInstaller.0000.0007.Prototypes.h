
/* System Prototypes Header */

/* Main Prototype */

int main(
    int,
    char * []);


/* System Library */

void * adm_allocate_memory(
    adm_base_integer_typ amount);

void adm_deallocate_memory(
    void * memory);

void adm_open_test_result_file  (void);
void adm_close_test_result_file (void);

void adm_open_stream_file(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_close_stream_file(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_write_int(
    adm_base_integer_typ number);

void adm_write_bln(
    adm_base_boolean_typ value);

void adm_write_fxd(
    adm_base_fixed_typ number);

void adm_write_flt(
    adm_base_float_typ number);

void adm_write_str(
    adm_base_string_typ * string);

void adm_write_newline(void);

void adm_template_tab_in(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_template_tab_out(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_display_tab_in(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_display_tab_out(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_convert_string_upper_case(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_lower_case(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_sentence_case(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_capital_case(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_remove_spaces(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_convert_underlines(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_integrity_check(void);


#if ADM_PROBE

void adm_probe_enter(
    adm_probe_group_typ   group,
    adm_base_string_typ * procedure_name);

void adm_probe_leave(
    adm_probe_group_typ   group,
    adm_base_string_typ * procedure_name);

void adm_add_spaces(
    adm_base_string_typ  * space_string,
    adm_base_integer_typ   space_number);

#endif


/* System Error Handler */

void adm_error_report(
    adm_err_number_typ     error,
    adm_err_file_typ       file,
    adm_err_line_typ       line,
    adm_err_rank_typ       rank,
    adm_err_problem_typ  * source,
    adm_base_integer_typ   identity,
    adm_err_problem_typ  * relation,
    adm_err_problem_typ  * target);


/* Initialisation Prototype */

void adm_initialisation(void);


/* Domain Initialisation Prototypes */

void adm_initialisation_matrix_installer(void);


/* System Scheduler Prototypes */

void adm_scheduler(void);

void adm_scheduler_dom_matrix_installer(void);


/* System Initialisation Scheduler Prototypes */

void adm_scheduler_initialisation(void);

void adm_scheduler_initialisation_matrix_installer(void);


/* System Determine Termination Scheduler Prototypes */

adm_base_boolean_typ adm_scheduler_determine_termination(void);

adm_base_boolean_typ adm_scheduler_determine_termination_dom_matrix_installer(void);


/* Data Access Prototypes */

adm_ent_product_typ * adm_make_object_product(
    adm_sta_product_typ status);

adm_ent_icon_typ * adm_make_object_icon(
    adm_sta_icon_typ status);

adm_ent_package_typ * adm_make_object_package(
    adm_sta_package_typ status);

adm_ent_property_typ * adm_make_object_property(
    adm_sta_property_typ status);

adm_ent_directory_typ * adm_make_object_directory(
    adm_sta_directory_typ status);

adm_ent_component_typ * adm_make_object_component(
    adm_sta_component_typ status);

adm_ent_file_typ * adm_make_object_file(
    adm_sta_file_typ status);

adm_ent_shortcut_typ * adm_make_object_shortcut(void);

adm_ent_file_shortcut_typ * adm_make_object_file_shortcut(
    adm_sta_file_shortcut_typ status);

adm_ent_uninstall_shortcut_typ * adm_make_object_uninstall_shortcut(
    adm_sta_uninstall_shortcut_typ status);

adm_ent_create_folder_typ * adm_make_object_create_folder(
    adm_sta_create_folder_typ status);

adm_ent_remove_folder_typ * adm_make_object_remove_folder(
    adm_sta_remove_folder_typ status);

adm_ent_environment_typ * adm_make_object_environment(
    adm_sta_environment_typ status);

adm_ent_registry_key_typ * adm_make_object_registry_key(
    adm_sta_registry_key_typ status);

adm_ent_registry_value_typ * adm_make_object_registry_value(
    adm_sta_registry_value_typ status);

adm_ent_feature_typ * adm_make_object_feature(
    adm_sta_feature_typ status);

void adm_bind_object_product(
    adm_ent_product_typ * ent_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_icon(
    adm_ent_icon_typ * ent_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_package(
    adm_ent_package_typ * ent_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_property(
    adm_ent_property_typ * ent_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_directory(
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_component(
    adm_ent_component_typ * ent_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_file(
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_shortcut(
    adm_ent_shortcut_typ * ent_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_file_shortcut(
    adm_ent_file_shortcut_typ * ent_file_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_uninstall_shortcut(
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_create_folder(
    adm_ent_create_folder_typ * ent_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_remove_folder(
    adm_ent_remove_folder_typ * ent_remove_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_environment(
    adm_ent_environment_typ * ent_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_registry_key(
    adm_ent_registry_key_typ * ent_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_registry_value(
    adm_ent_registry_value_typ * ent_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_feature(
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_product(
    void * source_object,
    adm_ent_product_typ * ent_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_icon(
    void * source_object,
    adm_ent_icon_typ * ent_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_package(
    void * source_object,
    adm_ent_package_typ * ent_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_property(
    void * source_object,
    adm_ent_property_typ * ent_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_directory(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_component(
    void * source_object,
    adm_ent_component_typ * ent_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_file(
    void * source_object,
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_shortcut(
    void * source_object,
    adm_ent_shortcut_typ * ent_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_file_shortcut(
    void * source_object,
    adm_ent_file_shortcut_typ * ent_file_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_uninstall_shortcut(
    void * source_object,
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_create_folder(
    void * source_object,
    adm_ent_create_folder_typ * ent_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_remove_folder(
    void * source_object,
    adm_ent_remove_folder_typ * ent_remove_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_environment(
    void * source_object,
    adm_ent_environment_typ * ent_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_registry_key(
    void * source_object,
    adm_ent_registry_key_typ * ent_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_registry_value(
    void * source_object,
    adm_ent_registry_value_typ * ent_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_feature(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_product_includes_icon(
    adm_ent_product_typ * ent_source_product,
    adm_ent_icon_typ * ent_target_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_product_includes_package(
    adm_ent_product_typ * ent_source_product,
    adm_ent_package_typ * ent_target_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_product_includes_property(
    adm_ent_product_typ * ent_source_product,
    adm_ent_property_typ * ent_target_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_product_includes_directory(
    adm_ent_product_typ * ent_source_product,
    adm_ent_directory_typ * ent_target_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_product_includes_feature(
    adm_ent_product_typ * ent_source_product,
    adm_ent_feature_typ * ent_target_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_icon_writing_product(
    adm_ent_icon_typ * ent_source_icon,
    adm_ent_product_typ * ent_target_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_package_writing_product(
    adm_ent_package_typ * ent_source_package,
    adm_ent_product_typ * ent_target_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_property_writing_product(
    adm_ent_property_typ * ent_source_property,
    adm_ent_product_typ * ent_target_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_directory_includes_component(
    adm_ent_directory_typ * ent_source_directory,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_directory_includes_directory(
    adm_ent_directory_typ * ent_source_directory,
    adm_ent_directory_typ * ent_target_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_directory_writing_product(
    adm_ent_directory_typ * ent_source_directory,
    adm_ent_product_typ * ent_target_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_directory_writing_directory(
    adm_ent_directory_typ * ent_source_directory,
    adm_ent_directory_typ * ent_target_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_component_includes_file(
    adm_ent_component_typ * ent_source_component,
    adm_ent_file_typ * ent_target_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_component_includes_uninstall_shortcut(
    adm_ent_component_typ * ent_source_component,
    adm_ent_uninstall_shortcut_typ * ent_target_uninstall_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_component_includes_create_folder(
    adm_ent_component_typ * ent_source_component,
    adm_ent_create_folder_typ * ent_target_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_component_includes_remove_folder(
    adm_ent_component_typ * ent_source_component,
    adm_ent_remove_folder_typ * ent_target_remove_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_component_includes_environment(
    adm_ent_component_typ * ent_source_component,
    adm_ent_environment_typ * ent_target_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_component_includes_registry_key(
    adm_ent_component_typ * ent_source_component,
    adm_ent_registry_key_typ * ent_target_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_component_includes_registry_value(
    adm_ent_component_typ * ent_source_component,
    adm_ent_registry_value_typ * ent_target_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_component_writing_directory(
    adm_ent_component_typ * ent_source_component,
    adm_ent_directory_typ * ent_target_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_component_writing_feature(
    adm_ent_component_typ * ent_source_component,
    adm_ent_feature_typ * ent_target_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_file_includes_file_shortcut(
    adm_ent_file_typ * ent_source_file,
    adm_ent_file_shortcut_typ * ent_target_file_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_file_writing_component(
    adm_ent_file_typ * ent_source_file,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_file_shortcut_writing_file(
    adm_ent_file_shortcut_typ * ent_source_file_shortcut,
    adm_ent_file_typ * ent_target_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_file_shortcut_specialisation_shortcut(
    adm_ent_file_shortcut_typ * ent_source_file_shortcut,
    adm_ent_shortcut_typ * ent_target_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_uninstall_shortcut_writing_component(
    adm_ent_uninstall_shortcut_typ * ent_source_uninstall_shortcut,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_uninstall_shortcut_specialisation_shortcut(
    adm_ent_uninstall_shortcut_typ * ent_source_uninstall_shortcut,
    adm_ent_shortcut_typ * ent_target_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_create_folder_writing_component(
    adm_ent_create_folder_typ * ent_source_create_folder,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_remove_folder_writing_component(
    adm_ent_remove_folder_typ * ent_source_remove_folder,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_environment_writing_component(
    adm_ent_environment_typ * ent_source_environment,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_registry_key_includes_registry_value(
    adm_ent_registry_key_typ * ent_source_registry_key,
    adm_ent_registry_value_typ * ent_target_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_registry_key_writing_component(
    adm_ent_registry_key_typ * ent_source_registry_key,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_registry_value_writing_component(
    adm_ent_registry_value_typ * ent_source_registry_value,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_registry_value_writing_registry_key(
    adm_ent_registry_value_typ * ent_source_registry_value,
    adm_ent_registry_key_typ * ent_target_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_feature_includes_component(
    adm_ent_feature_typ * ent_source_feature,
    adm_ent_component_typ * ent_target_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_feature_includes_feature(
    adm_ent_feature_typ * ent_source_feature,
    adm_ent_feature_typ * ent_target_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_feature_writing_product(
    adm_ent_feature_typ * ent_source_feature,
    adm_ent_product_typ * ent_target_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_feature_writing_feature(
    adm_ent_feature_typ * ent_source_feature,
    adm_ent_feature_typ * ent_target_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_product_includes_icon(
    adm_ent_product_typ * ent_product,
    adm_rel_product_includes_icon_typ * rel_product_includes_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_product_includes_package(
    adm_ent_product_typ * ent_product,
    adm_rel_product_includes_package_typ * rel_product_includes_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_product_includes_property(
    adm_ent_product_typ * ent_product,
    adm_rel_product_includes_property_typ * rel_product_includes_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_product_includes_directory(
    adm_ent_product_typ * ent_product,
    adm_rel_product_includes_directory_typ * rel_product_includes_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_product_includes_feature(
    adm_ent_product_typ * ent_product,
    adm_rel_product_includes_feature_typ * rel_product_includes_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_icon_writing_product(
    adm_ent_icon_typ * ent_icon,
    adm_rel_icon_writing_product_typ * rel_icon_writing_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_package_writing_product(
    adm_ent_package_typ * ent_package,
    adm_rel_package_writing_product_typ * rel_package_writing_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_property_writing_product(
    adm_ent_property_typ * ent_property,
    adm_rel_property_writing_product_typ * rel_property_writing_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_directory_includes_component(
    adm_ent_directory_typ * ent_directory,
    adm_rel_directory_includes_component_typ * rel_directory_includes_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_directory_includes_directory(
    adm_ent_directory_typ * ent_directory,
    adm_rel_directory_includes_directory_typ * rel_directory_includes_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_directory_writing_product(
    adm_ent_directory_typ * ent_directory,
    adm_rel_directory_writing_product_typ * rel_directory_writing_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_directory_writing_directory(
    adm_ent_directory_typ * ent_directory,
    adm_rel_directory_writing_directory_typ * rel_directory_writing_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_component_includes_file(
    adm_ent_component_typ * ent_component,
    adm_rel_component_includes_file_typ * rel_component_includes_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_component_includes_uninstall_shortcut(
    adm_ent_component_typ * ent_component,
    adm_rel_component_includes_uninstall_shortcut_typ * rel_component_includes_uninstall_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_component_includes_create_folder(
    adm_ent_component_typ * ent_component,
    adm_rel_component_includes_create_folder_typ * rel_component_includes_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_component_includes_remove_folder(
    adm_ent_component_typ * ent_component,
    adm_rel_component_includes_remove_folder_typ * rel_component_includes_remove_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_component_includes_environment(
    adm_ent_component_typ * ent_component,
    adm_rel_component_includes_environment_typ * rel_component_includes_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_component_includes_registry_key(
    adm_ent_component_typ * ent_component,
    adm_rel_component_includes_registry_key_typ * rel_component_includes_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_component_includes_registry_value(
    adm_ent_component_typ * ent_component,
    adm_rel_component_includes_registry_value_typ * rel_component_includes_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_component_writing_directory(
    adm_ent_component_typ * ent_component,
    adm_rel_component_writing_directory_typ * rel_component_writing_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_component_writing_feature(
    adm_ent_component_typ * ent_component,
    adm_rel_component_writing_feature_typ * rel_component_writing_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_file_includes_file_shortcut(
    adm_ent_file_typ * ent_file,
    adm_rel_file_includes_file_shortcut_typ * rel_file_includes_file_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_file_writing_component(
    adm_ent_file_typ * ent_file,
    adm_rel_file_writing_component_typ * rel_file_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_file_shortcut_writing_file(
    adm_ent_file_shortcut_typ * ent_file_shortcut,
    adm_rel_file_shortcut_writing_file_typ * rel_file_shortcut_writing_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_file_shortcut_specialisation_shortcut(
    adm_ent_file_shortcut_typ * ent_file_shortcut,
    adm_rel_file_shortcut_specialisation_shortcut_typ * rel_file_shortcut_specialisation_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_uninstall_shortcut_writing_component(
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut,
    adm_rel_uninstall_shortcut_writing_component_typ * rel_uninstall_shortcut_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_uninstall_shortcut_specialisation_shortcut(
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut,
    adm_rel_uninstall_shortcut_specialisation_shortcut_typ * rel_uninstall_shortcut_specialisation_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_create_folder_writing_component(
    adm_ent_create_folder_typ * ent_create_folder,
    adm_rel_create_folder_writing_component_typ * rel_create_folder_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_remove_folder_writing_component(
    adm_ent_remove_folder_typ * ent_remove_folder,
    adm_rel_remove_folder_writing_component_typ * rel_remove_folder_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_environment_writing_component(
    adm_ent_environment_typ * ent_environment,
    adm_rel_environment_writing_component_typ * rel_environment_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_registry_key_includes_registry_value(
    adm_ent_registry_key_typ * ent_registry_key,
    adm_rel_registry_key_includes_registry_value_typ * rel_registry_key_includes_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_registry_key_writing_component(
    adm_ent_registry_key_typ * ent_registry_key,
    adm_rel_registry_key_writing_component_typ * rel_registry_key_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_registry_value_writing_component(
    adm_ent_registry_value_typ * ent_registry_value,
    adm_rel_registry_value_writing_component_typ * rel_registry_value_writing_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_registry_value_writing_registry_key(
    adm_ent_registry_value_typ * ent_registry_value,
    adm_rel_registry_value_writing_registry_key_typ * rel_registry_value_writing_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_feature_includes_component(
    adm_ent_feature_typ * ent_feature,
    adm_rel_feature_includes_component_typ * rel_feature_includes_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_feature_includes_feature(
    adm_ent_feature_typ * ent_feature,
    adm_rel_feature_includes_feature_typ * rel_feature_includes_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_feature_writing_product(
    adm_ent_feature_typ * ent_feature,
    adm_rel_feature_writing_product_typ * rel_feature_writing_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_feature_writing_feature(
    adm_ent_feature_typ * ent_feature,
    adm_rel_feature_writing_feature_typ * rel_feature_writing_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_product(
    adm_ent_product_typ * ent_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_icon(
    adm_ent_icon_typ * ent_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_package(
    adm_ent_package_typ * ent_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_property(
    adm_ent_property_typ * ent_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_directory(
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_component(
    adm_ent_component_typ * ent_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_file(
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_shortcut(
    adm_ent_shortcut_typ * ent_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_file_shortcut(
    adm_ent_file_shortcut_typ * ent_file_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_uninstall_shortcut(
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_create_folder(
    adm_ent_create_folder_typ * ent_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_remove_folder(
    adm_ent_remove_folder_typ * ent_remove_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_environment(
    adm_ent_environment_typ * ent_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_registry_key(
    adm_ent_registry_key_typ * ent_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_registry_value(
    adm_ent_registry_value_typ * ent_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_feature(
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);


/* Event Sender Prototypes */

void adm_send_event_product_generate(
    void * source_object,
    adm_ent_product_typ * ent_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_product_done(
    void * source_object,
    adm_ent_product_typ * ent_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_product_complete(
    void * source_object,
    adm_ent_product_typ * ent_product,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_icon_generate(
    void * source_object,
    adm_ent_icon_typ * ent_icon,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_package_generate(
    void * source_object,
    adm_ent_package_typ * ent_package,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_property_generate(
    void * source_object,
    adm_ent_property_typ * ent_property,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_directory_generate(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_directory_generate_component(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_directory_generate_directory(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_directory_done(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_directory_complete(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_component_generate(
    void * source_object,
    adm_ent_component_typ * ent_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_component_generate_reference(
    void * source_object,
    adm_ent_component_typ * ent_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_component_complete(
    void * source_object,
    adm_ent_component_typ * ent_component,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_file_generate(
    void * source_object,
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_file_generate_file_shortcut(
    void * source_object,
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_file_done(
    void * source_object,
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_file_complete(
    void * source_object,
    adm_ent_file_typ * ent_file,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_file_shortcut_generate(
    void * source_object,
    adm_ent_file_shortcut_typ * ent_file_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_uninstall_shortcut_generate(
    void * source_object,
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_create_folder_generate(
    void * source_object,
    adm_ent_create_folder_typ * ent_create_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_remove_folder_generate(
    void * source_object,
    adm_ent_remove_folder_typ * ent_remove_folder,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_environment_generate(
    void * source_object,
    adm_ent_environment_typ * ent_environment,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_registry_key_generate(
    void * source_object,
    adm_ent_registry_key_typ * ent_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_registry_key_complete(
    void * source_object,
    adm_ent_registry_key_typ * ent_registry_key,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_registry_value_generate(
    void * source_object,
    adm_ent_registry_value_typ * ent_registry_value,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_feature_generate(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_feature_generate_feature(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_feature_generate_component(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_feature_done(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_feature_complete(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);


/* Dispatcher Prototypes */

void adm_dispatcher_product         (void);
void adm_dispatch_home_pool_product (void);

adm_pool_target_product_typ * adm_find_home_target_event_product (void);
adm_pool_target_product_typ * adm_find_away_target_event_product (void);

void adm_dispatch_state_action_product(
    adm_pool_target_product_typ * pool_target_product);

void adm_dispatcher_icon         (void);
void adm_dispatch_home_pool_icon (void);

adm_pool_target_icon_typ * adm_find_home_target_event_icon (void);
adm_pool_target_icon_typ * adm_find_away_target_event_icon (void);

void adm_dispatch_state_action_icon(
    adm_pool_target_icon_typ * pool_target_icon);

void adm_dispatcher_package         (void);
void adm_dispatch_home_pool_package (void);

adm_pool_target_package_typ * adm_find_home_target_event_package (void);
adm_pool_target_package_typ * adm_find_away_target_event_package (void);

void adm_dispatch_state_action_package(
    adm_pool_target_package_typ * pool_target_package);

void adm_dispatcher_property         (void);
void adm_dispatch_home_pool_property (void);

adm_pool_target_property_typ * adm_find_home_target_event_property (void);
adm_pool_target_property_typ * adm_find_away_target_event_property (void);

void adm_dispatch_state_action_property(
    adm_pool_target_property_typ * pool_target_property);

void adm_dispatcher_directory         (void);
void adm_dispatch_home_pool_directory (void);

adm_pool_target_directory_typ * adm_find_home_target_event_directory (void);
adm_pool_target_directory_typ * adm_find_away_target_event_directory (void);

void adm_dispatch_state_action_directory(
    adm_pool_target_directory_typ * pool_target_directory);

void adm_dispatcher_component         (void);
void adm_dispatch_home_pool_component (void);

adm_pool_target_component_typ * adm_find_home_target_event_component (void);
adm_pool_target_component_typ * adm_find_away_target_event_component (void);

void adm_dispatch_state_action_component(
    adm_pool_target_component_typ * pool_target_component);

void adm_dispatcher_file         (void);
void adm_dispatch_home_pool_file (void);

adm_pool_target_file_typ * adm_find_home_target_event_file (void);
adm_pool_target_file_typ * adm_find_away_target_event_file (void);

void adm_dispatch_state_action_file(
    adm_pool_target_file_typ * pool_target_file);

void adm_dispatcher_file_shortcut         (void);
void adm_dispatch_home_pool_file_shortcut (void);

adm_pool_target_file_shortcut_typ * adm_find_home_target_event_file_shortcut (void);
adm_pool_target_file_shortcut_typ * adm_find_away_target_event_file_shortcut (void);

void adm_dispatch_state_action_file_shortcut(
    adm_pool_target_file_shortcut_typ * pool_target_file_shortcut);

void adm_dispatcher_uninstall_shortcut         (void);
void adm_dispatch_home_pool_uninstall_shortcut (void);

adm_pool_target_uninstall_shortcut_typ * adm_find_home_target_event_uninstall_shortcut (void);
adm_pool_target_uninstall_shortcut_typ * adm_find_away_target_event_uninstall_shortcut (void);

void adm_dispatch_state_action_uninstall_shortcut(
    adm_pool_target_uninstall_shortcut_typ * pool_target_uninstall_shortcut);

void adm_dispatcher_create_folder         (void);
void adm_dispatch_home_pool_create_folder (void);

adm_pool_target_create_folder_typ * adm_find_home_target_event_create_folder (void);
adm_pool_target_create_folder_typ * adm_find_away_target_event_create_folder (void);

void adm_dispatch_state_action_create_folder(
    adm_pool_target_create_folder_typ * pool_target_create_folder);

void adm_dispatcher_remove_folder         (void);
void adm_dispatch_home_pool_remove_folder (void);

adm_pool_target_remove_folder_typ * adm_find_home_target_event_remove_folder (void);
adm_pool_target_remove_folder_typ * adm_find_away_target_event_remove_folder (void);

void adm_dispatch_state_action_remove_folder(
    adm_pool_target_remove_folder_typ * pool_target_remove_folder);

void adm_dispatcher_environment         (void);
void adm_dispatch_home_pool_environment (void);

adm_pool_target_environment_typ * adm_find_home_target_event_environment (void);
adm_pool_target_environment_typ * adm_find_away_target_event_environment (void);

void adm_dispatch_state_action_environment(
    adm_pool_target_environment_typ * pool_target_environment);

void adm_dispatcher_registry_key         (void);
void adm_dispatch_home_pool_registry_key (void);

adm_pool_target_registry_key_typ * adm_find_home_target_event_registry_key (void);
adm_pool_target_registry_key_typ * adm_find_away_target_event_registry_key (void);

void adm_dispatch_state_action_registry_key(
    adm_pool_target_registry_key_typ * pool_target_registry_key);

void adm_dispatcher_registry_value         (void);
void adm_dispatch_home_pool_registry_value (void);

adm_pool_target_registry_value_typ * adm_find_home_target_event_registry_value (void);
adm_pool_target_registry_value_typ * adm_find_away_target_event_registry_value (void);

void adm_dispatch_state_action_registry_value(
    adm_pool_target_registry_value_typ * pool_target_registry_value);

void adm_dispatcher_feature         (void);
void adm_dispatch_home_pool_feature (void);

adm_pool_target_feature_typ * adm_find_home_target_event_feature (void);
adm_pool_target_feature_typ * adm_find_away_target_event_feature (void);

void adm_dispatch_state_action_feature(
    adm_pool_target_feature_typ * pool_target_feature);


/* State Action Prototypes */

void adm_state_action_product_generating_product(
    adm_ent_product_typ * ent_product);

void adm_state_action_product_generating_package(
    adm_ent_product_typ * ent_product);

void adm_state_action_product_generating_property(
    adm_ent_product_typ * ent_product);

void adm_state_action_product_generating_icon(
    adm_ent_product_typ * ent_product);

void adm_state_action_product_generating_directory(
    adm_ent_product_typ * ent_product);

void adm_state_action_product_generating_feature(
    adm_ent_product_typ * ent_product);

void adm_state_action_product_generating_miscellaneous(
    adm_ent_product_typ * ent_product);

void adm_state_action_product_idle(
    adm_ent_product_typ * ent_product);

void adm_state_action_icon_generating(
    adm_ent_icon_typ * ent_icon);

void adm_state_action_package_generating(
    adm_ent_package_typ * ent_package);

void adm_state_action_property_generating(
    adm_ent_property_typ * ent_property);

void adm_state_action_directory_display_heading(
    adm_ent_directory_typ * ent_directory);

void adm_state_action_directory_generating(
    adm_ent_directory_typ * ent_directory);

void adm_state_action_directory_generating_component(
    adm_ent_directory_typ * ent_directory);

void adm_state_action_directory_generating_directory(
    adm_ent_directory_typ * ent_directory);

void adm_state_action_directory_idle(
    adm_ent_directory_typ * ent_directory);

void adm_state_action_component_generating(
    adm_ent_component_typ * ent_component);

void adm_state_action_component_generating_file(
    adm_ent_component_typ * ent_component);

void adm_state_action_component_generating_uninstall_shortcut(
    adm_ent_component_typ * ent_component);

void adm_state_action_component_generating_create_folder(
    adm_ent_component_typ * ent_component);

void adm_state_action_component_generating_remove_folder(
    adm_ent_component_typ * ent_component);

void adm_state_action_component_generating_environment(
    adm_ent_component_typ * ent_component);

void adm_state_action_component_generating_registry_key(
    adm_ent_component_typ * ent_component);

void adm_state_action_component_generating_registry_value(
    adm_ent_component_typ * ent_component);

void adm_state_action_component_idle(
    adm_ent_component_typ * ent_component);

void adm_state_action_component_generating_reference(
    adm_ent_component_typ * ent_component);

void adm_state_action_file_generating(
    adm_ent_file_typ * ent_file);

void adm_state_action_file_generating_file_shortcut(
    adm_ent_file_typ * ent_file);

void adm_state_action_file_idle(
    adm_ent_file_typ * ent_file);

void adm_state_action_file_shortcut_generating(
    adm_ent_file_shortcut_typ * ent_file_shortcut);

void adm_state_action_uninstall_shortcut_generating(
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut);

void adm_state_action_create_folder_generating(
    adm_ent_create_folder_typ * ent_create_folder);

void adm_state_action_remove_folder_generating(
    adm_ent_remove_folder_typ * ent_remove_folder);

void adm_state_action_environment_generating(
    adm_ent_environment_typ * ent_environment);

void adm_state_action_registry_key_generating(
    adm_ent_registry_key_typ * ent_registry_key);

void adm_state_action_registry_key_generating_registry_value(
    adm_ent_registry_key_typ * ent_registry_key);

void adm_state_action_registry_key_idle(
    adm_ent_registry_key_typ * ent_registry_key);

void adm_state_action_registry_value_generating(
    adm_ent_registry_value_typ * ent_registry_value);

void adm_state_action_feature_display_heading(
    adm_ent_feature_typ * ent_feature);

void adm_state_action_feature_generating(
    adm_ent_feature_typ * ent_feature);

void adm_state_action_feature_generating_feature(
    adm_ent_feature_typ * ent_feature);

void adm_state_action_feature_finishing_product_feature(
    adm_ent_feature_typ * ent_feature);

void adm_state_action_feature_generating_component(
    adm_ent_feature_typ * ent_feature);

void adm_state_action_feature_finishing_component_feature(
    adm_ent_feature_typ * ent_feature);

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */