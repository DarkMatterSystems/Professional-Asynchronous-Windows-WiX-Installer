
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Registry Key State Actions */

void adm_state_action_registry_key_generating(
    adm_ent_registry_key_typ * ent_registry_key)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_registry_key_generating");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<RegistryKey");
    adm_template_tab_in(15, 28, 21);
    adm_write_newline();
    adm_write_str("Root='");
    adm_write_str(ent_registry_key->atb_root);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Key='");
    adm_write_str(ent_registry_key->atb_key);
    adm_write_str("'>");

    /* GenerateEvent */

    adm_send_event_registry_key_generate(
        ent_registry_key,
        ent_registry_key,
        15, 35, 25);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_registry_key_generating");
    #endif
}

void adm_state_action_registry_key_generating_registry_value(
    adm_ent_registry_key_typ * ent_registry_key)
{
    /* Entity Objects */
    adm_ent_registry_value_typ * ent_registry_value_0000000001;

    /* Relationship Relations */
    adm_rel_registry_key_includes_registry_value_typ * rel_registry_key_includes_registry_value_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_registry_key_generating_registry_value");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_registry_key(
        ent_registry_key,
        15, 48, 29);

    rel_registry_key_includes_registry_value_0000000001 = ent_registry_key->rel_includes_registry_value_head;

    ent_registry_value_0000000001 = rel_registry_key_includes_registry_value_0000000001->ent_registry_value;

    /* Relate */

    adm_link_relation_registry_value_writing_registry_key(
        ent_registry_value_0000000001,
        ent_registry_key,
        15, 51, 33);

    /* GenerateEvent */

    adm_send_event_registry_value_generate(
        ent_registry_key,
        ent_registry_value_0000000001,
        15, 53, 33);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_registry_key_generating_registry_value");
    #endif
}

void adm_state_action_registry_key_idle(
    adm_ent_registry_key_typ * ent_registry_key)
{
    /* Entity Objects */
    adm_ent_component_typ * ent_component_0000000001;

    /* Relationship Relations */
    adm_rel_registry_key_writing_component_typ * rel_registry_key_writing_component_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_registry_key_idle");
    #endif

    /* Template */

    adm_write_newline();
    adm_template_tab_out(15, 64, 21);
    adm_write_newline();
    adm_write_str("</RegistryKey>");

    /* Traverse - TraverseSelection */

    adm_object_existent_registry_key(
        ent_registry_key,
        15, 70, 29);

    rel_registry_key_writing_component_0000000001 = ent_registry_key->rel_writing_component_head;

    if (rel_registry_key_writing_component_0000000001 != NULL) {

        ent_component_0000000001 = rel_registry_key_writing_component_0000000001->ent_component;

        /* Unrelate */

        adm_kill_relation_registry_key_writing_component(
            ent_registry_key,
            rel_registry_key_writing_component_0000000001,
            15, 73, 33);

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_registry_key,
            ent_component_0000000001,
            15, 75, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_registry_key_idle");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */