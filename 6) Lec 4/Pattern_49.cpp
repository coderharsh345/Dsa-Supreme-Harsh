#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    int count = 0;
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= row; col++){
            char ans = 'A' + count;
            cout << ans;
            count++;
        }
        cout << endl;
    }
}