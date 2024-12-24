#include<iostream>
#include<string>
#include<cctype> // c character classification functions
using namespace std;

bool checkID(string IDstr){
    // A~Z
    int letternums[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};

    // ex: a -> A
    if(islower(IDstr[0])){
        IDstr[0] = toupper(IDstr[0]);
    }

    // int total = (letternums[IDstr[0]] - 'A' / 10) + (letternums[IDstr[0]] - 'A' % 10) * 9;

    // for(int i = 1; i < 9; i++){
    //     total += (IDstr[i] - '0') * (9 - i);
    // }

    // int checknum = (10 - total % 10) % 10;

    return 0;

}

int main(){
    string IDstr;
    bool isID = false;
    string num = "0123456789";

    do{
        cout << "please enter your ID card number: " << endl;
        cin >> IDstr;
        if(IDstr.size() != 10){
            cout << "the ID card number must consist of 10 characters. please do not include any spaces! " << endl;
            continue; // directly jumps back to the beginning of the do block
        } 

        if(isalpha(IDstr[0])){
            // if [1]~[9] are all integers -> true
            if(IDstr.substr(1, 9).find_first_not_of("0123456789") == string::npos){
                if(isID == checkID(IDstr)){
                    cout << "pass" << endl;
                }
                else{
                    cout << "fail" << endl;
                }
            }
            else{
                cout << "the last 9 characters of the ID card number should be integers!" << endl;
            }
        }
        else{
            cout << "the first character of the ID card number should be a letter!" << endl;
        }
    }while(!isID);
    
    return 0;
}