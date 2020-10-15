#include "Player.h"
#include "Fighter.h"
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
	*(attack + 0) = std::to_string(3);

	// TOTAL DAMAGE
	int damage = (rand() % 10) + 10; // calculates damage
	*(attack + 1) = std::to_string(damage);

	// STATUS EFFECT
	*(attack + 2) = "none"; // sets status effect to none

	return attack;
}
