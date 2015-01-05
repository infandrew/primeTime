#include "common.h"
#include <ctime>
#include <iostream>

double startingTime = (double)clock() / CLOCKS_PER_SEC;
/*
Prints message to console with time
*/
void printTime(std::string str) {
	double buffTime = (double)clock() / CLOCKS_PER_SEC;
	std::cout << str << ":" << buffTime - startingTime << "\n";
}