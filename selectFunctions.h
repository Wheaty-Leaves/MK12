#ifndef SELECTFUNCTIONS_H
#define SELECTFUNCTIONS_H

#include "AllPlayerClasses.h"
#include <iostream>

Player* select_character()
{
#ifndef NOUI_H
    std::cout << "Select your fighter!" << std::endl;

    std::cout << "1. Belmont" << '\t';
    std::cout << "2. Scorpion" << '\t';
    std::cout << std::endl;
    std::cout << "3. JohnWick" << '\t';
    std::cout << "4. SubZero" << '\t';
    std::cout << std::endl;

#endif
    int characterNumber;
    std::cin >> characterNumber;

    Player* Player;
    
    int repeat = 1;
    while(repeat == 1)
    {
        repeat = 0;
        switch (characterNumber)
        {
        case 1:
            Player = new Belmont();
            break;
        case 2:
            Player = new Scorpion();
            break;
        case 3:
            Player = new JohnWick();
            break;
        case 4:
            Player = new SubZero();
            break;
        default:
            repeat = 1;
            break;
        }
    }
    return Player;
}


void select_attack(Player* Player, int* damage, int* APCost, std::string* status)
{  
    
#ifndef NOUI_H // USER INTERFACE
    std::cout << "Select your attack ";
    std::cout << Player->get_name() << std::endl;
    std::cout << "1. " << Player->get_attackBasic() << '\t';
    std::cout << "2. " << Player->get_attackClass() << std::endl;
    std::cout << "3. " << Player->get_attackCharacter1() << '\t';
    std::cout << "4. " << Player->get_attackCharacter2() << std::endl;
#endif

    // ACTUAL FUNCTION - Requires protection from false inputs
    int attackNumber;
    std::cin >> attackNumber;

    std::string* attack;
    int repeat = 1;
    while(repeat == 1)
    {
        repeat = 0;
        switch (attackNumber)
        {
        case 1:
            attack = Player->attack_basic();
            break;
        case 2:
            attack = Player->attack_class();
            break;
        case 3:
            attack = Player->attack_character1();
            break;
        case 4:
            attack = Player->attack_character2();
            break;
        default:
            repeat = 1;
            break;
        }
    }
     
    // TAKES ATTACK INFORMATION AND PASSES IT TO MAIN FILE
    *(APCost) = std::stoi(*(attack + 0));
    *(damage) = std::stoi(*(attack + 1));
    *(status) = *(attack + 2);
}

#endif