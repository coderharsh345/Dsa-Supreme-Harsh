#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter the number: ";
cin >> n;

// Hollow Rectangle
for (int  row = 0; row < n; row++){
    if ( row == 0 || row == n-1){
        for (int col = 0; col < n+2; col++){
            cout << "* ";
        }
    }
    else{
        for (int i = 0; i < n+2; i++){
            
            if( i == 0 || i == n+1){
                cout << "* ";
            }

            else{
            cout << "  ";
            }
        }
    }
    cout << endl;
}
}