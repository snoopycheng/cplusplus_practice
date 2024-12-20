#include<iostream>
using namespace std;

class Student
{
public:
    int age;

    void output(){
        cout << "age: " << age << endl;
    }
};

int main(){
    Student s1;

    s1.age = 19;
    s1.output();
    
    return 0;
}