#ifndef SCORPION_H
#define SCORPION_H

#include "Player.h"
#include "Fighter.h"

class Scorpion : public Fighter
{  
public:
// CONSTRUCTOR & DESTRUCTOR
    Scorpion();
    ~Scorpion() {}

// CHARACTER ATTACKS
	std::string* attack_character1() override;
	std::string* attack_character2() override;
};

#endif