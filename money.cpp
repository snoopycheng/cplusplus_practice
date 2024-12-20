#include<iostream>
using namespace std;

int main(){
    int money;
    int ten, five, one;

    cout << "please enter your currency exchange amount:" << endl;
    cin >> money;
    ten = money / 10;
    five = (money % 10) / 5;
    one = (money % 10) % 5;

    cout << money << " can be exchanged for coins:\n";
    cout << "ten: "  << ten << endl;
    cout << "five: " << five << endl;
    cout << "one: " << one << endl;
    
    return 0;
}