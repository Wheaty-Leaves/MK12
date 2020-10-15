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
	*(attack + 0) = std::to_string(0);

	// TOTAL DAMAGE
	*(attack + 1) = std::to_string(generate_randomNumber(1, 10)); // calculates damage

	// STATUS EFFECT
	*(attack + 2) = "none"; // sets status effect to none

	return attack;
}

std::string* Scorpion::attack_character2()
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