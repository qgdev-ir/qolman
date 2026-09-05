#ifndef _qolman_record_record_h_
#define _qolman_record_record_h_


#ifdef __cplusplus
extern "C" {
#endif

/*
 * Pointer to the actuall record
 */
typedef struct qolman_record *qolman_record_t;

/*
 * Create a qolman record
 * If time is nullptr: current time is used instead
 * description is optional and can be nullptr
 */
qolman_result_t qolman_record_create(qolman_record_t *record, time_t time, qolman_level_t level, char *label, char *description);

/*
 * Destroys the record
 */
qolman_result_t qolman_record_destroy(qolman_record_t r);

/*
 * Returns time of the record
 */
time_t qolman_record_time(qolman_record_t r);

#ifdef __cplusplus
}
#endif
#endif

