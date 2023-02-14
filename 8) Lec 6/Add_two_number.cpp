#include <iostream>
using namespace std;

int add(int a, int b){ //It is Funtion declration
    int sum = a + b; // It is function define
    return sum;
}

int main(){
    int a, b;
    cout << "Enter the First Value: ";
    cin >> a;
    cout << "Enter the Second Value: ";
    cin >> b;
    int sum = add(a,b);
    cout << "Add of two number: "<< sum << endl;
}