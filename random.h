#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <ctime>

int generate_randomNumber(int lower, int upper) // Generates a random number between upper and lower
{
	int randomNumber;
#ifndef NORANDOM_H
	srand(time(NULL)); // New random seed
	randomNumber = rand() % (upper + 1 - lower) + lower;
#else
	randomNumber = (upper - lower)/2 + lower;
#endif
	return randomNumber;
}

#endif