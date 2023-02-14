#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;

    int count = 0;

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            char ans = count +'A';
            cout << ans;
            count++;
        }
        cout << endl;
    }
}