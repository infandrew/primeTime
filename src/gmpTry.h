#include <gmpxx.h>

namespace gmp_prime {
	/*
	Test for mersen prime number to check if it is prime
	*/
	bool Lucas_Lehmer_Test_GMP(mpz_class, int);

	/*
	Create mersen number and launch lucas test
	*/
	void checkMersen(int);
}
