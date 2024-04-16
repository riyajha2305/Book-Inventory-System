#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Item {
    string title;
    double price;
    int quantity;
    double cost;

public:

    Item(string title, double price, int quantity, double cost) {
        this->title = title;
        this->price = price;
        this->quantity = quantity;
        this->cost = cost;
    }

    string getTitle() const {
        return title;
    }

    double getPrice() const {
        return price;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    void updateQuantity(int newQuantity) {
        quantity += newQuantity;
    }

    void updatePrice(int newPrice){
        price = newPrice;
    }

};

