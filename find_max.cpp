#include<iostream>
#define SIZE 5
using namespace std;

int main(){
    int numbers[SIZE];

    cout << "input 5 numbers" << endl;

    for(int i = 0; i < SIZE; i++){
        cout << "input " << (i + 1) << " number: ";
        cin >> numbers[i];        
    }

    int MAX = numbers[0];

    for(int i = 1; i < SIZE; i++){
        if(numbers[i] > MAX){
            MAX = numbers[i];
        }
    }

    cout << "the maximum number is: " << MAX << endl;
    
    return 0;
}