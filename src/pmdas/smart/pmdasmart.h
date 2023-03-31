/*
 * Disk S.M.A.R.T Data PMDA
 *
 * Copyright (c) 2018-2023 Red Hat.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef PMDASMART_H
#define PMDASMART_H

#include "smart_stats.h"

enum {
	CLUSTER_DEVICE_INFO = 0,					/* 0 - General disk information */
	CLUSTER_RAW_READ_ERROR_RATE = 1,
	CLUSTER_THROUGHPUT_PERFORMANCE = 2,
	CLUSTER_SPIN_UP_TIME = 3,
	CLUSTER_START_STOP_COUNT = 4,
	CLUSTER_REALLOCATED_SECTOR_COUNT = 5,
	CLUSTER_SEEK_ERROR_COUNT = 7,
	CLUSTER_SEEK_TIME_PERFORMANCE = 8,
	CLUSTER_POWER_ON_HOURS = 9,
	CLUSTER_SPIN_RETRY_COUNT = 10,
	CLUSTER_CALIBRATION_RETRY_COUNT = 11,
	CLUSTER_POWER_CYCLE_COUNT = 12,
	CLUSTER_READ_SOFT_ERROR_RATE = 13,
	CLUSTER_CURRENT_HELIUM_LEVEL = 22,
	CLUSTER_ERASE_FAIL_COUNT_CHIP = 176,
	CLUSTER_WEAR_LEVELING_COUNT = 177,
	CLUSTER_USED_RESERVED_BLOCK_COUNT_TOTAL = 179,
	CLUSTER_UNUSED_RESERVED_BLOCK_COUNT_TOTAL = 180,
	CLUSTER_PROGRAM_FAIL_COUNT_TOTAL = 181,
	CLUSTER_ERASE_FAIL_COUNT_TOTAL =182,
	CLUSTER_RUNTIME_BAD_BLOCK = 183,
	CLUSTER_END_TO_END_ERROR = 184,
	CLUSTER_REPORTED_UNCORRECT = 187,
	CLUSTER_COMMAND_TIMEOUT = 188,
	CLUSTER_HIGH_FLY_WRITES = 189,
	CLUSTER_AIRFLOW_TEMP_CELSIUS = 190,
	CLUSTER_G_SENSE_ERROR_RATE = 191,
	CLUSTER_POWER_OFF_RETRACT_COUNT = 192,
	CLUSTER_LOAD_CYCLE_COUNT = 193,
	CLUSTER_TEMPERATURE_CELSIUS = 194,
	CLUSTER_HARDWARE_ECC_RECOVERED = 195,
	CLUSTER_REALLOCATED_EVENT_COUNT = 196,
	CLUSTER_CURRENT_PENDING_SECTOR = 197,
	CLUSTER_OFFLINE_UNCORRECTABLE = 198,
	CLUSTER_UDMA_CRC_ERROR_COUNT = 199,
	CLUSTER_MULTI_ZONE_ERROR_RATE = 200,
	CLUSTER_SOFT_READ_ERROR_RATE = 201,
	CLUSTER_DISK_SHIFT = 220,
	CLUSTER_LOADED_HOURS = 222,
	CLUSTER_LOAD_RETRY_COUNT = 223,
	CLUSTER_LOAD_FRICTION = 224,
	CLUSTER_LOAD_CYCLE = 225,
	CLUSTER_LOAD_IN_TIME = 226,
	CLUSTER_HEAD_FLYING_HOURS = 240,
	CLUSTER_TOTAL_LBAS_WRITTEN = 241,
	CLUSTER_TOTAL_LBAS_READ = 242,
	CLUSTER_READ_ERROR_RETRY_RATE = 250,
	CLUSTER_FREE_FALL_SENSOR = 254,
	CLUSTER_NVME_ATTRIBUTES = 255,
	NUM_CLUSTERS
};

enum {
	DISK_INDOM = 0,						/* 0 - Detected disk names      */
	NUM_INDOMS
};

struct block_dev {
        int 			is_nvme;
	struct device_info	device_info;
	struct smart_data	smart_data;
	struct nvme_smart_data	nvme_smart_data;
};

extern pmdaMetric metrictable[];
extern int metrictable_size();

#endif /* PMDASMART_H */
