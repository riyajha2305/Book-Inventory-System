#include "StoreManager.cpp"

class Cashier {
    StoreManager* storeManager;
    unordered_map<string, Item*> itemTitleMap;

public:
    
    Cashier(){
        storeManager = new StoreManager();
        this->itemTitleMap = storeManager->getItemTitleMap();
        cout<<itemTitleMap.size();
    }

    double getBill(unordered_map<string, int> &itemQuantity){
        double totalPrice = 0;
        for(auto x : itemQuantity){
            if(itemTitleMap.count(x.first) > 0){
                totalPrice += itemTitleMap[x.first]->getPrice() * x.second;
                itemTitleMap[x.first]->updateQuantity(-x.second);
            }
        }
        return totalPrice;
    }

    unordered_map<string, Item*> getItemTitleMap(){
        return itemTitleMap;
    }
};