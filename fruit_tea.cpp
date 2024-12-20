#include<iostream>
using namespace std;

int main(){
    enum fruit_tea{apple, banana, orange};
    fruit_tea taste;

    taste = apple;
    cout << "taste = " << taste << endl;

    taste = orange;
    cout << "taste = " << taste << endl;
    
    return 0;
}