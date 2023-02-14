#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin >> n;


// Numeric full Pyramid
for (int row = 0; row < n; row++){
    //space printing
    for (int col =0; col < n-row-1; col++){
        cout << " ";
    }
    //number printing
    for(int col = 0; col < row + 1; col++){
        cout << col + row + 1 ;
    }
    // reverse printing
    int print = 2 * row;
    for (int col = row; col >= 1; col--){
        cout << print ;
        print--;
    }
    cout << endl;
}
}