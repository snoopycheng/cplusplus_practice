#include<iostream>
using namespace std;

int main(){
    float height;
    cout << "input your height:" << endl;
    cin >> height;

    if(height < 110){
        cout << "you do not need to buy a ticket" << endl;
    }
    else if(height < 140){
        cout << "you need to buy a half-price ticket" << endl;
    }
    else{
        cout << "you need to buy a ticket" << endl;
    }

    cout << "wish you a pleasant journey" << endl;
    
    return 0;
}