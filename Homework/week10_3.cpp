// Implement and test a circle class. It should store the
// x, y coordinates for the center and the radius. It should have
// these methods: area(), circumference(), getters and setters.

#include <iostream>
using namespace std;

#define PI 3.141592653589793238462643383279502884L

class Circle {
public:
    Circle(int x, int y, int r);
    
    int getX();
    int getY();
    int getR();
    void setX(int xPosition);
    void setY(int yPosition);
    void setR(int radius);
    
    double area();
    double circumference();
    void print();
private:
    int x;
    int y;
    int r;
};

int main() {
    Circle c(2,3,15);
    c.print();
    cout << "Area: " << c.area() << endl;
    cout << "Circumference: " << c.circumference() << endl;

}
/* Constructors */
Circle::Circle(int x, int y, int r){
    Circle::setX(x);
    Circle::setY(y);
    Circle::setR(r);
}
/* Getters and Setters */
int Circle::getX(){
    return x;
}
int Circle::getY(){
    return y;
}
int Circle::getR(){
    return r;
}
void Circle::setX(int xPosition){
    x = xPosition;
}
void Circle::setY(int yPosition){
    y = yPosition;
}
void Circle::setR(int radius){
    r = radius;
}
/* Functions */
double Circle::area(){
    return PI*(r*r);
}
double Circle::circumference(){
    return 2*PI*r;
}
void Circle::print(){
    cout << "X: "<< x << "\tY: " << y << "\tRadius: " << r << endl;
}