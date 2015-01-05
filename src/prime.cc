#include "gmpTry.h"

int main() {
	for (int i = 10; i <= 1000; i++) {
		gmp_prime::checkMersen(i);
	}
	return 0;
}
