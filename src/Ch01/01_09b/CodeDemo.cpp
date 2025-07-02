// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string myName;

    std::cout << "Hi there, what is your name? " << std::flush;
    std::cin >> myName;
    std::cout << "Hi " << myName << ", welcome to the course!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}