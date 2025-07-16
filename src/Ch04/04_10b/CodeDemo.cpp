// Complete Guide to C++ Programming Foundations
// Exercise 04_10
// The String Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
// there aren't a lot of reasons to use the cstring class unless we need to write code compatible with C. the C++ string class handles memory management for us and no need to keep track of terminating characters!

int main(){
    std::string racer1 = "Speedy";
    std::string racer2 = "Lightning McQueen";
    std::string raceResult;

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    raceResult = "And the winner is... " + racer2; // + is an operation overload. the string class uses + to concatenate instead of adding numbers together

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
