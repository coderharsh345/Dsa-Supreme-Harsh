#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    
    for (int row = 0; row < n; row++){
        for (int col = 0; col < row + 1; col++){
            char ans = 'A' + col + row;
            cout << ans;;
        }
        cout << endl;
    }
}