#include <iostream>
using namespace std;

int main(){
int n; 
cout << "Enter the number: ";
cin >> n;
 
    for ( int row = 0; row < n; row++){
        int count=0;
        for(int col = 0; col < 2 * row + 1; col++)
        {

            if (col == 0 || col == 2 * row)
                cout<<"*";
            if(count < 1)  
            {
            for (int col1 = 0; col1 < row; col1++)
            {
                cout << col1 + 1;
                col++;
            } 
            }
            if (count < 1){
            for (int col2 = 0; col2 < row - 1; col2++){
               cout << row - 1 - col2;
               col++;
            }
            }
           count++;
        }
        // cout<<endl; 
        
        // for(int col3 =0; col3 < 2*n - 2*row -3; col3++){
        //     if ( col3 == 0 || col3 == 2 * n - 2 * row - 4){
        //         cout << "*";
        //     }
        //      if(count < 1)  
        //     {
        //     for (int col4 = 0; col4 < row; col4++)
        //     {
        //         cout << col4 + 1;
        //         col3++;
        //     } 
        //     }
        // }
    cout<<endl; 
    }
}