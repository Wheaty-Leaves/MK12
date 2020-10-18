#ifndef SELECTFUNCTIONS_H
#define SELECTFUNCTIONS_H

#include "AllPlayerClasses.h"
#include "clear_screen.h"
#include <iostream>

Player* select_character()
{
    Player* Player;
    int repeat = 1;
    int characterNumber = -1;
    while(repeat == 1)
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

        characterNumber = get_integer();
    
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
            #ifndef NOUI_H
                std::cout << "Not a valid number, please reenter" << std::endl;
                clear_screen();
            #endif
            break;
        }
    }

    #ifndef NOUI_H
        std::cout << "Enter your name: ";
    #endif
    std::cin >> Player->name;

    return Player;
}

void select_attack(Player* Player, int* damage, int* APCost, std::string* status)
{
    int attackNumber; 
    int repeat = 1;
    std::string* attack;

    *(APCost) = 100; // Causes the first loop of the AP Checker
    while (*(APCost) > Player->get_abilityPoints()) // Checks if player has sufficient AP
    {   
        while(repeat == 1)
        {
            #ifndef NOUI_H // USER INTERFACE
                std::cout << Player->get_name() << " has " << Player->get_health() << " HP & "; 
                std::cout << Player->get_abilityPoints() << " AP" << std::endl;
                std::cout << "Select your attack " << std::endl;
                std::cout << "1. " << Player->get_attackBasic() << std::endl;
                std::cout << "2. " << Player->get_attackClass() << std::endl;
                std::cout << "3. " << Player->get_attackCharacter1() << std::endl;
                std::cout << "4. " << Player->get_attackCharacter2() << std::endl;
            #endif

            attackNumber = get_integer();

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

        clear_screen();

        if (*(APCost) > Player->get_abilityPoints())
        {
        #ifndef NOUI_H
            std::cout << "Insufficient AP" << std::endl;
        #endif
        }
    }
}

#endif