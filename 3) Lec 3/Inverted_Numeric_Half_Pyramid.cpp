#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter the number: ";
cin >> n;

// Inverted Numeric Half Pyramid
for (int row = 0; row < n; row++){
    for (int col = 0; col < n-row; col++){
        cout << col +1 <<" ";
    }
    cout << endl;
}
}