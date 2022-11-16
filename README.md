### My Build of dmenu:

### Applied Patches
- [border](https://tools.suckless.org/dmenu/patches/border): This patch adds a border around the dmenu window. It is intended to be used with the center or xyw patches, to make the menu stand out from similarly coloured windows.

- [caseinsensitive](https://tools.suckless.org/dmenu/patches/case-insensitive): This patch changes case-insensitive item matching to default behaviour. Adds an -s option to enable case-sensitive matching.

- [center](https://tools.suckless.org/dmenu/patches/center): This patch centers dmenu in the middle of the screen.

### Requirements/Dependencies
In order to build dmenu you need the Xlib header files.

- libxcb
- Xlib-libxcb
- xcb-res
- libxinerama
- libx11
- Comic Sans Ms font (If you want to use another font edit in the configuration)
- [libxft-bgra](https://aur.archlinux.org/packages/libxft-bgra) (for colored emoji support)

### Configuration and installation
Edit config.mk to match your local setup (dmenu is installed into the /usr/local namespace by default).

The configuration of dmenu is done copying [config.def.h](config.def.h) to `config.h`, editing it and then (re)compiling the source code.
