/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright 2024 Tomeu Vizoso <tomeu@tomeuvizoso.net> */

#ifndef __ROCKET_DRV_H__
#define __ROCKET_DRV_H__

#include <drm/gpu_scheduler.h>

#include "rocket_device.h"

struct rocket_file_priv {
	struct rocket_device *rdev;

	struct drm_sched_entity sched_entity;
};

#endif
