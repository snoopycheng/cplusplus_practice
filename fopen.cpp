#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;

    file.open("/home/user/test.txt", ios_base::out);
    if(!file){
        cerr << "fail" << endl;
    }
    else{
        file << "test" << endl;
        file.close();
        cout << "writing complete" << endl;
    }

    file.open("/home/user/test.txt", ios_base::app);
    if(!file){
        cerr << "fail" << endl;
    }
    else{
        for(int i = 0; i < 10; i++){
            file << i;
        }
        cout << "writing complete" << endl;
    }

    return 0;
}