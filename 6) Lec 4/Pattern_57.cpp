#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    
    int count = 1;
    for (int row = 0; row < n; row++){
       
        for (int col = 0; col < n- row - 1; col++){
            cout << " ";
        }
        for(int col1 = 1 ; col1 <= row + 1; col1++){
            cout << count;
            count++;
        }
        cout << endl;
    }
}