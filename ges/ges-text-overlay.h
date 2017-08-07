/* GStreamer Editing Services
 * Copyright (C) 2010 Brandon Lewis <brandon.lewis@collabora.co.uk>
 *               2010 Nokia Corporation
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
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef _GES_TEXT_OVERLAY
#define _GES_TEXT_OVERLAY

#include <glib-object.h>
#include <ges/ges-types.h>
#include <ges/ges-title-source.h>
#include <ges/ges-operation.h>

G_BEGIN_DECLS
#define GES_TYPE_TEXT_OVERLAY ges_text_overlay_get_type()
#define GES_TEXT_OVERLAY(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST ((obj), GES_TYPE_TEXT_OVERLAY, GESTextOverlay))
#define GES_TEXT_OVERLAY_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST ((klass), GES_TYPE_TEXT_OVERLAY, GESTextOverlayClass))
#define GES_IS_TEXT_OVERLAY(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GES_TYPE_TEXT_OVERLAY))
#define GES_IS_TEXT_OVERLAY_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE ((klass), GES_TYPE_TEXT_OVERLAY))
#define GES_TEXT_OVERLAY_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), GES_TYPE_TEXT_OVERLAY, GESTextOverlayClass))
typedef struct _GESTextOverlayPrivate GESTextOverlayPrivate;

/**
 * GESTextOverlay:
 */
struct _GESTextOverlay
{
  GESOperation parent;

  /*< private > */
  GESTextOverlayPrivate *priv;

  /* Padding for API extension */
  gpointer _ges_reserved[GES_PADDING];
};

struct _GESTextOverlayClass
{
  GESOperationClass parent_class;

  /*< private > */

  /* Padding for API extension */
  gpointer _ges_reserved[GES_PADDING];
};

GST_EXPORT
GType ges_text_overlay_get_type (void);

GST_EXPORT
void ges_text_overlay_set_text (GESTextOverlay * self,
    const gchar * text);
GST_EXPORT
void ges_text_overlay_set_font_desc (GESTextOverlay * self,
    const gchar * font_desc);

GST_EXPORT
void ges_text_overlay_set_halignment (GESTextOverlay * self,
    GESTextHAlign halign);

GST_EXPORT
void ges_text_overlay_set_valignment (GESTextOverlay * self,
    GESTextVAlign valign);
GST_EXPORT
void ges_text_overlay_set_color (GESTextOverlay * self,
    guint32 color);
GST_EXPORT
void ges_text_overlay_set_xpos (GESTextOverlay * self,
    gdouble position);
GST_EXPORT
void ges_text_overlay_set_ypos (GESTextOverlay * self,
    gdouble position);

GST_EXPORT
const gchar *ges_text_overlay_get_text (GESTextOverlay * self);
GST_EXPORT
const char *ges_text_overlay_get_font_desc (GESTextOverlay * self);
GST_EXPORT
GESTextHAlign ges_text_overlay_get_halignment (GESTextOverlay *
    self);
GST_EXPORT
GESTextVAlign ges_text_overlay_get_valignment (GESTextOverlay *
    self);
GST_EXPORT
const guint32 ges_text_overlay_get_color (GESTextOverlay * self);
GST_EXPORT
const gdouble ges_text_overlay_get_xpos (GESTextOverlay * self);
GST_EXPORT
const gdouble ges_text_overlay_get_ypos (GESTextOverlay * self);

GST_EXPORT
GESTextOverlay *ges_text_overlay_new (void);

G_END_DECLS
#endif /* _GES_TEXT_OVERLAY */
