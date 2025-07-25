// this could have used .hpp extension. both are widely used in C++
#pragma once // VS Code supports this but not all compilers do.

// ALTERNATIVE TO #pragma for when it is not supported
//if the following macro is not defined, do this thing
#ifndef INVENTORY_H
#define INVENTORY_H //"include guard", is supported by all compilers

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Inventory{
public:
    // Default Constructor -- prototypes only
    Inventory();

    // Overloaded Constructor
    Inventory(int capacity_i);

    // Destructor
    ~Inventory();

    // Add item to inventory
    void addItem(const std::string& item);

    // Remove item from inventory
    void removeItem(const std::string& item);

    // Access item by index
    std::string getItem(int index) const;

    // Get number of items in the inventory
    int getItemCount() const;

    // Display inventory contents
    void displayInventory() const;

private:
    std::vector<std::string> *items; // Pointer to a vector of items
    int capacity; // Maximum number of items allowed
};

#endif  //INVENTORY_H