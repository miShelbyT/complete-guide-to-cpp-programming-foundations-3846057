// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

#define MAX_AMMO 500
#define DEBUG 
// constant variable using pre-processor macro directive
// not the best practice because of lack of type checking

int main(){
    int32_t ammo = MAX_AMMO / 5;
    uint8_t health_items = 5;

    const int PLAYER_COUNT = 5; // constant variable with type checking
    // also scope encapsulation is enforced

    #ifdef DEBUG
        std::cout << "[DEBUG] Starting game simulation..." << std::endl;
    #endif
    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
