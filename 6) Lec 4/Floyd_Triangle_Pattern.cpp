#include<iostream>
using namespace std;

int main(){

int n, count = 1;
cout << "Enter the Number: ";
cin >> n;

for (int row = 0; row < n; row++){
    for (int col = 0; col < row + 1; col++){
      cout << count << " ";
      count++;
       
    }
    cout << endl;
  //  cout << count;
}
}