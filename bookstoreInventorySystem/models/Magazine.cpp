#include "Item.cpp"

class Magazine : public Item {
    string category;

public:
    Magazine(string title, double price, int quantity, double cost, string category)
        : Item(title, price, quantity, cost){
            this->category = category;
        }

    string getCategory() const {
        return category;
    }
};