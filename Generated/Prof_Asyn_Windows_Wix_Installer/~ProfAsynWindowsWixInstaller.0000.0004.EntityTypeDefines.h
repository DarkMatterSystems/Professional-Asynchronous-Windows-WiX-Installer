
/* Entity Type Defines Header */

/* Entity Status Type Defines */

typedef enum {
    ADM_STATUS_PRODUCT_CREATING,
    ADM_STATUS_PRODUCT_GENERATING_PRODUCT,
    ADM_STATUS_PRODUCT_GENERATING_PACKAGE,
    ADM_STATUS_PRODUCT_GENERATING_PROPERTY,
    ADM_STATUS_PRODUCT_GENERATING_ICON,
    ADM_STATUS_PRODUCT_GENERATING_DIRECTORY,
    ADM_STATUS_PRODUCT_GENERATING_FEATURE,
    ADM_STATUS_PRODUCT_GENERATING_MISCELLANEOUS,
    ADM_STATUS_PRODUCT_IDLE
} adm_sta_product_typ;

typedef enum {
    ADM_STATUS_ICON_GENERATING
} adm_sta_icon_typ;

typedef enum {
    ADM_STATUS_PACKAGE_GENERATING
} adm_sta_package_typ;

typedef enum {
    ADM_STATUS_PROPERTY_GENERATING
} adm_sta_property_typ;

typedef enum {
    ADM_STATUS_DIRECTORY_CREATING,
    ADM_STATUS_DIRECTORY_DISPLAY_HEADING,
    ADM_STATUS_DIRECTORY_GENERATING,
    ADM_STATUS_DIRECTORY_GENERATING_COMPONENT,
    ADM_STATUS_DIRECTORY_GENERATING_DIRECTORY,
    ADM_STATUS_DIRECTORY_IDLE
} adm_sta_directory_typ;

typedef enum {
    ADM_STATUS_COMPONENT_CREATING,
    ADM_STATUS_COMPONENT_GENERATING,
    ADM_STATUS_COMPONENT_GENERATING_FILE,
    ADM_STATUS_COMPONENT_GENERATING_UNINSTALL_SHORTCUT,
    ADM_STATUS_COMPONENT_GENERATING_CREATE_FOLDER,
    ADM_STATUS_COMPONENT_GENERATING_REMOVE_FOLDER,
    ADM_STATUS_COMPONENT_GENERATING_ENVIRONMENT,
    ADM_STATUS_COMPONENT_GENERATING_REGISTRY_KEY,
    ADM_STATUS_COMPONENT_GENERATING_REGISTRY_VALUE,
    ADM_STATUS_COMPONENT_IDLE,
    ADM_STATUS_COMPONENT_GENERATING_REFERENCE
} adm_sta_component_typ;

typedef enum {
    ADM_STATUS_FILE_CREATING,
    ADM_STATUS_FILE_GENERATING,
    ADM_STATUS_FILE_GENERATING_FILE_SHORTCUT,
    ADM_STATUS_FILE_IDLE
} adm_sta_file_typ;

typedef enum {
    ADM_STATUS_FILE_SHORTCUT_GENERATING
} adm_sta_file_shortcut_typ;

typedef enum {
    ADM_STATUS_UNINSTALL_SHORTCUT_GENERATING
} adm_sta_uninstall_shortcut_typ;

typedef enum {
    ADM_STATUS_CREATE_FOLDER_GENERATING
} adm_sta_create_folder_typ;

typedef enum {
    ADM_STATUS_REMOVE_FOLDER_GENERATING
} adm_sta_remove_folder_typ;

typedef enum {
    ADM_STATUS_ENVIRONMENT_GENERATING
} adm_sta_environment_typ;

typedef enum {
    ADM_STATUS_REGISTRY_KEY_CREATING,
    ADM_STATUS_REGISTRY_KEY_GENERATING,
    ADM_STATUS_REGISTRY_KEY_GENERATING_REGISTRY_VALUE,
    ADM_STATUS_REGISTRY_KEY_IDLE
} adm_sta_registry_key_typ;

typedef enum {
    ADM_STATUS_REGISTRY_VALUE_GENERATING
} adm_sta_registry_value_typ;

typedef enum {
    ADM_STATUS_FEATURE_CREATING,
    ADM_STATUS_FEATURE_DISPLAY_HEADING,
    ADM_STATUS_FEATURE_GENERATING,
    ADM_STATUS_FEATURE_GENERATING_FEATURE,
    ADM_STATUS_FEATURE_FINISHING_PRODUCT_FEATURE,
    ADM_STATUS_FEATURE_GENERATING_COMPONENT,
    ADM_STATUS_FEATURE_FINISHING_COMPONENT_FEATURE
} adm_sta_feature_typ;


/* Entity Event Type Defines */

typedef enum {
    ADM_EVENT_PRODUCT_GENERATE,
    ADM_EVENT_PRODUCT_DONE,
    ADM_EVENT_PRODUCT_COMPLETE
} adm_evt_product_typ;

typedef enum {
    ADM_EVENT_ICON_GENERATE
} adm_evt_icon_typ;

typedef enum {
    ADM_EVENT_PACKAGE_GENERATE
} adm_evt_package_typ;

typedef enum {
    ADM_EVENT_PROPERTY_GENERATE
} adm_evt_property_typ;

typedef enum {
    ADM_EVENT_DIRECTORY_GENERATE,
    ADM_EVENT_DIRECTORY_GENERATE_COMPONENT,
    ADM_EVENT_DIRECTORY_GENERATE_DIRECTORY,
    ADM_EVENT_DIRECTORY_DONE,
    ADM_EVENT_DIRECTORY_COMPLETE
} adm_evt_directory_typ;

typedef enum {
    ADM_EVENT_COMPONENT_GENERATE,
    ADM_EVENT_COMPONENT_GENERATE_REFERENCE,
    ADM_EVENT_COMPONENT_COMPLETE
} adm_evt_component_typ;

typedef enum {
    ADM_EVENT_FILE_GENERATE,
    ADM_EVENT_FILE_GENERATE_FILE_SHORTCUT,
    ADM_EVENT_FILE_DONE,
    ADM_EVENT_FILE_COMPLETE
} adm_evt_file_typ;

typedef enum {
    ADM_EVENT_FILE_SHORTCUT_GENERATE
} adm_evt_file_shortcut_typ;

typedef enum {
    ADM_EVENT_UNINSTALL_SHORTCUT_GENERATE
} adm_evt_uninstall_shortcut_typ;

typedef enum {
    ADM_EVENT_CREATE_FOLDER_GENERATE
} adm_evt_create_folder_typ;

typedef enum {
    ADM_EVENT_REMOVE_FOLDER_GENERATE
} adm_evt_remove_folder_typ;

typedef enum {
    ADM_EVENT_ENVIRONMENT_GENERATE
} adm_evt_environment_typ;

typedef enum {
    ADM_EVENT_REGISTRY_KEY_GENERATE,
    ADM_EVENT_REGISTRY_KEY_COMPLETE
} adm_evt_registry_key_typ;

typedef enum {
    ADM_EVENT_REGISTRY_VALUE_GENERATE
} adm_evt_registry_value_typ;

typedef enum {
    ADM_EVENT_FEATURE_GENERATE,
    ADM_EVENT_FEATURE_GENERATE_FEATURE,
    ADM_EVENT_FEATURE_GENERATE_COMPONENT,
    ADM_EVENT_FEATURE_DONE,
    ADM_EVENT_FEATURE_COMPLETE
} adm_evt_feature_typ;


/* Entity Type Defines */

/* Product */

typedef struct adm_ent_product {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_product_typ status;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_name;
    adm_str_text_typ * atb_upgrade_code;
    adm_str_text_typ * atb_version;
    adm_str_text_typ * atb_manufacturer;
    adm_str_text_typ * atb_download_version;
    struct adm_rel_product_includes_icon * rel_includes_icon_head;
    struct adm_rel_product_includes_icon * rel_includes_icon_tail;
    struct adm_rel_product_includes_package * rel_includes_package_head;
    struct adm_rel_product_includes_package * rel_includes_package_tail;
    struct adm_rel_product_includes_property * rel_includes_property_head;
    struct adm_rel_product_includes_property * rel_includes_property_tail;
    struct adm_rel_product_includes_directory * rel_includes_directory_head;
    struct adm_rel_product_includes_directory * rel_includes_directory_tail;
    struct adm_rel_product_includes_feature * rel_includes_feature_head;
    struct adm_rel_product_includes_feature * rel_includes_feature_tail;
    struct adm_ent_product * back;
    struct adm_ent_product * next;
} adm_ent_product_typ;

/* Icon */

typedef struct adm_ent_icon {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_icon_typ status;
    adm_bln_flag_typ atb_processed;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_source_file;
    struct adm_rel_icon_writing_product * rel_writing_product_head;
    struct adm_rel_icon_writing_product * rel_writing_product_tail;
    struct adm_ent_icon * back;
    struct adm_ent_icon * next;
} adm_ent_icon_typ;

/* Package */

typedef struct adm_ent_package {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_package_typ status;
    adm_str_text_typ * atb_description;
    adm_str_text_typ * atb_comments;
    adm_str_text_typ * atb_manufacture;
    struct adm_rel_package_writing_product * rel_writing_product_head;
    struct adm_rel_package_writing_product * rel_writing_product_tail;
    struct adm_ent_package * back;
    struct adm_ent_package * next;
} adm_ent_package_typ;

/* Property */

typedef struct adm_ent_property {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_property_typ status;
    adm_bln_flag_typ atb_processed;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_value;
    struct adm_rel_property_writing_product * rel_writing_product_head;
    struct adm_rel_property_writing_product * rel_writing_product_tail;
    struct adm_ent_property * back;
    struct adm_ent_property * next;
} adm_ent_property_typ;

/* Directory */

typedef struct adm_ent_directory {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_directory_typ status;
    adm_bln_flag_typ atb_processed;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_name;
    adm_str_text_typ * atb_heading;
    struct adm_rel_directory_includes_component * rel_includes_component_head;
    struct adm_rel_directory_includes_component * rel_includes_component_tail;
    struct adm_rel_directory_includes_directory * rel_includes_directory_head;
    struct adm_rel_directory_includes_directory * rel_includes_directory_tail;
    struct adm_rel_directory_writing_product * rel_writing_product_head;
    struct adm_rel_directory_writing_product * rel_writing_product_tail;
    struct adm_rel_directory_writing_directory * rel_writing_directory_head;
    struct adm_rel_directory_writing_directory * rel_writing_directory_tail;
    struct adm_ent_directory * back;
    struct adm_ent_directory * next;
} adm_ent_directory_typ;

/* Component */

typedef struct adm_ent_component {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_component_typ status;
    adm_bln_flag_typ atb_processed;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_guid;
    adm_str_text_typ * atb_condition;
    struct adm_rel_component_includes_file * rel_includes_file_head;
    struct adm_rel_component_includes_file * rel_includes_file_tail;
    struct adm_rel_component_includes_uninstall_shortcut * rel_includes_uninstall_shortcut_head;
    struct adm_rel_component_includes_uninstall_shortcut * rel_includes_uninstall_shortcut_tail;
    struct adm_rel_component_includes_create_folder * rel_includes_create_folder_head;
    struct adm_rel_component_includes_create_folder * rel_includes_create_folder_tail;
    struct adm_rel_component_includes_remove_folder * rel_includes_remove_folder_head;
    struct adm_rel_component_includes_remove_folder * rel_includes_remove_folder_tail;
    struct adm_rel_component_includes_environment * rel_includes_environment_head;
    struct adm_rel_component_includes_environment * rel_includes_environment_tail;
    struct adm_rel_component_includes_registry_key * rel_includes_registry_key_head;
    struct adm_rel_component_includes_registry_key * rel_includes_registry_key_tail;
    struct adm_rel_component_includes_registry_value * rel_includes_registry_value_head;
    struct adm_rel_component_includes_registry_value * rel_includes_registry_value_tail;
    struct adm_rel_component_writing_directory * rel_writing_directory_head;
    struct adm_rel_component_writing_directory * rel_writing_directory_tail;
    struct adm_rel_component_writing_feature * rel_writing_feature_head;
    struct adm_rel_component_writing_feature * rel_writing_feature_tail;
    struct adm_ent_component * back;
    struct adm_ent_component * next;
} adm_ent_component_typ;

/* File */

typedef struct adm_ent_file {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_file_typ status;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_name;
    adm_str_text_typ * atb_source;
    struct adm_rel_file_includes_file_shortcut * rel_includes_file_shortcut_head;
    struct adm_rel_file_includes_file_shortcut * rel_includes_file_shortcut_tail;
    struct adm_rel_file_writing_component * rel_writing_component_head;
    struct adm_rel_file_writing_component * rel_writing_component_tail;
    struct adm_ent_file * back;
    struct adm_ent_file * next;
} adm_ent_file_typ;

/* Shortcut */

typedef struct adm_ent_shortcut {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_base_integer_typ ignore;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_name;
    adm_str_text_typ * atb_description;
    struct adm_ent_shortcut * back;
    struct adm_ent_shortcut * next;
} adm_ent_shortcut_typ;

/* File Shortcut */

typedef struct adm_ent_file_shortcut {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_file_shortcut_typ status;
    adm_bln_flag_typ atb_processed;
    adm_str_text_typ * atb_directory;
    adm_str_text_typ * atb_icon;
    struct adm_rel_file_shortcut_writing_file * rel_writing_file_head;
    struct adm_rel_file_shortcut_writing_file * rel_writing_file_tail;
    struct adm_rel_file_shortcut_specialisation_shortcut * rel_specialisation_shortcut_head;
    struct adm_rel_file_shortcut_specialisation_shortcut * rel_specialisation_shortcut_tail;
    struct adm_ent_file_shortcut * back;
    struct adm_ent_file_shortcut * next;
} adm_ent_file_shortcut_typ;

/* Uninstall Shortcut */

typedef struct adm_ent_uninstall_shortcut {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_uninstall_shortcut_typ status;
    adm_str_text_typ * atb_target;
    adm_str_text_typ * atb_arguments;
    struct adm_rel_uninstall_shortcut_writing_component * rel_writing_component_head;
    struct adm_rel_uninstall_shortcut_writing_component * rel_writing_component_tail;
    struct adm_rel_uninstall_shortcut_specialisation_shortcut * rel_specialisation_shortcut_head;
    struct adm_rel_uninstall_shortcut_specialisation_shortcut * rel_specialisation_shortcut_tail;
    struct adm_ent_uninstall_shortcut * back;
    struct adm_ent_uninstall_shortcut * next;
} adm_ent_uninstall_shortcut_typ;

/* Create Folder */

typedef struct adm_ent_create_folder {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_create_folder_typ status;
    struct adm_rel_create_folder_writing_component * rel_writing_component_head;
    struct adm_rel_create_folder_writing_component * rel_writing_component_tail;
    struct adm_ent_create_folder * back;
    struct adm_ent_create_folder * next;
} adm_ent_create_folder_typ;

/* Remove Folder */

typedef struct adm_ent_remove_folder {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_remove_folder_typ status;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_on;
    struct adm_rel_remove_folder_writing_component * rel_writing_component_head;
    struct adm_rel_remove_folder_writing_component * rel_writing_component_tail;
    struct adm_ent_remove_folder * back;
    struct adm_ent_remove_folder * next;
} adm_ent_remove_folder_typ;

/* Environment */

typedef struct adm_ent_environment {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_environment_typ status;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_name;
    adm_str_text_typ * atb_value;
    struct adm_rel_environment_writing_component * rel_writing_component_head;
    struct adm_rel_environment_writing_component * rel_writing_component_tail;
    struct adm_ent_environment * back;
    struct adm_ent_environment * next;
} adm_ent_environment_typ;

/* Registry Key */

typedef struct adm_ent_registry_key {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_registry_key_typ status;
    adm_str_text_typ * atb_root;
    adm_str_text_typ * atb_key;
    struct adm_rel_registry_key_includes_registry_value * rel_includes_registry_value_head;
    struct adm_rel_registry_key_includes_registry_value * rel_includes_registry_value_tail;
    struct adm_rel_registry_key_writing_component * rel_writing_component_head;
    struct adm_rel_registry_key_writing_component * rel_writing_component_tail;
    struct adm_ent_registry_key * back;
    struct adm_ent_registry_key * next;
} adm_ent_registry_key_typ;

/* Registry Value */

typedef struct adm_ent_registry_value {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_registry_value_typ status;
    adm_str_text_typ * atb_root;
    adm_str_text_typ * atb_key;
    adm_str_text_typ * atb_value;
    struct adm_rel_registry_value_writing_component * rel_writing_component_head;
    struct adm_rel_registry_value_writing_component * rel_writing_component_tail;
    struct adm_rel_registry_value_writing_registry_key * rel_writing_registry_key_head;
    struct adm_rel_registry_value_writing_registry_key * rel_writing_registry_key_tail;
    struct adm_ent_registry_value * back;
    struct adm_ent_registry_value * next;
} adm_ent_registry_value_typ;

/* Feature */

typedef struct adm_ent_feature {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_feature_typ status;
    adm_bln_flag_typ atb_processed;
    adm_str_text_typ * atb_id;
    adm_str_text_typ * atb_title;
    adm_str_text_typ * atb_display;
    adm_str_text_typ * atb_description;
    adm_str_text_typ * atb_configurable_directory;
    adm_str_text_typ * atb_heading;
    struct adm_rel_feature_includes_component * rel_includes_component_head;
    struct adm_rel_feature_includes_component * rel_includes_component_tail;
    struct adm_rel_feature_includes_feature * rel_includes_feature_head;
    struct adm_rel_feature_includes_feature * rel_includes_feature_tail;
    struct adm_rel_feature_writing_product * rel_writing_product_head;
    struct adm_rel_feature_writing_product * rel_writing_product_tail;
    struct adm_rel_feature_writing_feature * rel_writing_feature_head;
    struct adm_rel_feature_writing_feature * rel_writing_feature_tail;
    struct adm_ent_feature * back;
    struct adm_ent_feature * next;
} adm_ent_feature_typ;


/* Relationship Type Defines */

typedef struct adm_rel_product_includes_icon {
    adm_ent_icon_typ * ent_icon;
    struct adm_rel_product_includes_icon * back;
    struct adm_rel_product_includes_icon * next;
} adm_rel_product_includes_icon_typ;

typedef struct adm_rel_product_includes_package {
    adm_ent_package_typ * ent_package;
    struct adm_rel_product_includes_package * back;
    struct adm_rel_product_includes_package * next;
} adm_rel_product_includes_package_typ;

typedef struct adm_rel_product_includes_property {
    adm_ent_property_typ * ent_property;
    struct adm_rel_product_includes_property * back;
    struct adm_rel_product_includes_property * next;
} adm_rel_product_includes_property_typ;

typedef struct adm_rel_product_includes_directory {
    adm_ent_directory_typ * ent_directory;
    struct adm_rel_product_includes_directory * back;
    struct adm_rel_product_includes_directory * next;
} adm_rel_product_includes_directory_typ;

typedef struct adm_rel_product_includes_feature {
    adm_ent_feature_typ * ent_feature;
    struct adm_rel_product_includes_feature * back;
    struct adm_rel_product_includes_feature * next;
} adm_rel_product_includes_feature_typ;

typedef struct adm_rel_icon_writing_product {
    adm_ent_product_typ * ent_product;
    struct adm_rel_icon_writing_product * back;
    struct adm_rel_icon_writing_product * next;
} adm_rel_icon_writing_product_typ;

typedef struct adm_rel_package_writing_product {
    adm_ent_product_typ * ent_product;
    struct adm_rel_package_writing_product * back;
    struct adm_rel_package_writing_product * next;
} adm_rel_package_writing_product_typ;

typedef struct adm_rel_property_writing_product {
    adm_ent_product_typ * ent_product;
    struct adm_rel_property_writing_product * back;
    struct adm_rel_property_writing_product * next;
} adm_rel_property_writing_product_typ;

typedef struct adm_rel_directory_includes_component {
    adm_ent_component_typ * ent_component;
    struct adm_rel_directory_includes_component * back;
    struct adm_rel_directory_includes_component * next;
} adm_rel_directory_includes_component_typ;

typedef struct adm_rel_directory_includes_directory {
    adm_ent_directory_typ * ent_directory;
    struct adm_rel_directory_includes_directory * back;
    struct adm_rel_directory_includes_directory * next;
} adm_rel_directory_includes_directory_typ;

typedef struct adm_rel_directory_writing_product {
    adm_ent_product_typ * ent_product;
    struct adm_rel_directory_writing_product * back;
    struct adm_rel_directory_writing_product * next;
} adm_rel_directory_writing_product_typ;

typedef struct adm_rel_directory_writing_directory {
    adm_ent_directory_typ * ent_directory;
    struct adm_rel_directory_writing_directory * back;
    struct adm_rel_directory_writing_directory * next;
} adm_rel_directory_writing_directory_typ;

typedef struct adm_rel_component_includes_file {
    adm_ent_file_typ * ent_file;
    struct adm_rel_component_includes_file * back;
    struct adm_rel_component_includes_file * next;
} adm_rel_component_includes_file_typ;

typedef struct adm_rel_component_includes_uninstall_shortcut {
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut;
    struct adm_rel_component_includes_uninstall_shortcut * back;
    struct adm_rel_component_includes_uninstall_shortcut * next;
} adm_rel_component_includes_uninstall_shortcut_typ;

typedef struct adm_rel_component_includes_create_folder {
    adm_ent_create_folder_typ * ent_create_folder;
    struct adm_rel_component_includes_create_folder * back;
    struct adm_rel_component_includes_create_folder * next;
} adm_rel_component_includes_create_folder_typ;

typedef struct adm_rel_component_includes_remove_folder {
    adm_ent_remove_folder_typ * ent_remove_folder;
    struct adm_rel_component_includes_remove_folder * back;
    struct adm_rel_component_includes_remove_folder * next;
} adm_rel_component_includes_remove_folder_typ;

typedef struct adm_rel_component_includes_environment {
    adm_ent_environment_typ * ent_environment;
    struct adm_rel_component_includes_environment * back;
    struct adm_rel_component_includes_environment * next;
} adm_rel_component_includes_environment_typ;

typedef struct adm_rel_component_includes_registry_key {
    adm_ent_registry_key_typ * ent_registry_key;
    struct adm_rel_component_includes_registry_key * back;
    struct adm_rel_component_includes_registry_key * next;
} adm_rel_component_includes_registry_key_typ;

typedef struct adm_rel_component_includes_registry_value {
    adm_ent_registry_value_typ * ent_registry_value;
    struct adm_rel_component_includes_registry_value * back;
    struct adm_rel_component_includes_registry_value * next;
} adm_rel_component_includes_registry_value_typ;

typedef struct adm_rel_component_writing_directory {
    adm_ent_directory_typ * ent_directory;
    struct adm_rel_component_writing_directory * back;
    struct adm_rel_component_writing_directory * next;
} adm_rel_component_writing_directory_typ;

typedef struct adm_rel_component_writing_feature {
    adm_ent_feature_typ * ent_feature;
    struct adm_rel_component_writing_feature * back;
    struct adm_rel_component_writing_feature * next;
} adm_rel_component_writing_feature_typ;

typedef struct adm_rel_file_includes_file_shortcut {
    adm_ent_file_shortcut_typ * ent_file_shortcut;
    struct adm_rel_file_includes_file_shortcut * back;
    struct adm_rel_file_includes_file_shortcut * next;
} adm_rel_file_includes_file_shortcut_typ;

typedef struct adm_rel_file_writing_component {
    adm_ent_component_typ * ent_component;
    struct adm_rel_file_writing_component * back;
    struct adm_rel_file_writing_component * next;
} adm_rel_file_writing_component_typ;

typedef struct adm_rel_file_shortcut_writing_file {
    adm_ent_file_typ * ent_file;
    struct adm_rel_file_shortcut_writing_file * back;
    struct adm_rel_file_shortcut_writing_file * next;
} adm_rel_file_shortcut_writing_file_typ;

typedef struct adm_rel_file_shortcut_specialisation_shortcut {
    adm_ent_shortcut_typ * ent_shortcut;
    struct adm_rel_file_shortcut_specialisation_shortcut * back;
    struct adm_rel_file_shortcut_specialisation_shortcut * next;
} adm_rel_file_shortcut_specialisation_shortcut_typ;

typedef struct adm_rel_uninstall_shortcut_writing_component {
    adm_ent_component_typ * ent_component;
    struct adm_rel_uninstall_shortcut_writing_component * back;
    struct adm_rel_uninstall_shortcut_writing_component * next;
} adm_rel_uninstall_shortcut_writing_component_typ;

typedef struct adm_rel_uninstall_shortcut_specialisation_shortcut {
    adm_ent_shortcut_typ * ent_shortcut;
    struct adm_rel_uninstall_shortcut_specialisation_shortcut * back;
    struct adm_rel_uninstall_shortcut_specialisation_shortcut * next;
} adm_rel_uninstall_shortcut_specialisation_shortcut_typ;

typedef struct adm_rel_create_folder_writing_component {
    adm_ent_component_typ * ent_component;
    struct adm_rel_create_folder_writing_component * back;
    struct adm_rel_create_folder_writing_component * next;
} adm_rel_create_folder_writing_component_typ;

typedef struct adm_rel_remove_folder_writing_component {
    adm_ent_component_typ * ent_component;
    struct adm_rel_remove_folder_writing_component * back;
    struct adm_rel_remove_folder_writing_component * next;
} adm_rel_remove_folder_writing_component_typ;

typedef struct adm_rel_environment_writing_component {
    adm_ent_component_typ * ent_component;
    struct adm_rel_environment_writing_component * back;
    struct adm_rel_environment_writing_component * next;
} adm_rel_environment_writing_component_typ;

typedef struct adm_rel_registry_key_includes_registry_value {
    adm_ent_registry_value_typ * ent_registry_value;
    struct adm_rel_registry_key_includes_registry_value * back;
    struct adm_rel_registry_key_includes_registry_value * next;
} adm_rel_registry_key_includes_registry_value_typ;

typedef struct adm_rel_registry_key_writing_component {
    adm_ent_component_typ * ent_component;
    struct adm_rel_registry_key_writing_component * back;
    struct adm_rel_registry_key_writing_component * next;
} adm_rel_registry_key_writing_component_typ;

typedef struct adm_rel_registry_value_writing_component {
    adm_ent_component_typ * ent_component;
    struct adm_rel_registry_value_writing_component * back;
    struct adm_rel_registry_value_writing_component * next;
} adm_rel_registry_value_writing_component_typ;

typedef struct adm_rel_registry_value_writing_registry_key {
    adm_ent_registry_key_typ * ent_registry_key;
    struct adm_rel_registry_value_writing_registry_key * back;
    struct adm_rel_registry_value_writing_registry_key * next;
} adm_rel_registry_value_writing_registry_key_typ;

typedef struct adm_rel_feature_includes_component {
    adm_ent_component_typ * ent_component;
    struct adm_rel_feature_includes_component * back;
    struct adm_rel_feature_includes_component * next;
} adm_rel_feature_includes_component_typ;

typedef struct adm_rel_feature_includes_feature {
    adm_ent_feature_typ * ent_feature;
    struct adm_rel_feature_includes_feature * back;
    struct adm_rel_feature_includes_feature * next;
} adm_rel_feature_includes_feature_typ;

typedef struct adm_rel_feature_writing_product {
    adm_ent_product_typ * ent_product;
    struct adm_rel_feature_writing_product * back;
    struct adm_rel_feature_writing_product * next;
} adm_rel_feature_writing_product_typ;

typedef struct adm_rel_feature_writing_feature {
    adm_ent_feature_typ * ent_feature;
    struct adm_rel_feature_writing_feature * back;
    struct adm_rel_feature_writing_feature * next;
} adm_rel_feature_writing_feature_typ;


/* Error Location Type Define */

typedef struct {
    adm_base_integer_typ file;
    adm_base_integer_typ line;
    adm_base_integer_typ rank;
} adm_error_location_typ;


/* Entity Event Pool Target Type Defines */

typedef struct adm_pool_target_product {
    adm_evt_product_typ evente;
    adm_ent_product_typ * ent_product;
    adm_error_location_typ error_location;
    struct adm_pool_target_product * next;
} adm_pool_target_product_typ;

typedef struct adm_pool_target_icon {
    adm_evt_icon_typ evente;
    adm_ent_icon_typ * ent_icon;
    adm_error_location_typ error_location;
    struct adm_pool_target_icon * next;
} adm_pool_target_icon_typ;

typedef struct adm_pool_target_package {
    adm_evt_package_typ evente;
    adm_ent_package_typ * ent_package;
    adm_error_location_typ error_location;
    struct adm_pool_target_package * next;
} adm_pool_target_package_typ;

typedef struct adm_pool_target_property {
    adm_evt_property_typ evente;
    adm_ent_property_typ * ent_property;
    adm_error_location_typ error_location;
    struct adm_pool_target_property * next;
} adm_pool_target_property_typ;

typedef struct adm_pool_target_directory {
    adm_evt_directory_typ evente;
    adm_ent_directory_typ * ent_directory;
    adm_error_location_typ error_location;
    struct adm_pool_target_directory * next;
} adm_pool_target_directory_typ;

typedef struct adm_pool_target_component {
    adm_evt_component_typ evente;
    adm_ent_component_typ * ent_component;
    adm_error_location_typ error_location;
    struct adm_pool_target_component * next;
} adm_pool_target_component_typ;

typedef struct adm_pool_target_file {
    adm_evt_file_typ evente;
    adm_ent_file_typ * ent_file;
    adm_error_location_typ error_location;
    struct adm_pool_target_file * next;
} adm_pool_target_file_typ;

typedef struct adm_pool_target_file_shortcut {
    adm_evt_file_shortcut_typ evente;
    adm_ent_file_shortcut_typ * ent_file_shortcut;
    adm_error_location_typ error_location;
    struct adm_pool_target_file_shortcut * next;
} adm_pool_target_file_shortcut_typ;

typedef struct adm_pool_target_uninstall_shortcut {
    adm_evt_uninstall_shortcut_typ evente;
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut;
    adm_error_location_typ error_location;
    struct adm_pool_target_uninstall_shortcut * next;
} adm_pool_target_uninstall_shortcut_typ;

typedef struct adm_pool_target_create_folder {
    adm_evt_create_folder_typ evente;
    adm_ent_create_folder_typ * ent_create_folder;
    adm_error_location_typ error_location;
    struct adm_pool_target_create_folder * next;
} adm_pool_target_create_folder_typ;

typedef struct adm_pool_target_remove_folder {
    adm_evt_remove_folder_typ evente;
    adm_ent_remove_folder_typ * ent_remove_folder;
    adm_error_location_typ error_location;
    struct adm_pool_target_remove_folder * next;
} adm_pool_target_remove_folder_typ;

typedef struct adm_pool_target_environment {
    adm_evt_environment_typ evente;
    adm_ent_environment_typ * ent_environment;
    adm_error_location_typ error_location;
    struct adm_pool_target_environment * next;
} adm_pool_target_environment_typ;

typedef struct adm_pool_target_registry_key {
    adm_evt_registry_key_typ evente;
    adm_ent_registry_key_typ * ent_registry_key;
    adm_error_location_typ error_location;
    struct adm_pool_target_registry_key * next;
} adm_pool_target_registry_key_typ;

typedef struct adm_pool_target_registry_value {
    adm_evt_registry_value_typ evente;
    adm_ent_registry_value_typ * ent_registry_value;
    adm_error_location_typ error_location;
    struct adm_pool_target_registry_value * next;
} adm_pool_target_registry_value_typ;

typedef struct adm_pool_target_feature {
    adm_evt_feature_typ evente;
    adm_ent_feature_typ * ent_feature;
    adm_error_location_typ error_location;
    struct adm_pool_target_feature * next;
} adm_pool_target_feature_typ;


/* Entity System - Entity Type Defines */

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_product_typ * live_list_head;
    adm_ent_product_typ * live_list_tail;
    adm_ent_product_typ * dead_list_head;
    adm_ent_product_typ * dead_list_tail;
    adm_pool_target_product_typ * home_pool_head;
    adm_pool_target_product_typ * home_pool_tail;
    adm_pool_target_product_typ * away_pool_head;
    adm_pool_target_product_typ * away_pool_tail;
} adm_entity_system_product_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_icon_typ * live_list_head;
    adm_ent_icon_typ * live_list_tail;
    adm_ent_icon_typ * dead_list_head;
    adm_ent_icon_typ * dead_list_tail;
    adm_pool_target_icon_typ * home_pool_head;
    adm_pool_target_icon_typ * home_pool_tail;
    adm_pool_target_icon_typ * away_pool_head;
    adm_pool_target_icon_typ * away_pool_tail;
} adm_entity_system_icon_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_package_typ * live_list_head;
    adm_ent_package_typ * live_list_tail;
    adm_ent_package_typ * dead_list_head;
    adm_ent_package_typ * dead_list_tail;
    adm_pool_target_package_typ * home_pool_head;
    adm_pool_target_package_typ * home_pool_tail;
    adm_pool_target_package_typ * away_pool_head;
    adm_pool_target_package_typ * away_pool_tail;
} adm_entity_system_package_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_property_typ * live_list_head;
    adm_ent_property_typ * live_list_tail;
    adm_ent_property_typ * dead_list_head;
    adm_ent_property_typ * dead_list_tail;
    adm_pool_target_property_typ * home_pool_head;
    adm_pool_target_property_typ * home_pool_tail;
    adm_pool_target_property_typ * away_pool_head;
    adm_pool_target_property_typ * away_pool_tail;
} adm_entity_system_property_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_directory_typ * live_list_head;
    adm_ent_directory_typ * live_list_tail;
    adm_ent_directory_typ * dead_list_head;
    adm_ent_directory_typ * dead_list_tail;
    adm_pool_target_directory_typ * home_pool_head;
    adm_pool_target_directory_typ * home_pool_tail;
    adm_pool_target_directory_typ * away_pool_head;
    adm_pool_target_directory_typ * away_pool_tail;
} adm_entity_system_directory_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_component_typ * live_list_head;
    adm_ent_component_typ * live_list_tail;
    adm_ent_component_typ * dead_list_head;
    adm_ent_component_typ * dead_list_tail;
    adm_pool_target_component_typ * home_pool_head;
    adm_pool_target_component_typ * home_pool_tail;
    adm_pool_target_component_typ * away_pool_head;
    adm_pool_target_component_typ * away_pool_tail;
} adm_entity_system_component_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_file_typ * live_list_head;
    adm_ent_file_typ * live_list_tail;
    adm_ent_file_typ * dead_list_head;
    adm_ent_file_typ * dead_list_tail;
    adm_pool_target_file_typ * home_pool_head;
    adm_pool_target_file_typ * home_pool_tail;
    adm_pool_target_file_typ * away_pool_head;
    adm_pool_target_file_typ * away_pool_tail;
} adm_entity_system_file_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_shortcut_typ * live_list_head;
    adm_ent_shortcut_typ * live_list_tail;
    adm_ent_shortcut_typ * dead_list_head;
    adm_ent_shortcut_typ * dead_list_tail;
} adm_entity_system_shortcut_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_file_shortcut_typ * live_list_head;
    adm_ent_file_shortcut_typ * live_list_tail;
    adm_ent_file_shortcut_typ * dead_list_head;
    adm_ent_file_shortcut_typ * dead_list_tail;
    adm_pool_target_file_shortcut_typ * home_pool_head;
    adm_pool_target_file_shortcut_typ * home_pool_tail;
    adm_pool_target_file_shortcut_typ * away_pool_head;
    adm_pool_target_file_shortcut_typ * away_pool_tail;
} adm_entity_system_file_shortcut_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_uninstall_shortcut_typ * live_list_head;
    adm_ent_uninstall_shortcut_typ * live_list_tail;
    adm_ent_uninstall_shortcut_typ * dead_list_head;
    adm_ent_uninstall_shortcut_typ * dead_list_tail;
    adm_pool_target_uninstall_shortcut_typ * home_pool_head;
    adm_pool_target_uninstall_shortcut_typ * home_pool_tail;
    adm_pool_target_uninstall_shortcut_typ * away_pool_head;
    adm_pool_target_uninstall_shortcut_typ * away_pool_tail;
} adm_entity_system_uninstall_shortcut_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_create_folder_typ * live_list_head;
    adm_ent_create_folder_typ * live_list_tail;
    adm_ent_create_folder_typ * dead_list_head;
    adm_ent_create_folder_typ * dead_list_tail;
    adm_pool_target_create_folder_typ * home_pool_head;
    adm_pool_target_create_folder_typ * home_pool_tail;
    adm_pool_target_create_folder_typ * away_pool_head;
    adm_pool_target_create_folder_typ * away_pool_tail;
} adm_entity_system_create_folder_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_remove_folder_typ * live_list_head;
    adm_ent_remove_folder_typ * live_list_tail;
    adm_ent_remove_folder_typ * dead_list_head;
    adm_ent_remove_folder_typ * dead_list_tail;
    adm_pool_target_remove_folder_typ * home_pool_head;
    adm_pool_target_remove_folder_typ * home_pool_tail;
    adm_pool_target_remove_folder_typ * away_pool_head;
    adm_pool_target_remove_folder_typ * away_pool_tail;
} adm_entity_system_remove_folder_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_environment_typ * live_list_head;
    adm_ent_environment_typ * live_list_tail;
    adm_ent_environment_typ * dead_list_head;
    adm_ent_environment_typ * dead_list_tail;
    adm_pool_target_environment_typ * home_pool_head;
    adm_pool_target_environment_typ * home_pool_tail;
    adm_pool_target_environment_typ * away_pool_head;
    adm_pool_target_environment_typ * away_pool_tail;
} adm_entity_system_environment_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_registry_key_typ * live_list_head;
    adm_ent_registry_key_typ * live_list_tail;
    adm_ent_registry_key_typ * dead_list_head;
    adm_ent_registry_key_typ * dead_list_tail;
    adm_pool_target_registry_key_typ * home_pool_head;
    adm_pool_target_registry_key_typ * home_pool_tail;
    adm_pool_target_registry_key_typ * away_pool_head;
    adm_pool_target_registry_key_typ * away_pool_tail;
} adm_entity_system_registry_key_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_registry_value_typ * live_list_head;
    adm_ent_registry_value_typ * live_list_tail;
    adm_ent_registry_value_typ * dead_list_head;
    adm_ent_registry_value_typ * dead_list_tail;
    adm_pool_target_registry_value_typ * home_pool_head;
    adm_pool_target_registry_value_typ * home_pool_tail;
    adm_pool_target_registry_value_typ * away_pool_head;
    adm_pool_target_registry_value_typ * away_pool_tail;
} adm_entity_system_registry_value_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_feature_typ * live_list_head;
    adm_ent_feature_typ * live_list_tail;
    adm_ent_feature_typ * dead_list_head;
    adm_ent_feature_typ * dead_list_tail;
    adm_pool_target_feature_typ * home_pool_head;
    adm_pool_target_feature_typ * home_pool_tail;
    adm_pool_target_feature_typ * away_pool_head;
    adm_pool_target_feature_typ * away_pool_tail;
} adm_entity_system_feature_typ;


/* Entity System - System Type Define */

typedef struct {
    adm_entity_system_product_typ ent_product;
    adm_entity_system_icon_typ ent_icon;
    adm_entity_system_package_typ ent_package;
    adm_entity_system_property_typ ent_property;
    adm_entity_system_directory_typ ent_directory;
    adm_entity_system_component_typ ent_component;
    adm_entity_system_file_typ ent_file;
    adm_entity_system_shortcut_typ ent_shortcut;
    adm_entity_system_file_shortcut_typ ent_file_shortcut;
    adm_entity_system_uninstall_shortcut_typ ent_uninstall_shortcut;
    adm_entity_system_create_folder_typ ent_create_folder;
    adm_entity_system_remove_folder_typ ent_remove_folder;
    adm_entity_system_environment_typ ent_environment;
    adm_entity_system_registry_key_typ ent_registry_key;
    adm_entity_system_registry_value_typ ent_registry_value;
    adm_entity_system_feature_typ ent_feature;
} adm_entity_system_typ;

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */