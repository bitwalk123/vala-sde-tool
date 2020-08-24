dependencies = [
    dependency('glib-2.0'),
    dependency('gobject-2.0'),
    dependency('gtk+-3.0'),
    meson.get_compiler('c').find_library('m', required: false),
]

sources = files('sde-tool.vala', 'dialogs.vala')
if meson.is_cross_build()
    winmod = import('windows')
    sources += winmod.compile_resources('tool.rc')
endif

executable(
  'sde-tool',
  sources,
  dependencies : dependencies,
  gui_app : true,
  install : true
)

