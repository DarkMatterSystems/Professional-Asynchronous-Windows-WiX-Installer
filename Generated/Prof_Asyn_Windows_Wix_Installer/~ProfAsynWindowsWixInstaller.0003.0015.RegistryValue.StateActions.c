
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Registry Value State Actions */

void adm_state_action_registry_value_generating(
    adm_ent_registry_value_typ * ent_registry_value)
{
    /* Entity Objects */
    adm_ent_component_typ * ent_component_0000000001;
    adm_ent_registry_key_typ * ent_registry_key_0000000003;

    /* Relationship Relations */
    adm_rel_registry_value_writing_component_typ * rel_registry_value_writing_component_0000000001;
    adm_rel_registry_value_writing_registry_key_typ * rel_registry_value_writing_registry_key_0000000003;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_registry_value_generating");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<RegistryValue");
    adm_template_tab_in(16, 20, 21);

    /* CaseSelection */

    if (
        (
            (
                strcmp(ent_registry_value->atb_root, "")
            )
        )) {

        /* Template */

        adm_write_newline();
        adm_write_str("Root='");
        adm_write_str(ent_registry_value->atb_root);
        adm_write_str("'");
    }

    /* CaseSelection */

    if (
        (
            (
                strcmp(ent_registry_value->atb_key, "")
            )
        )) {

        /* Template */

        adm_write_newline();
        adm_write_str("Key='");
        adm_write_str(ent_registry_value->atb_key);
        adm_write_str("'");
    }

    /* Template */

    adm_write_newline();
    adm_write_str("Value='");
    adm_write_str(ent_registry_value->atb_value);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Type='string'");
    adm_write_newline();
    adm_write_str("KeyPath='yes'/>");
    adm_template_tab_out(16, 40, 21);

    /* Traverse - TraverseSelection */

    adm_object_existent_registry_value(
        ent_registry_value,
        16, 47, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_registry_value_writing_component_0000000001 = ent_registry_value->rel_writing_component_head;

    if (rel_registry_value_writing_component_0000000001 != NULL) {

        ent_component_0000000001 = rel_registry_value_writing_component_0000000001->ent_component;

        traverse_not_found_0000000002 = FALSE;

        /* Unrelate */

        adm_kill_relation_registry_value_writing_component(
            ent_registry_value,
            rel_registry_value_writing_component_0000000001,
            16, 50, 33);

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_registry_value,
            ent_component_0000000001,
            16, 52, 33);
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* Traverse - TraverseSelection */

        adm_object_existent_registry_value(
            ent_registry_value,
            16, 56, 37);

        rel_registry_value_writing_registry_key_0000000003 = ent_registry_value->rel_writing_registry_key_head;

        if (rel_registry_value_writing_registry_key_0000000003 != NULL) {

            ent_registry_key_0000000003 = rel_registry_value_writing_registry_key_0000000003->ent_registry_key;

            /* Unrelate */

            adm_kill_relation_registry_value_writing_registry_key(
                ent_registry_value,
                rel_registry_value_writing_registry_key_0000000003,
                16, 59, 41);

            /* GenerateEvent */

            adm_send_event_registry_key_complete(
                ent_registry_value,
                ent_registry_key_0000000003,
                16, 61, 41);
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_registry_value_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */