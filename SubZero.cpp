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
	int APCost = -5;
	*(attack + 0) = std::to_string(APCost);

	// TOTAL DAMAGE
	int damageMin = -10;
	int damageMax = -5;
	*(attack + 1) = std::to_string(generate_randomNumber(damageMin, damageMax)); // calculates damage

	// STATUS EFFECT
	std::string status = "none";
	*(attack + 2) = status; // sets status effect to none

	return attack;
}

std::string* SubZero::attack_character2()
{
    std::string* attack = new std::string[3];
	
	// AP COST
	int APCost = -7;
	*(attack + 0) = std::to_string(APCost);

	// TOTAL DAMAGE
	int damageMin = -35;
	int damageMax = -25;
	*(attack + 1) = std::to_string(generate_randomNumber(damageMin, damageMax)); // calculates damage

	// STATUS EFFECT
	std::string status = "none";
	*(attack + 2) = status; // sets status effect to none

	return attack;
}