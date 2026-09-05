#include <test/test.h>

extern bool test_qolman_level();
extern bool test_qolman_record();

bool test_qolman() {
	bool success = 1;
	success &= test_qolman_level();
	success &= test_qolman_record();
	return success;
}

