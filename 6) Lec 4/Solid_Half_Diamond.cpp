#include <iostream>
using namespace std;

int main(){
int n; 
cout << "Enter the number: ";
cin >> n;

//Solid Half Pyramid

// Half Pyramid :
for(int row = 0; row< n; row++){
    for(int col = 0; col < row + 1; col++){
        cout << "*";
    }
cout << endl;
}

// Inverted Half Pyramid:
for(int row = 0; row< n; row++){
    for(int col = 0; col < n - row; col++){
        cout << "*";
    }
    cout << endl;
}

}