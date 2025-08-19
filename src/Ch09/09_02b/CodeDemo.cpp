// Complete Guide to C++ Programming Foundations
// Exercise 09_02
// Opening a Text File for Reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    inFile.open("players.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            std::cout << str << ", ";
            getline(inFile, str);
            number = stoi(str);
            std::cout << number << ", ";
            getline(inFile, str);
            letter = str.at(0);
            if(letter == 'W') {
                std::cout << letter << " => Warrior!" << std::endl;
            } else {
                std::cout << letter << std::endl;
            }
        }
        inFile.close();
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
