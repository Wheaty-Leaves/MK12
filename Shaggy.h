#ifndef SHAGGY_H
#define SHAGGY_H

#include "Player.h"
#include "Brawler.h"

class Shaggy : public Brawler
{
public:
// CONSTRUCTOR & DESTRUCTOR
    Shaggy();
    ~Shaggy() {}

// CHARACTER ATTACKS
    std::string* attack_character1() override;
    std::string* attack_character2() override;
};

#endif