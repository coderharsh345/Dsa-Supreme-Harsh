#include <iostream>
using namespace std;

int main(){
int n; 
cout << "Enter the number: ";
cin >> n;

for(int row= 0; row < n; row++){
    //space printing
    for(int col =0 ; col < n-row-1; col++){
        cout<< " ";
    }

    //numeric printing
    for(int col =0; col < row + 1; col++){
        cout << col + 1;
    }
    //reverse printing:
    for(int col = row; col >=1; col--){
        cout << col ;
    }
    
    cout << endl;
}
}