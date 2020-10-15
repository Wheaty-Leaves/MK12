#include "Player.h"
#include "Ranger.h"
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
    *(attack + 0) = std::to_string(3);

    // TOTAL DAMAGE
    int damage = 5; // WORK IN PROGRESS
    *(attack + 1) = std::to_string(damage);

    // STATUS EFFECT
    *(attack + 2) = "none";

    return attack;
}

std::string* SubZero::attack_character2()
{
    std::string* attack = new std::string[3];
    // AP COST
    *(attack + 0) = std::to_string(3);

    // TOTAL DAMAGE
    int damage = 5; // WORK IN PROGRESS
    *(attack + 1) = std::to_string(damage);

    // STATUS EFFECT
    *(attack + 2) = "none";

    return attack;
}