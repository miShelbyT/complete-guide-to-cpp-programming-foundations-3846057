// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>
#include <cctype> // Required header for tolower()

int main(){
    int score = 1025;
    bool gamePaused = !bool(0);
    char action = 'X';
    char lowerChar = std::tolower(action);

    if(score % 2) // result is true and not 0
        std::cout << "This score: " << score << " is odd" << std::endl;
    else
        std::cout << "This score: " << score << " is even" << std::endl;

    std::cout << "The action '" << action << "' is ";
    if (lowerChar != 'a' && lowerChar != 'w' && lowerChar != 'd' && lowerChar != 's')
        std::cout << "not ";
    std::cout << "a movement key." << std::endl;

    if (gamePaused)
        std::cout << "The game is paused!" << std::endl;
    else 
        std::cout << "The game is running!" << std::endl;
    
        
    std::cout << std::endl << std::endl;
    return 0;
}
