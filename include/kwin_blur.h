/* Generated by wayland-scanner 1.19.0 */

#ifndef BLUR_CLIENT_PROTOCOL_H
#define BLUR_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

struct org_kde_kwin_blur;
struct org_kde_kwin_blur_manager;
struct wl_region;
struct wl_surface;

#ifndef ORG_KDE_KWIN_BLUR_MANAGER_INTERFACE
#define ORG_KDE_KWIN_BLUR_MANAGER_INTERFACE
/**
 * @page page_iface_org_kde_kwin_blur_manager org_kde_kwin_blur_manager
 * @section page_iface_org_kde_kwin_blur_manager_api API
 * See @ref iface_org_kde_kwin_blur_manager.
 */
/**
 * @defgroup iface_org_kde_kwin_blur_manager The org_kde_kwin_blur_manager interface
 */
extern const struct wl_interface org_kde_kwin_blur_manager_interface;
#endif
#ifndef ORG_KDE_KWIN_BLUR_INTERFACE
#define ORG_KDE_KWIN_BLUR_INTERFACE
/**
 * @page page_iface_org_kde_kwin_blur org_kde_kwin_blur
 * @section page_iface_org_kde_kwin_blur_api API
 * See @ref iface_org_kde_kwin_blur.
 */
/**
 * @defgroup iface_org_kde_kwin_blur The org_kde_kwin_blur interface
 */
extern const struct wl_interface org_kde_kwin_blur_interface;
#endif

#define ORG_KDE_KWIN_BLUR_MANAGER_CREATE 0
#define ORG_KDE_KWIN_BLUR_MANAGER_UNSET 1


/**
 * @ingroup iface_org_kde_kwin_blur_manager
 */
#define ORG_KDE_KWIN_BLUR_MANAGER_CREATE_SINCE_VERSION 1
/**
 * @ingroup iface_org_kde_kwin_blur_manager
 */
#define ORG_KDE_KWIN_BLUR_MANAGER_UNSET_SINCE_VERSION 1

/** @ingroup iface_org_kde_kwin_blur_manager */
static inline void
org_kde_kwin_blur_manager_set_user_data(struct org_kde_kwin_blur_manager *org_kde_kwin_blur_manager, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) org_kde_kwin_blur_manager, user_data);
}

/** @ingroup iface_org_kde_kwin_blur_manager */
static inline void *
org_kde_kwin_blur_manager_get_user_data(struct org_kde_kwin_blur_manager *org_kde_kwin_blur_manager)
{
	return wl_proxy_get_user_data((struct wl_proxy *) org_kde_kwin_blur_manager);
}

static inline uint32_t
org_kde_kwin_blur_manager_get_version(struct org_kde_kwin_blur_manager *org_kde_kwin_blur_manager)
{
	return wl_proxy_get_version((struct wl_proxy *) org_kde_kwin_blur_manager);
}

/** @ingroup iface_org_kde_kwin_blur_manager */
static inline void
org_kde_kwin_blur_manager_destroy(struct org_kde_kwin_blur_manager *org_kde_kwin_blur_manager)
{
	wl_proxy_destroy((struct wl_proxy *) org_kde_kwin_blur_manager);
}

/**
 * @ingroup iface_org_kde_kwin_blur_manager
 */
static inline struct org_kde_kwin_blur *
org_kde_kwin_blur_manager_create(struct org_kde_kwin_blur_manager *org_kde_kwin_blur_manager, struct wl_surface *surface)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) org_kde_kwin_blur_manager,
			 ORG_KDE_KWIN_BLUR_MANAGER_CREATE, &org_kde_kwin_blur_interface, NULL, surface);

	return (struct org_kde_kwin_blur *) id;
}

/**
 * @ingroup iface_org_kde_kwin_blur_manager
 */
static inline void
org_kde_kwin_blur_manager_unset(struct org_kde_kwin_blur_manager *org_kde_kwin_blur_manager, struct wl_surface *surface)
{
	wl_proxy_marshal((struct wl_proxy *) org_kde_kwin_blur_manager,
			 ORG_KDE_KWIN_BLUR_MANAGER_UNSET, surface);
}

#define ORG_KDE_KWIN_BLUR_COMMIT 0
#define ORG_KDE_KWIN_BLUR_SET_REGION 1
#define ORG_KDE_KWIN_BLUR_RELEASE 2


/**
 * @ingroup iface_org_kde_kwin_blur
 */
#define ORG_KDE_KWIN_BLUR_COMMIT_SINCE_VERSION 1
/**
 * @ingroup iface_org_kde_kwin_blur
 */
#define ORG_KDE_KWIN_BLUR_SET_REGION_SINCE_VERSION 1
/**
 * @ingroup iface_org_kde_kwin_blur
 */
#define ORG_KDE_KWIN_BLUR_RELEASE_SINCE_VERSION 1

/** @ingroup iface_org_kde_kwin_blur */
static inline void
org_kde_kwin_blur_set_user_data(struct org_kde_kwin_blur *org_kde_kwin_blur, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) org_kde_kwin_blur, user_data);
}

/** @ingroup iface_org_kde_kwin_blur */
static inline void *
org_kde_kwin_blur_get_user_data(struct org_kde_kwin_blur *org_kde_kwin_blur)
{
	return wl_proxy_get_user_data((struct wl_proxy *) org_kde_kwin_blur);
}

static inline uint32_t
org_kde_kwin_blur_get_version(struct org_kde_kwin_blur *org_kde_kwin_blur)
{
	return wl_proxy_get_version((struct wl_proxy *) org_kde_kwin_blur);
}

/** @ingroup iface_org_kde_kwin_blur */
static inline void
org_kde_kwin_blur_destroy(struct org_kde_kwin_blur *org_kde_kwin_blur)
{
	wl_proxy_destroy((struct wl_proxy *) org_kde_kwin_blur);
}

/**
 * @ingroup iface_org_kde_kwin_blur
 */
static inline void
org_kde_kwin_blur_commit(struct org_kde_kwin_blur *org_kde_kwin_blur)
{
	wl_proxy_marshal((struct wl_proxy *) org_kde_kwin_blur,
			 ORG_KDE_KWIN_BLUR_COMMIT);
}

/**
 * @ingroup iface_org_kde_kwin_blur
 */
static inline void
org_kde_kwin_blur_set_region(struct org_kde_kwin_blur *org_kde_kwin_blur, struct wl_region *region)
{
	wl_proxy_marshal((struct wl_proxy *) org_kde_kwin_blur,
			 ORG_KDE_KWIN_BLUR_SET_REGION, region);
}

/**
 * @ingroup iface_org_kde_kwin_blur
 */
static inline void
org_kde_kwin_blur_release(struct org_kde_kwin_blur *org_kde_kwin_blur)
{
	wl_proxy_marshal((struct wl_proxy *) org_kde_kwin_blur,
			 ORG_KDE_KWIN_BLUR_RELEASE);

	wl_proxy_destroy((struct wl_proxy *) org_kde_kwin_blur);
}

#ifdef  __cplusplus
}
#endif

#endif
