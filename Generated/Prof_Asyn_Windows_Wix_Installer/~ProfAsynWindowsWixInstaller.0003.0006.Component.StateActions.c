
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Component State Actions */

void adm_state_action_component_generating(
    adm_ent_component_typ * ent_component)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<Component");
    adm_template_tab_in(7, 38, 21);
    adm_write_newline();
    adm_write_str("Id='");
    adm_write_str(ent_component->atb_id);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Guid='");
    adm_write_str(ent_component->atb_guid);
    adm_write_str("'>");

    /* CaseSelection */

    if (
        (
            (
                strcmp(ent_component->atb_condition, "")
            )
        )) {

        /* Template */

        adm_write_newline();
        adm_write_newline();
        adm_write_str("<Condition>");
        adm_template_tab_in(7, 50, 33);
        adm_write_newline();
        adm_write_newline();
        adm_write_str(ent_component->atb_condition);
        adm_template_tab_out(7, 50, 33);
        adm_write_newline();
        adm_write_newline();
        adm_write_str("</Condition>");
    }

    /* GenerateEvent */

    adm_send_event_component_generate(
        ent_component,
        ent_component,
        7, 60, 25);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating");
    #endif
}

void adm_state_action_component_generating_file(
    adm_ent_component_typ * ent_component)
{
    /* Entity Objects */
    adm_ent_file_typ * ent_file_0000000001;

    /* Relationship Relations */
    adm_rel_component_includes_file_typ * rel_component_includes_file_0000000001;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_file");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_component(
        ent_component,
        7, 74, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_component_includes_file_0000000001 = ent_component->rel_includes_file_head;

    if (rel_component_includes_file_0000000001 != NULL) {

        ent_file_0000000001 = rel_component_includes_file_0000000001->ent_file;

        traverse_not_found_0000000002 = FALSE;

        /* Relate */

        adm_link_relation_file_writing_component(
            ent_file_0000000001,
            ent_component,
            7, 77, 33);

        /* GenerateEvent */

        adm_send_event_file_generate(
            ent_component,
            ent_file_0000000001,
            7, 79, 33);
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_component,
            ent_component,
            7, 82, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_file");
    #endif
}

void adm_state_action_component_generating_uninstall_shortcut(
    adm_ent_component_typ * ent_component)
{
    /* Entity Objects */
    adm_ent_uninstall_shortcut_typ * ent_uninstall_shortcut_0000000001;

    /* Relationship Relations */
    adm_rel_component_includes_uninstall_shortcut_typ * rel_component_includes_uninstall_shortcut_0000000001;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_uninstall_shortcut");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_component(
        ent_component,
        7, 96, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_component_includes_uninstall_shortcut_0000000001 = ent_component->rel_includes_uninstall_shortcut_head;

    if (rel_component_includes_uninstall_shortcut_0000000001 != NULL) {

        ent_uninstall_shortcut_0000000001 = rel_component_includes_uninstall_shortcut_0000000001->ent_uninstall_shortcut;

        traverse_not_found_0000000002 = FALSE;

        /* Relate */

        adm_link_relation_uninstall_shortcut_writing_component(
            ent_uninstall_shortcut_0000000001,
            ent_component,
            7, 99, 33);

        /* GenerateEvent */

        adm_send_event_uninstall_shortcut_generate(
            ent_component,
            ent_uninstall_shortcut_0000000001,
            7, 101, 33);
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_component,
            ent_component,
            7, 104, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_uninstall_shortcut");
    #endif
}

void adm_state_action_component_generating_create_folder(
    adm_ent_component_typ * ent_component)
{
    /* Entity Objects */
    adm_ent_create_folder_typ * ent_create_folder_0000000001;

    /* Relationship Relations */
    adm_rel_component_includes_create_folder_typ * rel_component_includes_create_folder_0000000001;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_create_folder");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_component(
        ent_component,
        7, 118, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_component_includes_create_folder_0000000001 = ent_component->rel_includes_create_folder_head;

    if (rel_component_includes_create_folder_0000000001 != NULL) {

        ent_create_folder_0000000001 = rel_component_includes_create_folder_0000000001->ent_create_folder;

        traverse_not_found_0000000002 = FALSE;

        /* Relate */

        adm_link_relation_create_folder_writing_component(
            ent_create_folder_0000000001,
            ent_component,
            7, 121, 33);

        /* GenerateEvent */

        adm_send_event_create_folder_generate(
            ent_component,
            ent_create_folder_0000000001,
            7, 123, 33);
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_component,
            ent_component,
            7, 126, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_create_folder");
    #endif
}

void adm_state_action_component_generating_remove_folder(
    adm_ent_component_typ * ent_component)
{
    /* Entity Objects */
    adm_ent_remove_folder_typ * ent_remove_folder_0000000001;

    /* Relationship Relations */
    adm_rel_component_includes_remove_folder_typ * rel_component_includes_remove_folder_0000000001;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_remove_folder");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_component(
        ent_component,
        7, 140, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_component_includes_remove_folder_0000000001 = ent_component->rel_includes_remove_folder_head;

    if (rel_component_includes_remove_folder_0000000001 != NULL) {

        ent_remove_folder_0000000001 = rel_component_includes_remove_folder_0000000001->ent_remove_folder;

        traverse_not_found_0000000002 = FALSE;

        /* Relate */

        adm_link_relation_remove_folder_writing_component(
            ent_remove_folder_0000000001,
            ent_component,
            7, 143, 33);

        /* GenerateEvent */

        adm_send_event_remove_folder_generate(
            ent_component,
            ent_remove_folder_0000000001,
            7, 145, 33);
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_component,
            ent_component,
            7, 148, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_remove_folder");
    #endif
}

void adm_state_action_component_generating_environment(
    adm_ent_component_typ * ent_component)
{
    /* Entity Objects */
    adm_ent_environment_typ * ent_environment_0000000001;

    /* Relationship Relations */
    adm_rel_component_includes_environment_typ * rel_component_includes_environment_0000000001;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_environment");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_component(
        ent_component,
        7, 162, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_component_includes_environment_0000000001 = ent_component->rel_includes_environment_head;

    if (rel_component_includes_environment_0000000001 != NULL) {

        ent_environment_0000000001 = rel_component_includes_environment_0000000001->ent_environment;

        traverse_not_found_0000000002 = FALSE;

        /* Relate */

        adm_link_relation_environment_writing_component(
            ent_environment_0000000001,
            ent_component,
            7, 165, 33);

        /* GenerateEvent */

        adm_send_event_environment_generate(
            ent_component,
            ent_environment_0000000001,
            7, 167, 33);
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_component,
            ent_component,
            7, 170, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_environment");
    #endif
}

void adm_state_action_component_generating_registry_key(
    adm_ent_component_typ * ent_component)
{
    /* Entity Objects */
    adm_ent_registry_key_typ * ent_registry_key_0000000001;

    /* Relationship Relations */
    adm_rel_component_includes_registry_key_typ * rel_component_includes_registry_key_0000000001;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_registry_key");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_component(
        ent_component,
        7, 184, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_component_includes_registry_key_0000000001 = ent_component->rel_includes_registry_key_head;

    if (rel_component_includes_registry_key_0000000001 != NULL) {

        ent_registry_key_0000000001 = rel_component_includes_registry_key_0000000001->ent_registry_key;

        traverse_not_found_0000000002 = FALSE;

        /* Relate */

        adm_link_relation_registry_key_writing_component(
            ent_registry_key_0000000001,
            ent_component,
            7, 187, 33);

        /* GenerateEvent */

        adm_send_event_registry_key_generate(
            ent_component,
            ent_registry_key_0000000001,
            7, 189, 33);
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_component,
            ent_component,
            7, 192, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_registry_key");
    #endif
}

void adm_state_action_component_generating_registry_value(
    adm_ent_component_typ * ent_component)
{
    /* Entity Objects */
    adm_ent_registry_value_typ * ent_registry_value_0000000001;

    /* Relationship Relations */
    adm_rel_component_includes_registry_value_typ * rel_component_includes_registry_value_0000000001;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_registry_value");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_component(
        ent_component,
        7, 206, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_component_includes_registry_value_0000000001 = ent_component->rel_includes_registry_value_head;

    if (rel_component_includes_registry_value_0000000001 != NULL) {

        ent_registry_value_0000000001 = rel_component_includes_registry_value_0000000001->ent_registry_value;

        traverse_not_found_0000000002 = FALSE;

        /* Relate */

        adm_link_relation_registry_value_writing_component(
            ent_registry_value_0000000001,
            ent_component,
            7, 209, 33);

        /* GenerateEvent */

        adm_send_event_registry_value_generate(
            ent_component,
            ent_registry_value_0000000001,
            7, 211, 33);
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_component,
            ent_component,
            7, 214, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_registry_value");
    #endif
}

void adm_state_action_component_idle(
    adm_ent_component_typ * ent_component)
{
    /* Entity Objects */
    adm_ent_directory_typ * ent_directory_0000000001;

    /* Relationship Relations */
    adm_rel_component_writing_directory_typ * rel_component_writing_directory_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_idle");
    #endif

    /* Template */

    adm_write_newline();
    adm_template_tab_out(7, 226, 21);
    adm_write_newline();
    adm_write_str("</Component>");

    /* Traverse - TraverseSelection */

    adm_object_existent_component(
        ent_component,
        7, 232, 29);

    rel_component_writing_directory_0000000001 = ent_component->rel_writing_directory_head;

    if (rel_component_writing_directory_0000000001 != NULL) {

        ent_directory_0000000001 = rel_component_writing_directory_0000000001->ent_directory;

        /* Unrelate */

        adm_kill_relation_component_writing_directory(
            ent_component,
            rel_component_writing_directory_0000000001,
            7, 235, 33);

        /* GenerateEvent */

        adm_send_event_directory_done(
            ent_component,
            ent_directory_0000000001,
            7, 237, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_idle");
    #endif
}

void adm_state_action_component_generating_reference(
    adm_ent_component_typ * ent_component)
{
    /* Entity Objects */
    adm_ent_feature_typ * ent_feature_0000000001;

    /* Relationship Relations */
    adm_rel_component_writing_feature_typ * rel_component_writing_feature_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_reference");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_str("<ComponentRef Id='");
    adm_write_str(ent_component->atb_id);
    adm_write_str("'/>");

    /* Traverse - TraverseSelection */

    adm_object_existent_component(
        ent_component,
        7, 253, 29);

    rel_component_writing_feature_0000000001 = ent_component->rel_writing_feature_head;

    if (rel_component_writing_feature_0000000001 != NULL) {

        ent_feature_0000000001 = rel_component_writing_feature_0000000001->ent_feature;

        /* Unrelate */

        adm_kill_relation_component_writing_feature(
            ent_component,
            rel_component_writing_feature_0000000001,
            7, 256, 33);

        /* GenerateEvent */

        adm_send_event_feature_done(
            ent_component,
            ent_feature_0000000001,
            7, 258, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_component_generating_reference");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */