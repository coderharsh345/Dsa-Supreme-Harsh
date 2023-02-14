#include <iostream>
using namespace std;

int getsum(int n){
    int sum = 0;
    for(int i = 2; i <= n; i+=2){
        sum = sum + i; 
    }
    return sum;
}


int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = getsum(n);
    cout << "Your Sum is: " << sum << endl; 
    
    return 0;
}