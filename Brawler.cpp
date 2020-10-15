#include "Player.h"
#include "Brawler.h"
#include <string>

// CONSTRUCTOR
Brawler::Brawler()
{
    classType = "Brawler"; //The class name but class cannot be used as a variable name
	health = 90;
    abilityPointsGain = 2;
	speed = 30;
	weakness = "Fighter";
}

//ATTACK FUNCTIONS

std::string* Brawler::attack_class() // place holder
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
