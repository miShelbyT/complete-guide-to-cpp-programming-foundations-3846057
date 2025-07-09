// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>


int main(){
    const size_t LENGTH = 50;
    char racer1[] = "Speedy";
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];

    strncpy(racer2, "Lightning McQueen", sizeof(racer2)-1); //taking racer2, copying the second argument into this char array and specifying its length as length-1 to account for terminating character)
    racer2[sizeof(racer2)-1] = '\0'; // this explicitly sets the final character in this char array as null which is '\0'

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    strncpy(raceResult, "And the winner is..... ", sizeof(raceResult)-1);
    raceResult[sizeof(raceResult)-1] = '\0';

    // strncat(raceResult, racer1, sizeof(raceResult) - sizeof(raceResult) - 1); // this is incorrect because sizeof refers to the entire buffer in the char array, not the size of the current usage
    strncat(raceResult, racer2, sizeof(raceResult) - strlen(raceResult) - 1);

    std::cout << "The length of the result is: " << strlen(raceResult) << std::endl;
    std::cout << raceResult << std::endl;

    std::cout << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
