// Finish and test the code for the getters and setters
// of the ratio class (ratio03.cpp).

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
        int gcd(int m, int n);
  	private:
  		int num;
  		int den;
};
  
  int main() {
    Ratio x(0,0);
      int in;
      cout << "What do you want to set the Numerator to be? ";
      cin >> in;
      x.setNum(in);
      cout << "What do you want the denominator to be? ";
      cin >> in;
      x.setDen(in);
      cout << x.getNum() << "/" << x.getDen() << endl;
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

    int Ratio::gcd(int m, int n){
        int r;
        if(m<n) swap (m,n);
        while (n>0){
            r = m%n;
            m = n;
            n = r;
        }
        return m;
    }
  