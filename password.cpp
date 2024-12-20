#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[] = "NTOU";
    char str2[60];
    char str3[60];

    for(int i = 0; i <= 2; i++){
        cout << "please enter the password to confirm:\n";
        cin.getline(str2, 80);

        if(strcmp(str1, str2) == 0){
            cout << "password matches" << endl;
            break;
        }
        else{
            cout << "incorrect password. " << 2 - i << " attempts remaining." << endl;
        }
    }
    
    
    return 0;
}