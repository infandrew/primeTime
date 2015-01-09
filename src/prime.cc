#include "gmpTry.h"
#include "common.h"
#include <bitset>

using namespace std;

int main() {

/*	for (int i = 10; i <= 3279; i++) {
		gmp_prime::checkMersen(i);
	}*/
	//freopen("fullout.txt", "w", stdout);
	mpz_class p = 1;
	int k = 1, b = 1, pi = 0;
	for (int i = 1; i <= 21000000; i++) {
		mpz_nextprime(p.get_mpz_t(),p.get_mpz_t());
		std::bitset<32> bs = std::bitset<32>(p.get_si());
		if (bs.test(k)) {

			std::cout << k+1 << " " << i - pi << " " << i << '\n';
			std::cout << bs << ' ';
			std::cout << std::hex << p << ' ';
			std::cout << std::oct << p << ' ';
			std::cout << std::dec << p << '\n';
			pi = i;
			k++;
		}

		b++;
	}
/*
	mpz_t  r, n;
	       mpz_init (r);
	       mpz_init_set_str (n, "F", 16);
	std::cout << n << "\n";
*/

	printTime("finished");
	return 0;
}
