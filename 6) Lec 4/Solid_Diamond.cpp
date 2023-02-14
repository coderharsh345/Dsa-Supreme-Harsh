#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin >> n;



// Solid Diamond
// Full Pyramid
    for (int row =0; row < n; row++){
        //spaces printing
        for(int space = 0; space < n-row-1; space++){
            cout << " ";
        }
        //star printing
        for(int star = 0; star < row+1; star++){
            cout << "* ";
        }
        cout <<  endl;
    }
    
    // Inverted Full Pyramid
    for (int row = 0; row < n; row++){
        //space printing
        for (int space = 0; space < row; space++){
            cout << " ";
        }
        // star printing
        for(int star =0; star< n-row; star++){
            cout << "* ";
        }
        cout << endl;
    }
}