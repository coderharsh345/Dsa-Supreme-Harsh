#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin >> n;



// Hollow diamond:
//fully half hollow pyramid
for(int row = 0; row < n; row++){
    //space printing
    for(int space = 0; space < n-row-1; space++){
        cout <<" ";
    }
    //star printing
    for(int starspace = 0; starspace < (2*row+1); starspace++){
        if( starspace ==0 || starspace == 2*row){
            cout << "* ";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
}
//inverted fully half hollow pyramid
for (int row = 0; row < n; row++){
    // space printing
    for (int space = 0; space < row; space++){
        cout << " ";
    }
// star printing
for (int star = 0; star < (2*n-2*row-1); star++){
    if (star == 0 || star == (2*n-2*row-2)){
        cout << "* ";
    }
    else{
        cout << " ";
    }
}
cout << endl;
}
}