#include <string.h>
#include <X11/Xlib.h>

/**
 * based on:
 * https://www.x.org/releases/X11R7.6/doc/libX11/specs/libX11/libX11.html
 */

Display * XOpenDisplay(_Xconst char * n) {
  return NULL;
}

int XCloseDisplay(Display * d) {
  return 0;
}

int XQueryKeymap(Display * d, char k[32]) {
  memset((void *)k, 0, 32);
  return 0;
};
