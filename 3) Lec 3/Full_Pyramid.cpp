#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter the number: ";
cin >> n;

// Full Pyramid
for(int row = 0; row < n; row++){
    for(int col = 0; col < n-row-1; col++){
        cout << " ";
    }
    for (int star = 0; star < row + 1; star++){
        cout << "* ";
    }
    cout << endl;
}
}