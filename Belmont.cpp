#include "Belmont.h"

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
    *(attack + 0) = std::to_string(3);

    // TOTAL DAMAGE
    int damage = 5; // WORK IN PROGRESS
    *(attack + 1) = std::to_string(damage);

    // STATUS EFFECT
    *(attack + 2) = "none";

    return attack;
}

std::string* Belmont::attack_character2()
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

