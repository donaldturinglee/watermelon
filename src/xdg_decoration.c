#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface xdg_toplevel_interface;
extern const struct wl_interface zxdg_toplevel_decoration_v1_interface;

static const struct wl_interface *types[] = {
	NULL,
	&zxdg_toplevel_decoration_v1_interface,
	&xdg_toplevel_interface,
};

static const struct wl_message zxdg_decoration_manager_v1_requests[] = {
	{ "destroy", "", types + 0 },
	{ "get_toplevel_decoration", "no", types + 1 },
};

WL_PRIVATE const struct wl_interface zxdg_decoration_manager_v1_interface = {
	"zxdg_decoration_manager_v1", 1,
	2, zxdg_decoration_manager_v1_requests,
	0, NULL,
};

static const struct wl_message zxdg_toplevel_decoration_v1_requests[] = {
	{ "destroy", "", types + 0 },
	{ "set_mode", "u", types + 0 },
	{ "unset_mode", "", types + 0 },
};

static const struct wl_message zxdg_toplevel_decoration_v1_events[] = {
	{ "configure", "u", types + 0 },
};

WL_PRIVATE const struct wl_interface zxdg_toplevel_decoration_v1_interface = {
	"zxdg_toplevel_decoration_v1", 1,
	3, zxdg_toplevel_decoration_v1_requests,
	1, zxdg_toplevel_decoration_v1_events,
};

