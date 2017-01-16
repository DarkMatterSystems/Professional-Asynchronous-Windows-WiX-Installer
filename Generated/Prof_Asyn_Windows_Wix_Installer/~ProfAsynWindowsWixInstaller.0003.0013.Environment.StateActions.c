
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Environment State Actions */

void adm_state_action_environment_generating(
    adm_ent_environment_typ * ent_environment)
{
    /* Entity Objects */
    adm_ent_component_typ * ent_component_0000000001;

    /* Relationship Relations */
    adm_rel_environment_writing_component_typ * rel_environment_writing_component_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_environment_generating");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<Environment");
    adm_template_tab_in(14, 19, 21);
    adm_write_newline();
    adm_write_str("Id='");
    adm_write_str(ent_environment->atb_id);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Action='set'");
    adm_write_newline();
    adm_write_str("Part='all'");
    adm_write_newline();
    adm_write_str("Name='");
    adm_write_str(ent_environment->atb_name);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Permanent='no'");
    adm_write_newline();
    adm_write_str("System='yes'");
    adm_write_newline();
    adm_write_str("Value='");
    adm_write_str(ent_environment->atb_value);
    adm_write_str("'/>");
    adm_template_tab_out(14, 19, 21);

    /* Traverse - TraverseSelection */

    adm_object_existent_environment(
        ent_environment,
        14, 33, 29);

    rel_environment_writing_component_0000000001 = ent_environment->rel_writing_component_head;

    if (rel_environment_writing_component_0000000001 != NULL) {

        ent_component_0000000001 = rel_environment_writing_component_0000000001->ent_component;

        /* Unrelate */

        adm_kill_relation_environment_writing_component(
            ent_environment,
            rel_environment_writing_component_0000000001,
            14, 36, 33);

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_environment,
            ent_component_0000000001,
            14, 38, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_environment_generating");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */