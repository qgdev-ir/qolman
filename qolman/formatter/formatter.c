#include <qolman/qolman.internal.h>

struct buffer {
	char *b;
	size_t s;
	size_t l;
};

static inline void _buffer_write(struct buffer *b, const char *fmt, ...) {
	va_list ap, ap2;
	va_start(ap, fmt);
	va_copy(ap2, ap);

	size_t len = vsnprintf(NULL, 0, fmt, ap2) + 1;
	va_end(ap2);

	if (len > (b->s - b->l)) {
		b->s += len;
		b->b = realloc(b->b, b->s);
	}

	int r = vsnprintf(b->b + b->l, len, fmt, ap);
	b->l += len - 1;	// -1 so next write will write over the null terminator
	va_end(ap);
}

