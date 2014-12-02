//Demo five methods of the algorithm class, not given in class.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int ints[] = {10,20,30,30,20,10,10,20};
    cout << "The Set: {10,20,30,30,20,10,10,20}" << endl;
    
    cout << "\nThere are " << count (ints, ints+8, 10) << " tens in the set.\n";
    
    cout << "\n101 or 99. The max number is " << max(101, 99) << endl;
    cout << "200 or 201. The min number is " << min(200, 201) << endl;
    
    cout << "\nThe max element is " << *max_element(ints, ints+8) << endl;
    cout << "The min element is " << *min_element(ints, ints+8) << endl;
    

}