// A Ratio class 3

#include <iostream>
using namespace std;

class Ratio {
  	public:
        Ratio(int n, int d);
        int getNum();
        int getDen();
        int setNum(int n);
        int setDen(int d);
        double convert();
  		void invert();
  		void print();
        void gcd(int m, int n);
  	private:
  		int num;
  		int den;
};
  
  int main() {
    Ratio x(22,7);
    cout << "x = ";
    x.print();
    cout << " = " << x.convert() << endl;
    x.invert();
    cout << "1/x = "; x.print();
    cout << endl;
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
    int Ratio::setNum(int n){
        num = n;
    }
    int Ratio::setDen(int d){
        den = d;
    }
	void Ratio::invert(){
     	int temp = num;
      	num = den;
      	den = temp;
    }

	void Ratio::print(){
 		cout << num << '/' << den; 
	}

    void Ratio::gcd(int m, int n){
        int r;
        if(m<n) swap (m,n);
        while (n>0){
            r = m%n;
            m = n;
            n = r;
        }
        return m;
    }
  