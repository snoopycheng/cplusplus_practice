#include<iostream>
using namespace std;

int findmin(int i1, int i2, int i3){
    if(i1 < i2){
        if(i1 < i3){
            return i1;
        }
        else{
            return i3;
        }
        
    }
    else{
        if(i2 < i3){
            return i2;
        }
        else{
            return i3;
        }
    }
}

int main(){
    int i1, i2, i3;
    cout << "input 3 integers:\n";
    cin >> i1;
    cin >> i2;
    cin >> i3;

    cout << "minimum = " << findmin(i1, i2, i3) << endl;

    return 0;
}