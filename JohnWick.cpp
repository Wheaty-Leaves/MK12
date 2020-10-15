#include "JohnWick.h"

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
    *(attack + 0) = std::to_string(3);

    // TOTAL DAMAGE
    int damage = 5; // WORK IN PROGRESS
    *(attack + 1) = std::to_string(damage);

    // STATUS EFFECT
    *(attack + 2) = "none";

    return attack;
}

std::string* JohnWick::attack_character2()
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