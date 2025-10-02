#pragma once

#include <gio/gio.h>

#define GDM_TYPE_APP (gdm_app_get_type())
G_DECLARE_FINAL_TYPE(GdmApp, gdm_app, GDM, APP, GApplication)

GApplication *gdm_app_new(void);
