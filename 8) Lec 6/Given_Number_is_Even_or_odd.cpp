#include<iostream>
using namespace std;

void getcheck(int n){
    if(n > 0){
        if ( n % 2 == 0){
            cout << "It is a Even Number" << endl;
        }
        else{
            cout << "It is a Odd Number" << endl;
        }
    }
    else{
        cout << "Your Input is not valid "<< endl;
    }
}


int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    getcheck(n);
}