#include <qolman/qolman.internal.h>

struct data {
	FILE *fp;
	bool close;
};

static void _qolman_handler_filep_handle(qolman_handler_t h, char *log) {
	struct data *d = (struct data *) h->data;
	fprintf(d->fp, "%s", log);
}

static void _qolman_handler_filep_destroy(qolman_handler_t h) {
	struct data *d = (struct data *) h->data;
	if (d->close) fclose(d->fp);
}

