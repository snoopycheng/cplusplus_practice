#include<iostream>
#include<string>
using namespace std;

int main(){
    char array[] = "Happy new year!";
    string str[] = {
        string(), // empty string
        string(array), // copy whole string
        string(array, 5), // copy first 5 characters
        string(array, 6, 3), // copy 3 characters starting from index 6
        string(10, 'x') // create a string of 10 'x' characters
    };

    for(int i = 0; i < 5; i++){
        cout << "str[" << i << "] = " << str[i] << endl
        << "\tsizeof():" << sizeof(str[i])
        << "\tsize():" << str[i].size()
        << "\tlength():" << str[i].length() << endl;
    }

    return 0;
}