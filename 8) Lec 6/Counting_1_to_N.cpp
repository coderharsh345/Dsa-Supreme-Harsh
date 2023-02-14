#include <iostream>
using namespace std;

void printcounting(int n){
    for(int i = 1; i<= n; i++){
        cout << i << " ";
    }
}

int main(){
    int n;
    cout << "Enter the first number: ";
    cin >> n;

    printcounting(n);
    
    return 0;
}