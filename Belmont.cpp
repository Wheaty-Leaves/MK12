#include "Belmont.h"
#include "random.h"

// CONSTRUCTOR
Belmont::Belmont()
{
    name = "Belmont";
    attackBasic = "Vampire Slash";
	attackClass = "Sword Stab";
	attackCharacter1 = "Power Whip";
	attackCharacter2 = "Magic Blast";
}

// ATTACK FUNCTIONS
std::string* Belmont::attack_character1()
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

std::string* Belmont::attack_character2()
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

