#include<iostream>
using namespace std;

int main(){
    int *iptr, age = 18;
    float *fptr, weight = 65.05f;
    char *cptr, bloodtype = 'O';

    iptr = &age;
    fptr = &weight;
    cptr = &bloodtype;

    cout << "age = " << *iptr << endl;
    cout << "weight = " << *fptr << endl;
    cout << "bloodtype = " << *cptr << endl;

    return 0;
}