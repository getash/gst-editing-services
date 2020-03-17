/* GStreamer Editing Services
 *
 * Copyright (C) 2012 Thibault Saunier <thibault.saunier@collabora.com>
 * Copyright (C) 2012 Volodymyr Rudyi <vladimir.rudoy@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */


#pragma once

#include <glib-object.h>
#include <ges/ges-types.h>
#include <ges/ges-asset.h>

G_BEGIN_DECLS

#define GES_TYPE_CLIP_ASSET (ges_clip_asset_get_type ())
GES_DECLARE_TYPE(ClipAsset, clip_asset, CLIP_ASSET);

struct _GESClipAsset
{
  GESAsset parent;

  /* <private> */
  GESClipAssetPrivate *priv;

  gpointer _ges_reserved[GES_PADDING];
};

struct _GESClipAssetClass
{
  GESAssetClass parent;

  gpointer _ges_reserved[GES_PADDING];
};

GES_API
void ges_clip_asset_set_supported_formats         (GESClipAsset *self,
                                                              GESTrackType supportedformats);
GES_API
GESTrackType ges_clip_asset_get_supported_formats (GESClipAsset *self);

G_END_DECLS
