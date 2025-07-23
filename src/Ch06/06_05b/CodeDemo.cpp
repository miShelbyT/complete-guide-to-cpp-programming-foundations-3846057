// Complete Guide to C++ Programming Foundations
// Exercise 06_05
// Overloading Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

// Function to get the speed of a player
int getSpeed(int distance, int time){
    return distance / time;
}

int getSpeed(double time) {
    return static_cast<int>(100 / time);
}
// once again, referencing the unit instead of inserting the variable keeps the system from copying the variable into memory
std::string getSpeed(int distance, int time, const std::string& unit) {
    int quotient = getSpeed(distance, time);
    return std::to_string(quotient) + " " + unit;
}

int main(){
    int speedInt;
    std::string speedStr;

    speedInt = getSpeed(200, 4);
    std::cout << "Speed (int): " << speedInt << std::endl;

    speedInt = getSpeed(3.5);
    std::cout << "Speed (default distance with time of 3.5): " << speedInt << std::endl;

    speedStr = getSpeed(277, 6, "meters per second");

    std::cout << "Speed (f string): " << speedStr << std::endl;

    
    std::cout << std::endl << std::endl;
    return 0;
}
