#include<iostream>
using namespace std;

int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    cout << "in swap()..." << endl;
    cout << "during swapping a = " << *a << ", b = " << *b << endl;
    cout << "a address: " << a << endl;
    cout << "b address: " << b << endl;

    return 0;
}

int main(){
    int a = 5, b = 10;

    cout << "in main()..." << endl;
    cout << "before swapping a = " << a << ", b = " << b << endl;
    cout << "a address: " << &a << endl;
    cout << "b address: " << &b << endl;

    swap(&a, &b);

    cout << "after swapping a = " << a << ", b = " << b << endl;
    cout << "a address: " << &a << endl;
    cout << "b address: " << &b << endl;


    return 0;
}