#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
#include "gmpTry.h"

namespace gmp_prime {
	/*
	Test for mersen prime number to check if it is prime
	*/
	bool Lucas_Lehmer_Test(mpz_class &m, int p) {
		mpz_class s = 4, sq = 2;
		int r = 0;
		for (int i = 3; i <= p; i++) {
			s = (s * s - 2) % m;
			//mpz_powm_ui(s.get_mpz_t(), s.get_mpz_t(), 2, m.get_mpz_t());s -= 2;
			/*		if (s <= 1) {
			 s = s + m - 2;
			 } else {
			 s -= 2;
			 }*/
			/*if (i * 100 / p > r) {
				std::cout << r << "%\n";
				r += 20;
			}*/

		}
		if (s == 0)
			return true;
		return false;
	}

	void checkMersen(int p) {
		std::string str = "0x";
		int i, length = p / 4;
		char *cstr = new char[length + 5];
		char firstNumber[4] = {'1', '2', '4', '8'};
		cstr[0] = '0';
		cstr[1] = 'x';
		cstr[2] = firstNumber[p % 4];
		cstr[3] = '\0';
		//length = 150;
		for (i = 1; i <= length; i++) {
			cstr[i + 2] = '0';
		}
		cstr[i + 2] = '\0';
		/*for(i = 0; i <= length + 4; i++) {
			std::cout << cstr[i];
		}
		std::cout << "\n";*/
		mpz_class mm(cstr);
		mm--;
		clock_t st = clock();
		bool result = Lucas_Lehmer_Test(mm, p);
		if (result)
			std::cout << "\nLucas_Lehmer_Test " << p << " : "
					<< ((double) (clock() - st)) / 1000000 << "\n";
	}
}
