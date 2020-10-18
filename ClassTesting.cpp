#include "selectFunctions.h"
#include "AllPlayerClasses.h"
#define NOUI_H
#define NORANDOM_H

int main()
{
    int damage, APCost;
    int* damagep = &damage;
    int* APCostp = &APCost;
    std::string status = "none";
    std::string* statusp = &status; 

    Player* Test = select_character();
    
    select_attack(Test, damagep, APCostp, statusp);

    std::cout << damage << std::endl;
    std::cout << APCost << std::endl;
    std::cout << status << std::endl;
}

