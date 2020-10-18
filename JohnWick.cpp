#include "JohnWick.h"
#include "random.h"

// CONSTRUCTOR
JohnWick::JohnWick()
{
    // ATTACK NAMES
    name = "John Wick";
    attackBasic = "The Pencil";
	attackClass = "Horse Kick";
	attackCharacter1 = "AP Bullets";
	attackCharacter2 = "The Dog";
}

// ATTACK FUNCTIONS
std::string* JohnWick::attack_character1()
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

std::string* JohnWick::attack_character2()
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