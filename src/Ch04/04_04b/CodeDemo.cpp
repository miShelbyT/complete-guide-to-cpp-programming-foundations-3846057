// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    // memory pointers dynamically allocate space
    TimePoint *start, *end;
    Duration *elapsed_seconds = new Duration();
    std::string input;

    start = new TimePoint(Clock::now());

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new TimePoint(Clock::now());
    *elapsed_seconds = *end - *start;

    // std::cout << "Reaction time: " << (*elapsed_seconds).count() << "s" << std::endl;
    // PEMDAS helps force the compiler to find the value of *elapsed_seconds before .count(). Normally, dot operator comes before * deregulator operator

    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl;
    // clean alternative to parenthesis. note that we removed the deregulator operator

    delete start;
    delete end;
    delete elapsed_seconds;
    // delete operator calls a special destructor function, need to delete to prevent memory leaks

    
    std::cout << std::endl << std::endl;
    return 0;
}
