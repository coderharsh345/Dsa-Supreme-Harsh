#include <iostream>
using namespace std;

int main(){
int n; 
cout << "Enter the number: ";
cin >> n;

//Ist Part:
for(int row = 0 ; row < n; row ++){
   // Ist star
    for(int col = 0; col < n + 3 -row; col++){
        cout << "*";
    }
    //number with star printing
     for(int col = 0; col < (2*row + 1); col++){
        if( col % 2 == 0){
             cout << row + 1;
        }
        else{
            cout << "*";
        }
       
    }
   // star print
     for(int col = 0; col < n + 3 -row; col++){
        cout << "*";
    }
    cout << endl;
}

}