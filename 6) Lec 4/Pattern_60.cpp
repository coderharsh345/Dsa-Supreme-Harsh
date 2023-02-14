#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    
    //Ist Part
    for (int row = 0; row < n; row++){
       // Ist Part
        for (int col = 0; col < n; col++){
            cout << "* ";
            
        }
        //IInd part
        for(int col =0; col < n; col++){
            cout <<"  ";
        }
        //IIIrd Part
        for(int col = 0; col <n; col++){
            cout << "* ";
        }
        cout << endl;
    }

    //IInd Part
     for (int row = 0; row < n -1 ; row++){
       // Ist Part
        for (int col = 0; col < n; col++){
            cout << "* ";
            
        }
        //IInd part
        for(int col =0; col < n; col++){
            cout <<"* ";
        }
        //IIIrd Part
        for(int col = 0; col <n; col++){
            cout << "* ";
        }
        cout << endl;
    }

    //IIIrd Part
     for (int row = 0; row < n; row++){
       // Ist Part
        for (int col = 0; col < n; col++){
            cout << "* ";
            
        }
        //IInd part
        for(int col =0; col < n; col++){
            cout <<"  ";
        }
        //IIIrd Part
        for(int col = 0; col <n; col++){
            cout << "* ";
        }
        cout << endl;
    }
}