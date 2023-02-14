#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number: ";
    cin  >> n;

    //Ist Part
    for (int row = 0; row < n; row++){
        for(int col = 0; col < row + 1; col++){
            cout << "*";
        }
        for (int col1 =0; col1 < 2 * n - 2 * row - 1; col1++){
            cout << " ";
        }
        for(int col2 = 0; col2 < row + 1; col2++){
            cout << "*";
    } 
    cout << endl;
    }

    //IInd Part
    for(int row = 0; row < n; row++){
        for(int col1 = 0; col1 < n-row; col1++){
            cout << "*";
        }
        for(int col2 = 0; col2 < 2*row + 1; col2++){
            cout << " ";
        }
        for(int col3 = 0; col3 < n-row; col3++){
            cout << "*";
        }
        cout << endl;
    }
}