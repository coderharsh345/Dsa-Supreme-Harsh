#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter the number: ";
cin >> n;

//Solid Rectangle
for (int row = 0; row < n; row++){
    for ( int col = 0; col < n+2; col ++){
        cout << "* ";
    }
    cout << endl;
}
}