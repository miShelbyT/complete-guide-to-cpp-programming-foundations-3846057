// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character{
    std::string name;
    int level;
    character_role role;
};

int main(){

    game_character peach;
    peach.name = "Princess Peach"; 
    peach.level = 5;
    peach.role = character_role::protagonist;

    std::cout << "New character: " << peach.name << " is a level " << peach.level << " with a role of " << (int) peach.role << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
