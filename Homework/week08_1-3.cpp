//Take one program from each of weeks 1 through 4 and mand.c from
//week 5 and turn them into C++ programs that compile under g++.
//For the Mandelbrot program, use the C++ <complex> library.
//Also use <iostream>.

#include<iostream>
#define SIZE 5
using namespace std;

void same(int a[SIZE], int b[SIZE]);
void printArray(int a[SIZE]);

int main() {
    int a[SIZE] = {1,2,3,4,5};
    int b[SIZE] = {5,4,3,2,1};
    
    cout << endl << "Array 1:\t";
    printArray(a);
    cout << endl << "Array 2:\t";
    printArray(b);
    
    cout << endl << "Are the arrays the same? ";
    same(a, b);
    
    for(int i = 0; i < SIZE; i++){
        a[i] = i+1;
        b[i] = i+1;
    }
    
    cout << endl << "Array 1:\t";
    printArray(a);
    cout << endl << "Array 2:\t";
    printArray(b);
    
    cout << endl << "Are the arrays the same? ";
    same(a, b);
    
}

void same(int a[SIZE], int b[SIZE]){
    for(int i = 0; i < SIZE; i++){
        if(a[i] != b[i]){
            cout << "False" << endl;
            return;
        }
    }
    cout << "True" << endl;
}

void printArray(int a[SIZE]){
    int i;
    for(i = 0; i < SIZE; i++){
        cout << a[i] << " ";
    }
}