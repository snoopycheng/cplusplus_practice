#include<iostream>
using namespace std;

int main(){
    int price, money;
    char go_again = 'Y';

    while(go_again == 'Y' || go_again == 'y'){
        int choice;

        cout << "we have four meal options. please choose one:" << endl;
        cout << "1. big mac 2. mcchicken 3. fried chicken meal 4. double cheeseburger" << endl;
        cin >> choice;

        switch(choice){
        case 1:
            price = 109;
            cout << "price: " << price << endl;
            break;
        case 2:
            price = 89;
            cout << "price: " << price << endl;
            break;
        case 3:
            price = 119;
            cout << "price: " << price << endl;
        case 4:
            price = 129;
            cout << "price: " << price << endl;
        default:
            cout << "wrong number!" << endl;
            continue;
        }

        cin >> money;
        cout << "collecting " << money << endl;
        cout << "returning " << money - price << endl;
        cout << "press Y or y to continue" << endl;
        cin >> go_again;
    }
    
    return 0;
}