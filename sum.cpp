#include<iostream>
using namespace std;

int main(){
    int sum = 0;

    for(int i = 1; i <= 100; i++){
        sum += i;
    }

    cout << "1 + 2 + ... + 100 = " << sum << endl;
    
    return 0;
}