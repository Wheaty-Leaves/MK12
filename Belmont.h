#ifndef BELMONT_H
#define BELMONT_H

#include "Fighter.h"

class Belmont : public Fighter
{  
public:
// CONSTRUCTOR & DESTRUCTOR
    Belmont();
    ~Belmont() {}

// CHARACTER ATTACKS
	std::string* attack_character1() override;
	std::string* attack_character2() override;
};

#endif