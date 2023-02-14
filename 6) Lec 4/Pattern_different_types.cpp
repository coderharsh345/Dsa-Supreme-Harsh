#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin >> n;


    for ( int row = 0; row < n; row++){
      for ( int col = 0; col < n- row; col ++){
        cout << n-row << " ";
      }
      cout << endl;
    }



  //   int i,j;
  // j=10;
  // i=(j++,j+100,999+j);
  // cout<<i;

// for (int row = 0; row < n; row++){
//     for (int col =0; col < row + 1; col++){
//         cout << col + 1;
//     }
//     //reverse printing
//     for (int col = row; col >=1; col--){
//         cout << col;
//     }
//     cout << endl;
// }

// //-------------------------------------------------------
//     for (int row = 0; row < n; row++){
//         for(int col = 0; col < row + 1; col++){
//             cout << col + 1;
//         }
//         cout << endl;
//     }
// //------------------------------------------------------
//     for(int row = 0; row < n; row++){
//         for (int col = 0; col < row + 1; col++){
//             cout << row+1;
//         }
//         cout << endl;
//     }
}
