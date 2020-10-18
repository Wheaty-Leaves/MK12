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

std::string* SubZero::attack_character2()
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