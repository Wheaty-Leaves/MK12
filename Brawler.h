#ifndef BRAWLER_H
#define BRAWLER_H

#include "Player.h"
#include <string>

class Brawler : public Player
{
public:
    // CONSTRUCTIOR & DESTRUCTOR
    Brawler();
    ~Brawler() {}

    // BEHAVIOURS
    std::string* attack_class() override;
};

#endif