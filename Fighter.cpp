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
	int APCost = 10;
	*(attack + 0) = std::to_string(APCost);

	// TOTAL DAMAGE
	int damageMin = 1;
	int damageMax = 10;
	*(attack + 1) = std::to_string(generate_randomNumber(damageMin, damageMax)); // calculates damage

	// STATUS EFFECT
	std::string status = "none";
	*(attack + 2) = status; // sets status effect to none

	return attack;
}
