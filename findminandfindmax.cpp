#include<iostream>
using namespace std;

int findmax(int in[], int size){
    int max = 0;
    for(int i = 1; i < size; i++){
        if(in[max] < in[i]){
            max = i;
        }
    }
    return max;
}

int findmin(int in[], int size){
    int min = 0;
    for(int j = 1; j < size; j++){
        if(in[min] > in[j]){
            min = j;
        }
    }
    return min;
}

int main(){
    int income[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int k = findmax(income, 12);
    cout << "the one with the highest revenue is: " << (k + 1) << " " << income[k] << endl;

    k = findmin(income, 12);
    cout << "the one with the lowest revenue is: " << (k + 1) << " " << income[k] << endl;
    
    return 0;
}