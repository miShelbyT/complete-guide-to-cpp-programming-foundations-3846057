// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

// optionally declaring functions before we assign them values aka initialize
std::string getPlayerName();
int calculateScore(int, int); // naming the parameters is optional up here
void displayScore(const std::string&, int); // we are setting up the reference to the playerName which cannot be altered
// also this keeps the system from making a copy of the object

std::string getPlayerName() {
    std::string input;
    std::cout << "Please enter player's name: ";
    std::getline(std::cin, input);
    return input;
}

int calculateScore(int baseScore, int multiplier) {
    return baseScore * multiplier;
}

void displayScore(std::string& playerName, int score) {
    std::cout << playerName << " scored " << score << " points." << std::endl;
}

int main(){
    // top down approach. implement functions to know what we want to do before we know how we will do it.
    std::string playerName = getPlayerName();

    int score = calculateScore(75, 2);

    displayScore(playerName, score);
    
    std::cout << std::endl << std::endl;
    return 0;
}
