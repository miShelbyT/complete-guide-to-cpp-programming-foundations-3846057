// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<std::string> checkpoints = {"Start", "Forest", "Castle"};

    // we PUSH, we can't insert at front of vector because of memory reallocation needs - would be very bad for performance
    checkpoints.push_back("Cave");
    checkpoints.push_back("Finish");

    std::cout << "Size of updated vector: " << checkpoints.size()  << " - and the second element is "  << checkpoints[1] << std::endl;

    checkpoints[2] = "Dark Castle";

    std::cout << "The third element is now: " << checkpoints[2] << std::endl;


    
    std::cout << std::endl << std::endl;
    return 0;
}
