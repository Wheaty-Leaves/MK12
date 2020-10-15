#ifndef CLEARSCREEN_H
#define CLEARSCREEN_H

#include <iostream>

inline void clear_screen()
{
    #ifndef NOUI_H
        for(int i = 0; i < 30; i++)
        {
            std::cout << std::endl; // clears console
        }
    #endif
}

#endif