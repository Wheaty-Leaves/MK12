#ifndef FIGHTER_H
#define FIGHTER_H

#include "Player.h"
#include <string>

class Fighter : public Player
{
public:
    // CONSTRUCTIOR & DESTRUCTOR
    Fighter();
    virtual ~Fighter() {}

    // BEHAVIOURS
    std::string* attack_class() override;
};

#endif