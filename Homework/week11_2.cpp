//Using operator overloading, define and test the
//'<' and the '>' operators to the ratio class

// Ratio Header file (New)!

#include <iostream>
using namespace std;

int gcd(int m, int n);

class Ratio {
    friend Ratio operator*(Ratio & x, Ratio & y);   //Non-class function
    friend Ratio operator/(Ratio & x, Ratio & y);   //Non-class function
    friend Ratio operator+(Ratio & x, Ratio & y);   //Non-class function
    friend Ratio operator-(Ratio & x, Ratio & y);   //Non-class function
    friend bool operator<(Ratio & x, Ratio & y);   //Non-class function
    friend bool operator>(Ratio & x, Ratio & y);   //Non-class function

public:
    Ratio(int n, int d);
    int getNum();
    int getDen();
    void setNum(int n);
    void setDen(int d);
    double convert();
    void invert();
    void print();
    void reduce();
private:
  		int num;
  		int den;
};

Ratio operator*(Ratio & x, Ratio & y){      //Overloading operators
    Ratio z(x.num*y.num, x.den* y.den);
    z.reduce();
    return z;
}
Ratio operator/(Ratio & x, Ratio & y){      //Overloading operators
    Ratio z(x.num*y.den, y.num* x.den);
    z.reduce();
    return z;
}
Ratio operator+(Ratio & x, Ratio & y){      //Overloading operators
    Ratio z(x.num*y.den + y.num*x.den, x.den*y.den);
    z.reduce();
    return z;
}
Ratio operator-(Ratio & x, Ratio & y){      //Overloading operators
    Ratio z(x.num*y.den-y.num*x.den, x.den*y.den);
    z.reduce();
    return z;
}
bool operator<(Ratio & x, Ratio & y){      //Overloading operators
    if((x.num/x.den) < (y.num/y.den)){
    	return 1;
    }
    return 0;
}
bool operator>(Ratio & x, Ratio & y){      //Overloading operators
    if(x.num/x.den > y.num/y.den){
    	return 1;
    }
    return 0;
}

int main(){
	Ratio R1(2,3);
	Ratio R2(1,2);
	Ratio rSub = R1-R2;
	Ratio rDiv = R1/R2;
	bool less = R1<R2;
	bool more = R1>R2;
	cout << "R1: ";
	R1.print();
	cout << "R2: ";
	R2.print();

	cout << "R1 < R2 ? " << less << endl;

	cout << "R1 > R2 ? " << more << endl;

}

Ratio::Ratio(int n, int d){
    num = n;
    den = d;
}

double Ratio::convert() {
    return double(num)/den;
}

int Ratio::getNum(){
    return num;
}
int Ratio::getDen(){
    return den;
}
void Ratio::setNum(int n){
    num = n;
}
void Ratio::setDen(int d){
    den = d;
}
void Ratio::invert(){
    int temp = num;
    num = den;
    den = temp;
}

void Ratio::print(){
    cout << num << '/' << den << endl;
}

void Ratio::reduce(){
    int sign, g;
    if (num == 0 || den == 0){
        num = 0;
        den = 1;
    }
    if (den < 0) {
        den *= -1;
        num *= -1;
    }
    if (den == 1) return;
    //if num < 0, then sign is -1 else sign is 1
    sign = (num < 0?-1:1);
    g = gcd(sign*num, den);
    num = num/g;
    den = den/g;
    
}

int gcd(int m, int n){
    int r;
    if (m<n) swap (m,n);
    while (n>0){
        r = m%n;
        m = n;
        n = r;
    }
    return m;
}
