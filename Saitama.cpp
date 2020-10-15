#include "Player.h"
#include "Brawler.h"
#include "Saitama.h"

// CONSTRUCTOR
Saitama::Saitama()
{
    attackBasic = "";
	attackClass = "Unmask Villan";
	attackCharacter1 = "Scooby Snack";
	attackCharacter2 = "Ultra Instinct";
}

std::string* attack_character1() // place holder
{
    std::string* attack = new std::string[3];
    // AP COST
    *(attack + 0) = std::to_string(3);

    // TOTAL DAMAGE
    int damage = (rand() % 10) + 10; // calculates damage
    *(attack + 1) = std::to_string(damage);

    // STATUS EFFECT
    *(attack + 2) = "none"; // sets status effect to none

    return attack;
}

std::string* attack_character2() // place holder
{
    std::string* attack = new std::string[3];
    // AP COST
    *(attack + 0) = std::to_string(3);

    // TOTAL DAMAGE
    int damage = (rand() % 10) + 10; // calculates damage
    *(attack + 1) = std::to_string(damage);

    // STATUS EFFECT
    *(attack + 2) = "none"; // sets status effect to none

    return attack;
}