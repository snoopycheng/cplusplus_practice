#include<iostream>
using namespace std;

int main(){
    int iarray[5];

    for(int i = 0; i < 5; i++){
        iarray[i] = i * 5;
    }

    cout << "size of array = " << sizeof(iarray) << endl;

    for(int j = 0; j < 5; j++){
        cout << "iarray[" << j << "] = " << iarray[j] << endl;
    }
    
    return 0;
}