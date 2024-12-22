#include<iostream>
using namespace std;

class Shape{
public:
    int area(){
        return 0;
    }
};

class Circle : public Shape{
public:
    int area(){
        int circlearea;
        int r;
        cout << "input r:" << endl;
        cin >> r;
        circlearea = r * r * 3.1415926;
        cout << "circle's area is: " << circlearea << endl;
        return 0;
    }
};

class Rectangle : public Shape{
public:
    int area(){
        int rectanglearea;
        int a, b;

        cout << "input a: " << endl;
        cin >> a;
        cout << "input b: " << endl;
        cin >> b;
        rectanglearea = a * b;
        cout << "rectangle's area is: " << rectanglearea << endl;
        return 0;
    }
};


int main(){
    Circle c;
    Rectangle r;

    c.area();
    r.area();

    return 0;
}