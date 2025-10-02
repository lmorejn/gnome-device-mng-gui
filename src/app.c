#include "app.h"
#include "window.h"

struct _GdmApp {
  GApplication parent_instance;
};

G_DEFINE_TYPE(GdmApp, gdm_app, G_TYPE_APPLICATION)

static void
gdm_app_activate(GApplication *application)
{
  gdm_window_run();
}

static void
gdm_app_class_init(GdmAppClass *klass)
{
  GApplicationClass *app_class = G_APPLICATION_CLASS(klass);
  app_class->activate = gdm_app_activate;
}

static void
gdm_app_init(GdmApp *self)
{
  (void)self;
}

GApplication *
gdm_app_new(void)
{
  return g_object_new(GDM_TYPE_APP,
                      "application-id", "org.gnome.DeviceMngGui",
                      "flags", G_APPLICATION_FLAGS_NONE,
                      NULL);
}
