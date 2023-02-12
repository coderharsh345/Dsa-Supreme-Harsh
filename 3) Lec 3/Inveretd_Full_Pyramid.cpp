#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter the number: ";
cin >> n;

// Inverted Full Pyramid
for (int row = 0; row <n; row++){
    for(int space = 0; space < row; space++){
        cout << " ";
    }
    for(int star = 0; star< n-row; star++){
        cout << "* ";
    }
    cout << endl;
}
}