//Take one program from each of weeks 1 through 4 and mand.c from
//week 5 and turn them into C++ programs that compile under g++.
//For the Mandelbrot program, use the C++ <complex> library.
//Also use <iostream>.

#include<iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;
    cout << "Please enter the number of fibonacci numbers you want displayed." << endl;
    cin >> n;
    
    cout << "First " << n << " numbers of the Fibonacci sequence are:" << endl;
    
    for(int i = 0; i < n; i++){
        if(i <= 1){
            next = i;
        }else{
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
    }
}