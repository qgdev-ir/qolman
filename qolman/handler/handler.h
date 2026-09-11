#ifndef _qolman_handler_handler_h_
#define _qolman_handler_handler_h_

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Function to handle a log
 */
typedef void (*qolman_handler_function_handle)(qolman_handler_t handler, char *log);

#ifdef __cplusplus
}
#endif
#endif

