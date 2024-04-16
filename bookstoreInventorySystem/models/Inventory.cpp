#include "Item.cpp"
 
class Inventory{
    unordered_map<string, Item*> itemTitleMap;

public:

    void addToStock(Item* item){
        itemTitleMap[item->getTitle()]=item;
    }

    void removeStock(unordered_map<string, int> &itemQuantityRemoveMap){
        for(auto x : itemQuantityRemoveMap){
            if(itemTitleMap.count(x.first)>0){
                itemTitleMap[x.first]->updateQuantity(-x.second);
            }else{
                cout<<"Item "<<x.first<<" does not exists. Cannot be removed."<<"\n";
            }
        }
    }

    unordered_map<string, Item*> getItemTitleMap(){
        return itemTitleMap;
    }
};