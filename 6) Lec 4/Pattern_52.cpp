#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    
    for (int row = 0; row < n; row++){
       
        for (int col = 0; col < n- row - 1; col++){
            cout << " ";
        }
        for(int col1 =0 ; col1 < row + 1; col1++){
            cout <<"*";
        }
        cout << endl;
    }
}