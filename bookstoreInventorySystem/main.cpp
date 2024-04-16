#include "models/Customer.cpp"

int main(){
    StoreManager* storeManager = new StoreManager();
    storeManager->addItem(3);

    Customer* customer = new Customer();
    customer->displayBooks();
    cout<<customer->placeOrder()<<"\n";

}


