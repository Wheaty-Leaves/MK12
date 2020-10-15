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
	*(attack + 0) = std::to_string(0);

	// TOTAL DAMAGE
	*(attack + 1) = std::to_string(generate_randomNumber(1, 10)); // calculates damage

	// STATUS EFFECT
	*(attack + 2) = "none"; // sets status effect to none

	return attack;
}

std::string* JohnWick::attack_character2()
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