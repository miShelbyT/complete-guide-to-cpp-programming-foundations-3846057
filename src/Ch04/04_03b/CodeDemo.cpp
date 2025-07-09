// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int* scorePtr = highScores;   // Pointer initialized to the address of the array

    // highScores = {1, 2, 3, 4}; cannot modify value of highScores variable after it is declared

    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer. points to place in memory
    
    std::cout << "Second high score: " << *(scorePtr + 1) << std::endl;  // Display the SECOND high score using initial pointer reference

    // ++scorePtr; will change the value of the pointer
    std::cout << "Third high score: " << scorePtr[2] << std::endl;  // Display the THIRD high score using initial pointer reference

    std::cout << std::endl << std::endl;
    return 0;
}
