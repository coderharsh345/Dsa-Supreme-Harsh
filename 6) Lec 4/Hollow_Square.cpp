#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin >> n;

// Hollow Square Pattern:
for (int row = 0; row < n; row++){
    for (int col = 0; col < n; col++){
        if (row == 0 || row == n-1 || col == 0 || col == n-1){
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
}
}