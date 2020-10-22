#include <iostream>
//using namespace std;

int main()
{
    int healthAdjustment;
    int health = 100;

	// prompt for user input
	#ifndef NOUI_H
	std::cout << "Enter health adjustment: \n" ;
	#endif
	std::cin >> healthAdjustment;

	// code from player.cpp file
	health = health + healthAdjustment; 
	if (health < 0)
	{
		health = 0;
	}
	
		if (healthAdjustment < 0)
	{
		#ifndef NOUI_H
	    std::cout << "Bad input, try again ";
		#endif
	    std::cin >> healthAdjustment;
	} else {

	// tell the user what was entered and the sum
	std::cout << health;
	
	}
	// normal finish - exit with 0
	return 0 ;
}

//   ./test < classTestingInput13.txt | diff - classTestingExpected13.txt # player health