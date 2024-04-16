#include "Inventory.cpp"

class StoreManager {
    Inventory* inventory;

public:
    StoreManager(){
        inventory = new Inventory();
    }

// doubt : how to differentitate btw item as a book / magazine
    void addItem(int items) {
        for(int i=0;i<items;i++){
            string title;
            cin>>title;
            double price;
            cin>>price;
            int quantity;
            cin>>quantity;
            double cost;
            cin>>cost;
            Item* item = new Item(title, price, quantity, cost);
            inventory->addToStock(item);
        }
    }

    void removeItem(int items){
        unordered_map<string, int> itemQuantityRemoveMap;
        for(int i=0;i<items;i++){
            string title;
            cin>>title;
            int quantity;
            cin>>quantity;
            itemQuantityRemoveMap[title] += quantity;
        }
        inventory->removeStock(itemQuantityRemoveMap);
    }

    unordered_map<string, Item*> getItemTitleMap(){
        return inventory->getItemTitleMap();
    }
};