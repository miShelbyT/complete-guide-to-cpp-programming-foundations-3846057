// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; // global variables

int main(){
    bool my_flag;
    a = 7;
    my_flag = false; // will evaluate to 0

    if(my_flag) {
        std::cout << "first try: " << std::endl;
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "flag = " << my_flag << std::endl;
    }

    b = 100;
    my_flag = true; // will evaluate to 1
    if(my_flag) {
        std::cout << "second try: " << std::endl;
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "flag = " << my_flag << std::endl;
    }

    unsigned int positive;
    std::cout << "Type a positive number: " << std::flush;
    std::cin >> positive;
    std::cout << "Your number is always positive: " << positive << std::endl;
    // assigning a negative number to an unsigned integer value will NOT assign the absolute value, but some form of binary conversion.


    std::cout << std::endl << std::endl;
    return 0;
}
