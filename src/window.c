#include "window.h"

#include <raylib.h>

void
gdm_window_run(void)
{
  const int screen_width = 800;
  const int screen_height = 600;

  InitWindow(screen_width, screen_height, "GNOME Device Manager");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("GNOME Device Manager", 220, 200, 20, DARKGRAY);
    EndDrawing();
  }

  CloseWindow();
}
