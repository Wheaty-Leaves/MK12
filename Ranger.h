#ifndef RANGER_H
#define RANGER_H

#include "Player.h"
#include <string>

class Ranger : public Player
{
public:
    // CONSTRUCTIOR & DESTRUCTOR
    Ranger();
    virtual ~Ranger() {}

    // BEHAVIOURS
    std::string* attack_class() override;
};

#endif