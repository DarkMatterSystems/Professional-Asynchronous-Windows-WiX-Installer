
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* File State Actions */

void adm_state_action_file_generating(
    adm_ent_file_typ * ent_file)
{
    /* Entity Objects */
    adm_ent_file_shortcut_typ * ent_file_shortcut_0000000001;

    /* Relationship Relations */
    adm_rel_file_includes_file_shortcut_typ * rel_file_includes_file_shortcut_0000000001;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_file_generating");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_newline();
    adm_write_str("<File");
    adm_template_tab_in(8, 31, 21);
    adm_write_newline();
    adm_write_str("Id='");
    adm_write_str(ent_file->atb_id);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("Name='");
    adm_write_str(ent_file->atb_name);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("DiskId='1'");
    adm_write_newline();
    adm_write_str("Source='");
    adm_write_str(ent_file->atb_source);
    adm_write_str("'");
    adm_write_newline();
    adm_write_str("KeyPath='yes'");

    /* Traverse - TraverseSelection */

    adm_object_existent_file(
        ent_file,
        8, 42, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_file_includes_file_shortcut_0000000001 = ent_file->rel_includes_file_shortcut_head;

    while (rel_file_includes_file_shortcut_0000000001 != NULL) {

        ent_file_shortcut_0000000001 = rel_file_includes_file_shortcut_0000000001->ent_file_shortcut;

        traverse_not_found_0000000002 = FALSE;

        /* SelectionHead */

        adm_object_existent_file(
            ent_file,
            8, 42, 29);

        if (rel_file_includes_file_shortcut_0000000001 == ent_file->rel_includes_file_shortcut_head) {

            /* Template */

            adm_write_str(">");
        }

        rel_file_includes_file_shortcut_0000000001 = rel_file_includes_file_shortcut_0000000001->next;
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* Template */

        adm_write_str("/>");
    }

    /* GenerateEvent */

    adm_send_event_file_generate_file_shortcut(
        ent_file,
        ent_file,
        8, 51, 25);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_file_generating");
    #endif
}

void adm_state_action_file_generating_file_shortcut(
    adm_ent_file_typ * ent_file)
{
    /* Process Data */
    adm_bln_flag_typ pdt_object_not_found;

    /* Entity Objects */
    adm_ent_file_shortcut_typ * ent_file_shortcut_0000000001;

    /* Relationship Relations */
    adm_rel_file_includes_file_shortcut_typ * rel_file_includes_file_shortcut_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_file_generating_file_shortcut");
    #endif

    /* Assignment - Set */

    pdt_object_not_found = TRUE;

    /* Traverse - TraverseSelection */

    adm_object_existent_file(
        ent_file,
        8, 71, 29);

    rel_file_includes_file_shortcut_0000000001 = ent_file->rel_includes_file_shortcut_head;

    while (rel_file_includes_file_shortcut_0000000001 != NULL) {

        ent_file_shortcut_0000000001 = rel_file_includes_file_shortcut_0000000001->ent_file_shortcut;

        /* CaseSelection */

        if (
            (
                (
                    pdt_object_not_found
                )
                &&
                !(
                    ent_file_shortcut_0000000001->atb_processed
                )
            )) {

            /* Assignment - Set */

            pdt_object_not_found = FALSE;

            /* Assignment - Set */

            ent_file_shortcut_0000000001->atb_processed = TRUE;

            /* Relate */

            adm_link_relation_file_shortcut_writing_file(
                ent_file_shortcut_0000000001,
                ent_file,
                8, 86, 45);

            /* GenerateEvent */

            adm_send_event_file_shortcut_generate(
                ent_file,
                ent_file_shortcut_0000000001,
                8, 88, 45);
        }

        rel_file_includes_file_shortcut_0000000001 = rel_file_includes_file_shortcut_0000000001->next;
    }

    /* CaseSelection */

    if (
        (
            (
                pdt_object_not_found
            )
        )) {

        /* GenerateEvent */

        adm_send_event_file_complete(
            ent_file,
            ent_file,
            8, 96, 37);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_file_generating_file_shortcut");
    #endif
}

void adm_state_action_file_idle(
    adm_ent_file_typ * ent_file)
{
    /* Entity Objects */
    adm_ent_file_shortcut_typ * ent_file_shortcut_0000000001;
    adm_ent_component_typ * ent_component_0000000003;

    /* Relationship Relations */
    adm_rel_file_includes_file_shortcut_typ * rel_file_includes_file_shortcut_0000000001;
    adm_rel_file_writing_component_typ * rel_file_writing_component_0000000003;

    /* Traverse Null Selection Flags */
    adm_base_boolean_typ traverse_not_found_0000000002;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_file_idle");
    #endif

    /* Traverse - TraverseSelection */

    adm_object_existent_file(
        ent_file,
        8, 111, 29);

    traverse_not_found_0000000002 = TRUE;

    rel_file_includes_file_shortcut_0000000001 = ent_file->rel_includes_file_shortcut_head;

    while (rel_file_includes_file_shortcut_0000000001 != NULL) {

        ent_file_shortcut_0000000001 = rel_file_includes_file_shortcut_0000000001->ent_file_shortcut;

        traverse_not_found_0000000002 = FALSE;

        /* SelectionHead */

        adm_object_existent_file(
            ent_file,
            8, 111, 29);

        if (rel_file_includes_file_shortcut_0000000001 == ent_file->rel_includes_file_shortcut_head) {

            /* Template */

            adm_write_newline();
            adm_template_tab_out(8, 114, 33);
            adm_write_newline();
            adm_write_str("</File>");
        }

        rel_file_includes_file_shortcut_0000000001 = rel_file_includes_file_shortcut_0000000001->next;
    }

    /* Traverse - Null Traverse Selection */

    if (traverse_not_found_0000000002) {

        /* Template */

        adm_template_tab_out(8, 119, 29);
    }

    /* Traverse - TraverseSelection */

    adm_object_existent_file(
        ent_file,
        8, 123, 29);

    rel_file_writing_component_0000000003 = ent_file->rel_writing_component_head;

    if (rel_file_writing_component_0000000003 != NULL) {

        ent_component_0000000003 = rel_file_writing_component_0000000003->ent_component;

        /* Unrelate */

        adm_kill_relation_file_writing_component(
            ent_file,
            rel_file_writing_component_0000000003,
            8, 126, 33);

        /* GenerateEvent */

        adm_send_event_component_complete(
            ent_file,
            ent_component_0000000003,
            8, 128, 33);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_file_idle");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */