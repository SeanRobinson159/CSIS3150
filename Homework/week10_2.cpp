// Implement and test a Point class for 3D points.
// It should store the x, y, z values of a point and have these methods:
// Negative(), Norm() (distance to the origin), Print()

#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    Point(int x, int y, int z);
    
    int getX();
    int getY();
    int getZ();
    void setX(int xPosition);
    void setY(int yPosition);
    void setZ(int zPosition);
    
    void negative();
    double norm();
    void print();
private:
    int x;
    int y;
    int z;
};

int main() {
    Point p(1,1,2);
    p.print();
    cout << "Distance from Origin: " << p.norm() << endl;
    cout << "Negative points " << endl;
    p.negative();
    p.print();
    cout << "Distance from Origin: " << p.norm() << endl;

    
}
/* Constructors */
Point::Point(int x, int y, int z){
    Point::setX(x);
    Point::setY(y);
    Point::setZ(z);
}
/* Getters and Setters */
int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}
int Point::getZ(){
    return z;
}
void Point::setX(int xPosition){
    x = xPosition;
}
void Point::setY(int yPosition){
    y = yPosition;
}
void Point::setZ(int zPosition){
    z = zPosition;
}
/* Functions */
void Point::negative(){
    Point::setX(-x);
    Point::setY(-y);
    Point::setZ(-z);
}
double Point::norm(){
    return sqrt(x*x + y*y + z*z);
}
void Point::print(){
    cout << "X: "<< x << "\tY: " << y << "\tZ: " << z << endl;
}