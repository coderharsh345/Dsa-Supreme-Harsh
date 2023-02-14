#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin >> n;

// Hollow Full Pyramid
for ( int row = 0; row < n; row++){
    // space printing
    for ( int col = 0; col < n- row -1; col++){
        cout << " ";
    }
    // Star printing
        if(row == n -1){
            for( int star = 0; star < (2*row +1); star++){
                if(star % 2 == 0){
                    cout << "*";
                }
                else{
                    cout <<" ";
                }
            }
        }
        else{
            for( int col =0; col < (2* row + 1); col++){
                if ( col == 0 || col == 2* row ){
                cout << "*";
                }
                else{
                cout << " ";
                }
            }
        }
    cout << endl;
}
}