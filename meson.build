project('gnome-device-mng-gui', 'c',
  version: '0.1.0',
  license: 'GPL-3.0-or-later',
  meson_version: '>=0.60',
  default_options: [
    'warning_level=3',
    'buildtype=debugoptimized',
    'c_std=c11'
  ]
)

cc = meson.get_compiler('c')
raylib_dep = dependency('raylib', required: true)
glib_dep = dependency('glib-2.0', required: true)
gio_dep = dependency('gio-2.0', required: true)

project_inc = include_directories('include')

subdir('src')
subdir('data')

install_subdir('assets', install_dir: get_option('datadir') / meson.project_name() / 'assets')
