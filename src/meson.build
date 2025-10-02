src_files = files([
  'main.c',
  'app.c',
  'window.c'
])

local_inc = include_directories('.')

executable('gnome-device-mng-gui',
  src_files,
  include_directories: [local_inc, project_inc],
  dependencies: [raylib_dep, glib_dep, gio_dep],
  install: true
)
