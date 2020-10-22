#include <iostream>
//using namespace std;

int main()
{
    int abilityPointsAdjustment;
    int abilityPoints = 3;
    //int lower;

	// prompt for user input
	#ifndef NOUI_H
	std::cout << "Enter health adjustment: \n" ;
	#endif
	std::cin >> abilityPointsAdjustment;

	// code from the player.cpp file
    abilityPoints = abilityPoints + abilityPointsAdjustment;
	if (abilityPoints < 0)
	{
		abilityPoints = 0;
	}

	if (abilityPointsAdjustment < 0)
	{
		#ifndef NOUI_H
	    std::cout << "Bad input, try again ";
		#endif
	    std::cin >> abilityPointsAdjustment;
	} else {

	// tell the user what was entered and the sum
	std::cout << abilityPoints;
    }

	// normal finish - exit with 0
	return 0 ;
}

// ./test < classTestingInput14.txt | diff - classTestingExpected14.txt # player AP