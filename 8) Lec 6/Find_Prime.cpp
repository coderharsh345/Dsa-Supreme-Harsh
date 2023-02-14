#include <iostream>
using namespace std;

bool getPrime(int n){
    for ( int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isPrime = getPrime(n);

    if(isPrime){
        cout << "Number is Prime " << endl;
    }

    else{
        cout << "Number is not Prime" << endl;
    }
}