#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin >> n;
    
// Fancy Pattern 2
// 1st part
for (int row =0; row < n; row++){
    for (int col =0; col < row+1; col++){
        cout << row+1 ;// number printing
        //star printing
        if(col != row){
            cout << "*";
        }
    }
    cout << endl;
}
// 2nd part
for (int row = 0; row < n; row++){
    for (int col = 0; col < n - row; col++){
        cout << n-row;
    if(col != n-row-1)
    {
        cout << "*";
    }
    }
    cout << endl;
}
}