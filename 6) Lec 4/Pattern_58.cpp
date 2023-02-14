#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    
    
    for (int row = 0; row < n; row++){
       // Ist Part
        for (int col = 0; col < n- row; col++){
            cout << col + 1;
            
        }

        //IInd Part
        for (int col = 0; col < 2* row + 1; col++){
            cout << "*";
            
        }

        // IIIrd Part
        
        for (int col3 = n - row; col3 >= 1; col3--){
            cout << col3;
            
        }
        cout << endl;
    }
}