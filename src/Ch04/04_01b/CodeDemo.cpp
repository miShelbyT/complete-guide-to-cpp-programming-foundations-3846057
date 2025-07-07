// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main(){
    const size_t LENGTH = 4;

    int enemies[LENGTH];
    float levelDifficulty[] = {0.5, 1.0, 1.5, 2.0}; // normally this is default double but the type is automatically coverted to float in the array

    std::cout << "Using constant for length of enemies array: " << LENGTH << std::endl;

    enemies[0] = 60;
    std::cout << "Enemy Count at idx 0: " << enemies[0] << std::endl;

    enemies[1] = 20;
    std::cout << "Enemy Count at idx 1: " << enemies[1] << std::endl;

    std::cout << "Enemy Count at idx 3: " << enemies[3] << std::endl;
    // nothing was assigned at this index. Undefined operations assign value for many reasons including previous memory assignments and previous compiler values

    std::cout << "Level Difficulty at idx 0: " << levelDifficulty[0] << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
