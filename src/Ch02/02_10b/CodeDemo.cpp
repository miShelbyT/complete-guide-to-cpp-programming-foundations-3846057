// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -135.45;
    sprite_x = target_x;
    player_x = sprite_x;

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl;
    std::cout << "Player X (uint32_t - not what we expect): " << player_x << std::endl;
    // binary representation is (2 ^ 32) - intended value
    std::cout << "Player X (uint32_t): " << static_cast<int32_t>(player_x)<< std::endl;
    // this converts to int / negative number but not unsigned because the number was negative and can't be cast to unsigned int

    std::cout << std::endl << std::endl;
    return 0;
}
