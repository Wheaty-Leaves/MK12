#include "Player.h"
#include "Fighter.h"
#include "random.h"
#include <string>

// CONSTRUCTOR
Fighter::Fighter()
{
    classType = "Fighter"; //The class name but class cannot be used as a variable name
	health = 100;
    abilityPointsGain = 1;
	speed = 20;
	weakness = "Ranger";
}

//ATTACK FUNCTIONS

std::string* Fighter::attack_class() // place holder
{
	std::string* attack = new std::string[3];
	
	// AP COST
	*(attack + 0) = std::to_string(0);

	// TOTAL DAMAGE
	*(attack + 1) = std::to_string(generate_randomNumber(1, 10)); // calculates damage

	// STATUS EFFECT
	*(attack + 2) = "none"; // sets status effect to none

	return attack;
}
