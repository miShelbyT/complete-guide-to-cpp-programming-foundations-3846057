// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = (fahrenheit - 32) * static_cast<float>(5)/9.0;

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    double weight = 10.99; // double has better precision than float
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
