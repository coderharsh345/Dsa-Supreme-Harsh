#include <iostream>
using namespace std;

int main() {

//Correct by me: 
int n;
cin >> n;

  // size of the triangle
  int size = n;
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

//Main Answer:

// #include <iostream>
// using namespace std;

// int main() {
//   // size of the triangle
//   int N; cin>>N;
//   int size = N;
//   // loop to print the pattern
//   for (int i = 0; i < size; i++) {
//     // print column
//     for (int j = 0; j <= i; j++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   return 0;
// }