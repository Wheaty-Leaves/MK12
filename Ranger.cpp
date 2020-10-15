#include "Player.h"
#include "Ranger.h"
#include <string>

// CONSTRUCTOR
Ranger::Ranger()
{
    classType = "Ranger"; //The class name but class cannot be used as a variable name
	health = 80;
    abilityPointsGain = 3;
	speed = 10;
	weakness = "Brawler";
}

//ATTACK FUNCTIONS

std::string* Ranger::attack_class() // place holder
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
