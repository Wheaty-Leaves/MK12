#ifndef JOHNWICK_H
#define JOHNWICK_H

#include "Player.h"
#include "Ranger.h"

class JohnWick : public Ranger
{  
public:
// CONSTRUCTOR & DESTRUCTOR
    JohnWick();
    ~JohnWick() {}

// CHARACTER ATTACKS
    std::string* attack_character1() override;
    std::string* attack_character2() override;
};

#endif