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
	*(attack + 0) = std::to_string(0);

	// TOTAL DAMAGE
	*(attack + 1) = std::to_string(generate_randomNumber(1, 10)); // calculates damage

	// STATUS EFFECT
	*(attack + 2) = "none"; // sets status effect to none

	return attack;
}

std::string* Belmont::attack_character2()
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

