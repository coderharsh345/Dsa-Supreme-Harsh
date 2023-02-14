#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;

    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            char ans = 'A' + col + row - 2;
            cout << ans;
        }
        cout << endl;
    }
}