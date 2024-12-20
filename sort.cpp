#include<iostream>
using namespace std;

#define SIZE 5

int main(){
    int numbers[SIZE];

    for(int i = 0; i < SIZE; i++){
        cout << "input 5 numbers:\n";
        cin >> numbers[i];
    }

    for(int j = 0; j < SIZE; j++){
        for(int k = j + 1; k < SIZE; k++){
            if(numbers[j] > numbers[k]){
                int temp = numbers[j];
                numbers[j] = numbers[k];
                numbers[k] = temp;
            }
        }
    }

    cout << "after sorting:\n";
    for(int l = 0; l < SIZE; l++){
        cout << numbers[l];
    }

    return 0;
}