/*
 * vigs
 *
 * Copyright (c) 2000 - 2013 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact:
 * Stanislav Vorobiov <s.vorobiov@samsung.com>
 * Jinhyung Jo <jinhyung.jo@samsung.com>
 * YeongKyoon Lee <yeongkyoon.lee@samsung.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * Contributors:
 * - S-Core Co., Ltd
 *
 */

#include "vigs_surface.h"
#include "hw/winsys.h"

void vigs_surface_init(struct vigs_surface *sfc,
                       struct winsys_surface *ws_sfc,
                       struct vigs_backend *backend,
                       uint32_t stride,
                       vigsp_surface_format format,
                       vigsp_surface_id id)
{
    ws_sfc->acquire(ws_sfc);
    sfc->ws_sfc = ws_sfc;
    sfc->backend = backend;
    sfc->ptr = NULL;
    sfc->stride = stride;
    sfc->format = format;
    sfc->id = id;
}

void vigs_surface_cleanup(struct vigs_surface *sfc)
{
    sfc->ws_sfc->release(sfc->ws_sfc);
}

void vigs_surface_set_scanout(struct vigs_surface *sfc, uint8_t *ptr)
{
    sfc->ptr = ptr;
}
