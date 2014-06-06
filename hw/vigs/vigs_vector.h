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

#ifndef _QEMU_VIGS_VECTOR_H
#define _QEMU_VIGS_VECTOR_H

#include "vigs_types.h"

struct vigs_vector
{
    void *data;
    uint32_t size;
    uint32_t capacity;
};

void vigs_vector_init(struct vigs_vector *v,
                      uint32_t initial_capacity);

void vigs_vector_cleanup(struct vigs_vector *v);

uint32_t vigs_vector_size(struct vigs_vector *v);

uint32_t vigs_vector_capacity(struct vigs_vector *v);

void vigs_vector_resize(struct vigs_vector *v, uint32_t new_size);

/*
 * Returns pointer to appended data.
 */
void *vigs_vector_append(struct vigs_vector *v, uint32_t append_size);

void *vigs_vector_data(struct vigs_vector *v);

#endif