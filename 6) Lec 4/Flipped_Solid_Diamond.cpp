#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin >> n;

// Flipped Solid Pyramid
// 1st part 
for(int row = 0; row < n; row++){
    // star printing
    for (int star = 0; star < n-row; star++){
        cout <<"*";
    }
// space full pyramid
for (int space = 0; space < 2*row +1; space++){
    cout << " ";
}
// again star printing
 for (int star = 0; star < n-row; star++){
        cout <<"*";
    }
cout << endl;
}
// 2nd part
for (int row = 0; row < n; row++){
    //star printing
    for(int star = 0; star < row+1; star++){
        cout << "*";
    }
    //spaceing 2nd part
    for(int space = 0; space < 2*n -2*row-1; space ++){
        cout << " ";
    }
    // again star printing
    for(int star = 0; star < row+1; star++){
        cout << "*";
    }
    cout << endl;
} 
}