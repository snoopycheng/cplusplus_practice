// to be completed

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s, target = "0123456789";
    cout << "input a string:\n";
    getline(cin, s);

    unsigned int i, count = 0, pos = 0;

    while((i = s.find_first_of(target, pos)) != string::npos){
        count++;
        pos = i + 1;
    }

    if(count == 0){
        cout << "no integers!" << endl;
    }
    else{
        cout << count << " integers" << endl;
    }

    return 0;
}
