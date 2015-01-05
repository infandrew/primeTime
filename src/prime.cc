#include "gmpTry.h"
#include "common.h"

int main() {
	for (int i = 10; i <= 3279; i++) {
		gmp_prime::checkMersen(i);
	}
	printTime("finished");
	return 0;
}
