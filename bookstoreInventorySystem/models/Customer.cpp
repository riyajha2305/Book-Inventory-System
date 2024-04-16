#include "Cashier.cpp"

class Customer {
    Cashier* cashier;
    unordered_map<string, Item*> itemTitleMap;
    string name;

public:

    Customer(){
        cashier = new Cashier();
        this->itemTitleMap = cashier->getItemTitleMap();
        cout<<itemTitleMap.size();
    }

    Customer(string name){
        this->name = name;
    }

    void displayBooks(){
        cout<<itemTitleMap.size();
        for(auto x : itemTitleMap){
            cout<<x.first<<"\n";
        }
    }

    double placeOrder(){
        unordered_map<string, int> itemQuantityMap;
        int items;
        cin>>items;
        for(int i=0;i<items;i++){
            string title;
            cin>>title;
            int quantity;
            cin>>quantity;
            itemQuantityMap[title] += quantity;
        }
        return cashier->getBill(itemQuantityMap);
    }

};