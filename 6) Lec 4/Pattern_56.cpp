#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    
    for (int row = 0; row < n; row++){
       
        for (int col = 0; col < row; col++){
            cout << " ";
        }
        for(int col1 = 1 ; col1 <= n- row; col1++){
            cout << col1 + row;
        }
        cout << endl;
    }
}