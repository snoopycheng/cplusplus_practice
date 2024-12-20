#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.141592653589793

int main(){
    cout << "angle\tsin()" << endl;

    for(int i = 30; i <= 180; i += 30){
        cout << i << "\t";
        cout << sin(i * PI / 180) << endl;
    }
    
    return 0;
}