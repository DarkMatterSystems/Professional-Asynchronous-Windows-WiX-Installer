
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Feature Event Senders */

void adm_send_event_feature_generate(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_feature_typ * pool_target;
    adm_pool_target_feature_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_generate");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_feature_generate(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_feature(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_feature_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_feature_typ));

        pool_target->evente = ADM_EVENT_FEATURE_GENERATE;
        pool_target->ent_feature = ent_feature;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_feature) {

            if (adm_entity_system.ent_feature.home_pool_head == NULL) {

                adm_entity_system.ent_feature.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_feature.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_feature == ent_feature) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Feature",
                            ent_feature->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_feature.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_feature.away_pool_head == NULL) {

                adm_entity_system.ent_feature.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_feature.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_generate");
    #endif
}

void adm_send_event_feature_generate_feature(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_feature_typ * pool_target;
    adm_pool_target_feature_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_generate_feature");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_feature_generate_feature(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_feature(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_feature_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_feature_typ));

        pool_target->evente = ADM_EVENT_FEATURE_GENERATE_FEATURE;
        pool_target->ent_feature = ent_feature;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_feature) {

            if (adm_entity_system.ent_feature.home_pool_head == NULL) {

                adm_entity_system.ent_feature.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_feature.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_feature == ent_feature) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Feature",
                            ent_feature->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_feature.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_feature.away_pool_head == NULL) {

                adm_entity_system.ent_feature.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_feature.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_generate_feature");
    #endif
}

void adm_send_event_feature_generate_component(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_feature_typ * pool_target;
    adm_pool_target_feature_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_generate_component");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_feature_generate_component(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_feature(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_feature_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_feature_typ));

        pool_target->evente = ADM_EVENT_FEATURE_GENERATE_COMPONENT;
        pool_target->ent_feature = ent_feature;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_feature) {

            if (adm_entity_system.ent_feature.home_pool_head == NULL) {

                adm_entity_system.ent_feature.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_feature.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_feature == ent_feature) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Feature",
                            ent_feature->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_feature.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_feature.away_pool_head == NULL) {

                adm_entity_system.ent_feature.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_feature.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_generate_component");
    #endif
}

void adm_send_event_feature_done(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_feature_typ * pool_target;
    adm_pool_target_feature_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_done");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_feature_done(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_feature(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_feature_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_feature_typ));

        pool_target->evente = ADM_EVENT_FEATURE_DONE;
        pool_target->ent_feature = ent_feature;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_feature) {

            if (adm_entity_system.ent_feature.home_pool_head == NULL) {

                adm_entity_system.ent_feature.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_feature.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_feature == ent_feature) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Feature",
                            ent_feature->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_feature.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_feature.away_pool_head == NULL) {

                adm_entity_system.ent_feature.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_feature.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_done");
    #endif
}

void adm_send_event_feature_complete(
    void * source_object,
    adm_ent_feature_typ * ent_feature,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_feature_typ * pool_target;
    adm_pool_target_feature_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_complete");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_feature_complete(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_feature(
            ent_feature,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_feature_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_feature_typ));

        pool_target->evente = ADM_EVENT_FEATURE_COMPLETE;
        pool_target->ent_feature = ent_feature;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_feature) {

            if (adm_entity_system.ent_feature.home_pool_head == NULL) {

                adm_entity_system.ent_feature.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_feature.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_feature == ent_feature) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Feature",
                            ent_feature->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_feature.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_feature.away_pool_head == NULL) {

                adm_entity_system.ent_feature.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_feature.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_feature.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_feature_complete");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */