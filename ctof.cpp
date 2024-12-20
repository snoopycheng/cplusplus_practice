#include<iostream>
using namespace std;

int main(){
    float C, F;
    cout << "please enter the Celsius temperature: \n";
    cin >> C;

    F = C * 9 / 5 + 32;

    cout << "converted to Fahrenheit temperature is: " << F << endl;

    return 0;
}