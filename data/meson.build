data_dir = get_option('datadir')
desktop_conf = configuration_data()
desktop_conf.set('EXEC', meson.project_name())
desktop_conf.set('APP_ID', 'org.gnome.DeviceMngGui')

configure_file(
  input: 'org.gnome.DeviceMngGui.desktop.in',
  output: 'org.gnome.DeviceMngGui.desktop',
  configuration: desktop_conf,
  install_dir: data_dir / 'applications'
)

install_data('icons/org.gnome.DeviceMngGui-symbolic.svg',
  install_dir: data_dir / 'icons/hicolor/symbolic/apps'
)
