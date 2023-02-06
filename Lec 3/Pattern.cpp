#include <iostream>
using namespace std;

int main(){


// Ternary Operator
double marks;

  // take input from users
  cout << "Enter your marks: ";
  cin >> marks;

  // ternary operator checks if
  // marks is greater than 40
  string result = (marks >= 40) ? "passed" : "failed";

  cout << "You " << result << " the exam.";

  return 0;


// int n;
// cout << "Enter the number: ";
// cin >> n;

// // Hollow Pyramid
// for(int row = 0; row < n; row++){
//     for (int space =0; space< n-row-1; space++){
//         cout << " ";
//     }
//     if(row == n -1){
//         for(int star = 0; star < (2 * row +1); star++){
//             if (star % 2 == 0){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//     }
//     else{
//         for(int col = 0; col < (2 * row +1); col++){ 
//             if ( col == 0 || col == 2 * row ){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//     }
//     cout << endl;
// }


// // Inverted Full Pyramid
// for (int row = 0; row <n; row++){
//     for(int space = 0; space < row; space++){
//         cout << " ";
//     }
//     for(int star = 0; star< n-row; star++){
//         cout << "* ";
//     }
//     cout << endl;
// }

// // Full Pyramid
// for(int row = 0; row < n; row++){
//     for(int col = 0; col < n-row-1; col++){
//         cout << " ";
//     }
//     for (int star = 0; star < row + 1; star++){
//         cout << "* ";
//     }
//     cout << endl;
// }

// // Inverted Numeric Half Pyramid
// for (int row = 0; row < n; row++){
//     for (int col = 0; col < n-row; col++){
//         cout << col +1 <<" ";
//     }
//     cout << endl;
// }

// // Numeric Half Pyramid
// for (int row = 0; row < n; row++){
//     for (int col = 0; col < row + 1; col++){
//         cout << col + 1 << " ";
//     }
//     cout << endl;
// }

// // Inverted Half Pyramid
// for ( int row = 0; row < n; row++){
//     for( int col = 0; col < n-row; col++){
//         cout << "* ";
//     }
//     cout << endl;
// }

// // Half Pyramid
// for ( int row = 0; row < n; row++){
//     for (int col = 0; col < row+1; col++){
//         cout << "* ";
//     }
//     cout << endl;
// }

// // Hollow Rectangle
// for (int  row = 0; row < n; row++){
//     if ( row == 0 || row == n-1){
//         for (int col = 0; col < n+2; col++){
//             cout << "* ";
//         }
//     }
//     else{
//         for (int i = 0; i < n+2; i++){
            
//             if( i == 0 || i == n+1){
//                 cout << "* ";
//             }

//             else{
//             cout << "  ";
//             }
//         }
//     }
//     cout << endl;
// }

// //Square Pattern
// for ( int row = 0; row < n; row++){
//     for ( int col = 0; col < n; col++){
//         cout << "* ";
//     }
//     cout << endl;
// }

// //Solid Rectangle
// for (int row = 0; row < n; row++){
//     for ( int col = 0; col < n+2; col ++){
//         cout << "* ";
//     }
//     cout << endl;
//}

}