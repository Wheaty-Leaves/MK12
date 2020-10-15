#include "Player.h"
#include "Ranger.h"
#include "random.h"
#include "SubZero.h"

// CONSTRUCTOR
SubZero::SubZero()
{
    name = "Sub Zero";
    attackBasic = "Lin Kuei Kick";
	attackClass = "Stunning Strike";
	attackCharacter1 = "Ice Ball";
	attackCharacter2 = "Deep Freeze Grenade";
}

std::string* SubZero::attack_character1()
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

std::string* SubZero::attack_character2()
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