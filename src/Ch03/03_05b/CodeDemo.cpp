// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30;
    int incoming_zombies = 20;

    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl;

    // Addition assignment
    ammo += 10; // 40
    std::cout << "Ammo after finding more ammo: " << ammo << std::endl;

    // Subtraction assignment
    ammo -= 10; //30
    std::cout << "Ammo after shooting zombies: " << ammo << std::endl;

    incoming_zombies -= 5; //15
    std::cout << "Zombies after shooting zombies: " << incoming_zombies << std::endl;

    // Multiplication assignment
    incoming_zombies *= 2; //30
    std::cout << "Zombies keep coming: " << incoming_zombies << std::endl;

    // Division assignment
    incoming_zombies /= 3; //10
    std::cout << "Shooting zombies through zombies: " << incoming_zombies << std::endl;

    ammo -= 3; //27
    std::cout << "Ammo after shooting zombies through zombies: " << ammo << std::endl;

    // Remainder assignment
    std::cout << "Final zombie count should be 10: " << incoming_zombies << std::endl;

    std::cout << "Final ammo count should be 27: " << ammo << std::endl;

    ammo %= 10;
    std::cout << "If each magazine holds 10 rounds the remainder should be 7: " << ammo << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
