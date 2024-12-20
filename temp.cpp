#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 3;
    int temp;

    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << "\nb = " << b << endl;
    
    return 0;
}