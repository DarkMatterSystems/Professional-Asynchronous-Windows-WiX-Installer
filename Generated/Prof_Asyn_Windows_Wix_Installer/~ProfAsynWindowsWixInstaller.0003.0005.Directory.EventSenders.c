
#include "~ProfAsynWindowsWixInstaller.0000.0000.Header.h"


/* Directory Event Senders */

void adm_send_event_directory_generate(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_directory_typ * pool_target;
    adm_pool_target_directory_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_generate");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_directory_generate(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_directory(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_directory_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_directory_typ));

        pool_target->evente = ADM_EVENT_DIRECTORY_GENERATE;
        pool_target->ent_directory = ent_directory;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_directory) {

            if (adm_entity_system.ent_directory.home_pool_head == NULL) {

                adm_entity_system.ent_directory.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_directory.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_directory == ent_directory) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Directory",
                            ent_directory->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_directory.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_directory.away_pool_head == NULL) {

                adm_entity_system.ent_directory.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_directory.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_generate");
    #endif
}

void adm_send_event_directory_generate_component(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_directory_typ * pool_target;
    adm_pool_target_directory_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_generate_component");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_directory_generate_component(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_directory(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_directory_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_directory_typ));

        pool_target->evente = ADM_EVENT_DIRECTORY_GENERATE_COMPONENT;
        pool_target->ent_directory = ent_directory;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_directory) {

            if (adm_entity_system.ent_directory.home_pool_head == NULL) {

                adm_entity_system.ent_directory.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_directory.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_directory == ent_directory) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Directory",
                            ent_directory->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_directory.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_directory.away_pool_head == NULL) {

                adm_entity_system.ent_directory.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_directory.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_generate_component");
    #endif
}

void adm_send_event_directory_generate_directory(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_directory_typ * pool_target;
    adm_pool_target_directory_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_generate_directory");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_directory_generate_directory(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_directory(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_directory_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_directory_typ));

        pool_target->evente = ADM_EVENT_DIRECTORY_GENERATE_DIRECTORY;
        pool_target->ent_directory = ent_directory;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_directory) {

            if (adm_entity_system.ent_directory.home_pool_head == NULL) {

                adm_entity_system.ent_directory.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_directory.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_directory == ent_directory) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Directory",
                            ent_directory->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_directory.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_directory.away_pool_head == NULL) {

                adm_entity_system.ent_directory.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_directory.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_generate_directory");
    #endif
}

void adm_send_event_directory_done(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_directory_typ * pool_target;
    adm_pool_target_directory_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_done");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_directory_done(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_directory(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_directory_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_directory_typ));

        pool_target->evente = ADM_EVENT_DIRECTORY_DONE;
        pool_target->ent_directory = ent_directory;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_directory) {

            if (adm_entity_system.ent_directory.home_pool_head == NULL) {

                adm_entity_system.ent_directory.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_directory.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_directory == ent_directory) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Directory",
                            ent_directory->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_directory.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_directory.away_pool_head == NULL) {

                adm_entity_system.ent_directory.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_directory.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_done");
    #endif
}

void adm_send_event_directory_complete(
    void * source_object,
    adm_ent_directory_typ * ent_directory,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_directory_typ * pool_target;
    adm_pool_target_directory_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_complete");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_directory_complete(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_directory(
            ent_directory,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_directory_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_directory_typ));

        pool_target->evente = ADM_EVENT_DIRECTORY_COMPLETE;
        pool_target->ent_directory = ent_directory;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_directory) {

            if (adm_entity_system.ent_directory.home_pool_head == NULL) {

                adm_entity_system.ent_directory.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_directory.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_directory == ent_directory) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Directory",
                            ent_directory->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_directory.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_directory.away_pool_head == NULL) {

                adm_entity_system.ent_directory.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_directory.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_directory.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_directory_complete");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */