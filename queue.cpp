#include<iostream>
#include<deque>
using namespace std;

class Myque{
public:
    int item[5];
    int start, end;

    Myque(){
        start = -1;
        end = -1;
    }

    int Enque(){
        if(end >= 4){
            cout << "\nqueue is full!" << endl;
            return 0; // end function
        }
        else{
            cout << "please input: " << endl;
            cin >> item[++end];
        }
        return 0;
    }

    int Deque(){
        if(start >= end){
            cout << "\nno item, queue is empty!\n";
        }
        else{
            cout << "\ndeque item " << item[++start];
        }
        return 0;
    }
};

int main(){
    Myque Mq;

    for(int i = 1; i <= 6; i++){
        Mq.Enque();
    }

    for(int j = 1; j <= 6; j++){
        Mq.Deque();
    }

    return 0;
}