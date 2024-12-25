// to be completed

#include<iostream>
using namespace std;

class Shape{
public:
    virtual double area(){
        return 0;
    }
    Shape(double x = 0, double y = 0){
        this -> x = x;
        this -> y = y;
    }
protected:
    double x, y;
};

class Circle : virtual public Shape{
public:
    Circle(double x = 0, double y = 0, double radius = 0) : Shape(x, y){
        r = radius;
    }
    double area(){
        return r * r * 3.14159;
    }
private:
    double r;
};

class Rectangle : virtual public Shape{
public:
    Rectangle(double x = 0, double y = 0, double x1 = 1, double y1 = 1) : Shape(x, y){
        this -> x1 = x1;
        this -> y1 = y1;
    }
    double area(){
        return (x1 - x) * (y1 - y);
    }
private:
    double x1, y1;
};


int main(){
    Shape* sp[3] = {new Shape(), new Circle(1, 1, 3), new Rectangle(1, 2, 3, 4)};

    for(int i = 0; i < 3; i++)

    cout << sp[i] -> area() << endl;

    return 0;
}