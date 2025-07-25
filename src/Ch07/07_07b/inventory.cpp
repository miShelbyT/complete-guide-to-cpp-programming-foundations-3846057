#include "inventory.h";

// needs scope resolution operator so compiler know that these members relate to Inventory class

// Default Constructor
Inventory::Inventory(): capacity(capacity){
    items = new std::vector<std::string>();
}

// Overloaded Constructor
Inventory::Inventory(int capacity_i): capacity(capacity_i){
    items = new std::vector<std::string>();
}

// Destructor
Inventory::~Inventory(){
    delete items; // Prevent memory leak by deallocating the dynamic vector
}

// Add item to inventory
void Inventory::addItem(const std::string& item){
    if (items->size() < capacity)
        items->push_back(item);
    else
        std::cout << "Inventory is full, cannot add " << item << std::endl;
}

// Remove item from inventory
void Inventory::removeItem(const std::string& item){
    auto it = std::find(items->begin(), items->end(), item);
    if (it != items->end())
        items->erase(it);
    else
        std::cout << "Item " << item << " not found in inventory" << std::endl;
}

// Access item by index
std::string Inventory::getItem(int index) const{
    if (index >= 0 && index < items->size())
        return (*items)[index];
    else
        return "Index out of bounds";
}

// Get number of items in the inventory
int Inventory::getItemCount() const{
    return items->size();
}

// Display inventory contents
void Inventory::displayInventory() const{
    std::cout << "Inventory: [ ";
    for (size_t i = 0; i < items->size(); ++i){
        std::cout << (*items)[i];
        if (i < items->size() - 1) std::cout << ", ";
    }
    std::cout << " ]" << std::endl;
}