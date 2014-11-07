//iterators02

#include <iostream>
#include <list>
#include <string>
using namespace std;

typedef list<string> List;
typedef List::iterator it;
void print(List &lst);

int main() {
    List myList;
    myList.push_back("one");
    myList.push_back("two");
    myList.push_back("three");
    print(myList);
}

void print(List &lst){
    cout << endl;
    for(it iter = lst.begin(); iter != lst.end(); iter++){
        cout << *iter << endl;
    }
}