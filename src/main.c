#include "app.h"

int
main(int argc, char *argv[])
{
  g_autoptr(GApplication) app = gdm_app_new();
  return g_application_run(app, argc, argv);
}
