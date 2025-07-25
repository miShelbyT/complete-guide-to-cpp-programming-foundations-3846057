// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Inventory{
    public:
        void addItem(const std::string &item){
            if(items->size() < capacity)
                items->push_back(item);
            else
                std::cout << "Inventory is full, cannot add " << item << std::endl;
        }

        void removeItem(const std::string& item){
            auto it = std::find(items->begin(), items->end(), item);
            if(it != items->end())
                items->erase(it);
            else
                std::cout << "The item " << item << " was not found." << std::endl;
        }
        //const correctness. we do not want to modify our objects inside this function
        std::string getItem(int index) const{
            if(index >= 0 && index < items->size())
                return (*items)[index];
            else
                return "Index is out of bounds.";
        }

        int getItemCount() const{
            return items->size();
        }

        void displayInventory() const{
            std::cout << "Inventory: [ ";
            for(size_t i = 0; i < items->size(); i++){
                std::cout << (*items)[i];
                if(i < items->size() -1)
                    std::cout << ", ";
            }
            std::cout << " ]" << std::endl;
        }
    
    private:
        std::vector<std::string> *items;
        int capacity;

    
};

int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}
