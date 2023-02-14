#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin >> n;

for(int row = 0; row < n; row++){
    if ( row == n-1){
        for(int col = 1; col <= n; col++){
            cout << col << " ";
        }
    }
    else{
        for( int col = 0; col < n-row-1; col++){
            cout << " ";
        }
        for(int col = 0; col < 2*row + 1; col++){
            if(col == 0){
                cout << 1;
            }
            else if( col == 2*row){
                cout << row + 1; 
            }
            else{
                cout << " ";
            }
        }
    }
    cout << endl;
}


// // Numeric Hollow Pyramid
// for (int row = 0; row < n; row++){
//     //space printing
//     for (int col = 0; col < n-row-1; col++){
//         cout <<" ";
//     }
//     // Numeric hollow pyramid
//     cout << 1 << " ";
//     for (int col = 0; col < 2*row - 2; col++){
//         if(row != n-1){
//             cout << " ";
//         } 
//         else{
//             if(col + 1 == 1 || col + 1 > row)
//                 { 
//                     continue;
//                 }
//                 else
//                 {
//                     cout << col + 1 << " ";
                
//                 }
//             }
//         } 
//         if( row != 0)
//         {
//             cout << row + 1;
//         }
//         cout << endl;
//     }
    
// // Another Numeric hollow Pyramid
//   for (int row = 1; row <= n; row+=1)
//   {
//     for (int col = row; col < n; col+=1)
//     {
//       cout << " ";
//     }
//     for (int col=1; col <= row; col++)
//     {
//       if (col ==1 || row==n){
//       cout << col << " " ;
//       } 
//       else {
//       cout << " " ;
//         }
//     }
//     for (int col=1; col < n -1; col++)
//     {
//       if ( col == row-1 && col < n-1) {
//       cout << col+1;
//       } 
//       else {
//       cout << " " ;
//       }
//     }
//     cout << endl;
//   }

}