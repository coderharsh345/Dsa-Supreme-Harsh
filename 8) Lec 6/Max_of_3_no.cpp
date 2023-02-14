#include <iostream>
using namespace std;

int findmax(int a, int b, int c){
    if( a > b && a > c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}


int main(){
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "enter the Second Number : ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    int max = findmax(a,b,c);
    cout << "Maximum of three number : "<< max << endl;
}