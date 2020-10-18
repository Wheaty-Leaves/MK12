#ifndef CLEARSCREEN_H
#define CLEARSCREEN_H

#include <iostream>
#include <string>

inline void clear_screen() // clears console
{
    #ifndef NOUI_H
        for(int i = 0; i < 30; i++)
        {
            std::cout << std::endl; // clears console
        }
    #endif
}

inline int get_integer() // Prevents crashes from bad integer inputs
{
    int integer;
    std::cin >> integer;
    while (std::cin.fail())
    {
        std::cin.clear(); // clears error flags
        std::cin.ignore();
        return 0;
    }
    return integer;
}

inline std::string get_string()
{
    std::string string;
    std::cin >> string;
    while (std::cin.fail())
    {
        std::cin.clear(); // clears error flags
        std::cin.ignore();
        return "Error";
    }
    return string;
}
#endif