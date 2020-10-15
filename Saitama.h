#ifndef SAITAMA_H
#define SAITAMA_H

#include "Player.h"
#include "Brawler.h"

class Saitama : public Brawler
{
public:
// CONSTRUCTOR & DESTRUCTOR
    Saitama();
    ~Saitama() {}

// CHARACTER ATTACKS
    std::string* attack_character1() override;
    std::string* attack_character2() override;
};

#endif