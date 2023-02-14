#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    
    int count = n *n;
    for (int row = 0; row < n; row++){
       // Ist Part
        for (int col = 0; col < n; col++){
            cout << count << " ";
            count --;
            
        }
        cout << endl;
    }
}