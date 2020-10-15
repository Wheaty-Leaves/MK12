#ifndef SUBZERO_H
#define SUBZERO_H

#include "Player.h"
#include "Ranger.h"

class SubZero : public Ranger
{  
public:
// CONSTRUCTOR & DESTRUCTOR
    SubZero();
    ~SubZero() {}

// CHARACTER ATTACKS
    std::string* attack_character1() override;
    std::string* attack_character2() override;
};

#endif