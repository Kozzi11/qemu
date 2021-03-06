/*
 * yagl
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

#include "yagl_egl_surface_attribs.h"

void yagl_egl_pbuffer_attribs_init(struct yagl_egl_pbuffer_attribs *attribs)
{
    attribs->largest = EGL_FALSE;
    attribs->tex_format = EGL_NO_TEXTURE;
    attribs->tex_target = EGL_NO_TEXTURE;
    attribs->tex_mipmap = EGL_FALSE;
}

void yagl_egl_pixmap_attribs_init(struct yagl_egl_pixmap_attribs *attribs)
{
}

void yagl_egl_window_attribs_init(struct yagl_egl_window_attribs *attribs)
{
}
