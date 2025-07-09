// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    std::vector<std::complex<double>> points;
    // C++ 11 standard has solved compiler errors in nested templates mistaking the >> as right-shift bit operator

    points.push_back(std::complex<double>(3.5, 4.0));
    points.push_back(std::complex<double>(1.0, -2.1));
    points.push_back(std::complex<double>(-5.3, 6.0));
    points.push_back(std::complex<double>(7.2, 8.9));

    // there are several ways to access elements of a vector:
    // .begin() is an iterator that points us to memory space of first element in vector
    std::cout << "The first real part: " << points.begin()->real() << std::endl;
    std::cout << "Imaginary part at index 1: " << points[1].imag() << std::endl;
    std::cout << "Next to last real: " << prev(points.end(), 2)->real() << std::endl;
    std::cout << "Last imaginary: " << (points.end() - 1)->imag() << std::endl;
    // .end() is also an iterator that points to the space after the last element. -1 points to the last element
    // imag() vs real() will give us the imaginary ( num * square root of -1) or real number


    std::cout << std::endl << std::endl;
    return 0;
}
