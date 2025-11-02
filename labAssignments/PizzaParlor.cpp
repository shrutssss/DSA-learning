//Assignment:  Pizza parlor accepting maximum M orders. Orders are served on a first come first served basis. Order once placed
//cannot be canceled. Write C++ program to simulate the system using a circular queue using arrays

#include <iostream>
using namespace std;

struct Queue{
    int orderID;
    int itemCount;
    int bill;
    string* Menu;
    Queue(){
        Menu = nullptr;
        bill = 0;
        itemCount = 0;
    }
};

class Pizza_Parlour{
    public:
    int f,r, capacity;
    Queue* Q;
    Pizza_Parlour(int cap){
        capacity = cap;
        f = r = -1;
        Q = new Queue[capacity];
    }
    ~Pizza_Parlour(){
        for(int i=0; i<capacity; i++){
            delete[] Q[i].Menu;
        }
        delete[] Q;
    }
    void place_order(){
        if((r + 1) % capacity == f){
            cout<<"Sorry queue is full."<<endl;
            return;
        }
        if(f == -1){
            f = r = 0;
        }
        else{
            r = (r + 1) % capacity;
        }
        Q[r].bill = 0;
        if(Q[r].Menu != nullptr){
            delete[] Q[r].Menu;
        }
        cout<<"\nWELCOME TO PIZZA PARLOR !";
        cout<<"\nEnter your OrderID: ";
        cin>>Q[r].orderID;
        int n;
        cout<<"\nEnter number of items to order: ";
        cin>>n;
        Q[r].itemCount = n;
        Q[r].Menu = new string[n];
        int choice;
        for(int i=0; i<n; i++){
            cout << "Menu:\n";
            cout << "1. Cheese Burger - $1\n";
            cout << "2. Cheese Pizza   - $2\n";
            cout << "3. Cold Drinks    - $3\n";
            cout << "4. Hot Chocolate  - $4\n";
            cout << "5. French Fries   - $5\n";
            cout<<"Enter your choice(1-5): ";
            cin>>choice;
            switch(choice){
                case 1: 
                Q[r].Menu[i] = "Cheese Burger";
                Q[r].bill += 1;
                break;
                case 2: 
                Q[r].Menu[i] = "Cheese Pizza";
                Q[r].bill += 2;
                break;
                case 3: 
                Q[r].Menu[i] = "Cold Drinks";
                Q[r].bill += 3;
                break;
                case 4: 
                Q[r].Menu[i] = "Hot Chocolate";
                Q[r].bill += 4;
                break;
                case 5: 
                Q[r].Menu[i] = "French Fries";
                Q[r].bill += 5;
                break;
                default:
                cout<<"Enter valid choice!"<<endl;
                i--;
                return;
            }
        }
        cout<<"Order placed succesfully!\n";
    }
    
    void deliver_order(){
        if(f == -1){
            cout<<"No orders existing in queue!";
            return;
        }
        cout<<"==============================================================\n";
        cout<<"Delivering order: "<<Q[f].orderID<<endl;
        cout<<"--------------------------------------------------------------\n";
        cout<<"Bill amount: "<<Q[f].bill<<"\t Count: "<<Q[f].itemCount<<endl;
        cout<<"Order Summary:\n";
        for(int i=0;i<Q[f].itemCount;i++){
            cout<<" \t "<<Q[f].Menu[i]<<endl;
        }
        cout<<"==============================================================\n";
        
        delete[] Q[f].Menu;
        Q[f].Menu = nullptr;
        Q[f].itemCount = 0;
        Q[f].bill = 0;
        
        if(f == r){
            f = -1;
        }
        else{
            f = (f + 1) % capacity;
        }
    }
    
    void current_orders(){
        if(f == -1){
            cout<<"No current orders"<<endl;
            return;
        }
        int i = f;
        cout<<"\n Displaying orders: ";
        while(true){
            cout<<"\n==============================================================\n";
            cout<<"OrderID : "<<Q[i].orderID<<endl;
            cout<<"--------------------------------------------------------------\n";
            cout<<"Bill amount: "<<Q[i].bill<<"\t Count: "<<Q[i].itemCount<<endl;
            cout<<"Order Summary:\n";
            for(int j=0;j<Q[i].itemCount;j++){
                cout<<" \t "<<Q[i].Menu[j]<<endl;
            }
            cout<<"==============================================================\n";
            if(i == r) break;
            i = (i + 1) % capacity;
        }
    }
};

int main(){
    int cap;
    cout << "Enter the max number of orders the parlour can handle at once: ";
    cin >> cap;

    Pizza_Parlour P1(cap);
    int choice;

    do {
        cout << "\n---- Pizza Parlour System ----\n";
        cout << "1. Place Order\n";
        cout << "2. Deliver Order\n";
        cout << "3. Display Current Orders\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: P1.place_order(); break;
            case 2: P1.deliver_order(); break;
            case 3: P1.current_orders(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

