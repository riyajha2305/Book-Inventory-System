#include "Item.cpp"

class Book : public Item {
    string author;

public:
    Book(string title, double price, int quantity, double cost, string author)
        : Item(title, price, quantity, cost){
            this->author = author;
        }

    string getAuthor() const {
        return author;
    }
};