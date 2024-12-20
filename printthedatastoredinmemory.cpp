#include<iostream>
using namespace std;

int main(){
    int a[5] = {1, 22, 333, 4444, 55555};
    int *ptr = a;

    for(int i = 0; i < 5; i++){
        cout << "ptr + " << i << " address: " << (ptr + i)
        << "\t data: " << *(ptr + i) << endl;
    }
    return 0;
}