#include "Scorpion.h"
#include "random.h"

// CONSTRUCTOR
Scorpion::Scorpion()
{
    name = "Scorpion";
    attackBasic = "Devil Kick";
	attackClass = "Sword Stab";
	attackCharacter1 = "Hell Hook";
	attackCharacter2 = "Death Spin";
}

std::string* Scorpion::attack_character1()
{
    std::string* attack = new std::string[3];
	
	// AP COST
	int APCost = 4;
	*(attack + 0) = std::to_string(APCost);

	// TOTAL DAMAGE
	int damageMin = 10;
	int damageMax = 20;
	*(attack + 1) = std::to_string(generate_randomNumber(damageMin, damageMax)); // calculates damage

	// STATUS EFFECT
	std::string status = "none";
	*(attack + 2) = status; // sets status effect to none

	return attack;
}

std::string* Scorpion::attack_character2()
{
    std::string* attack = new std::string[3];
	
	// AP COST
	int APCost = 6;
	*(attack + 0) = std::to_string(APCost);

	// TOTAL DAMAGE
	int damageMin = 25;
	int damageMax = 35;
	*(attack + 1) = std::to_string(generate_randomNumber(damageMin, damageMax)); // calculates damage

	// STATUS EFFECT
	std::string status = "none";
	*(attack + 2) = status; // sets status effect to none

	return attack;
}