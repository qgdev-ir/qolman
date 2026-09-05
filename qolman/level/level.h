#ifndef _qolman_level_level_h_
#define _qolman_level_level_h_

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Public implementation of log level
 */
struct qolman_level {
	int importance;
	char *label;
};

/*
 * Pointer to actual level
 */
typedef const struct qolman_level *qolman_level_t;

/*
 * Gets qolman default level by its importance
 *
 * Default levels:
 * -2:	trace
 * -1:	debug
 * 0:	info
 * 1:	warning
 * 2:	error
 */
qolman_level_t qolman_level_get(int importance);

#ifdef __cplusplus
}
#endif

#endif

