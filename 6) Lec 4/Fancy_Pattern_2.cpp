#include<iostream>
using namespace std;

int main(){

int n,count = 1;
cout << "Enter the Number: ";
cin >> n;

for (int row = 0; row < n; row++){
    for (int col = 0; col < 2*row + 1; col++){
        if (col % 2 == 0){
            cout << count;
            count++;
        }
        else{
            cout << "*";
        }
    }
    cout << endl;
  //  cout << count;
}

int count1 = count - n;
for (int row = 0; row < n; row++){
    int count2 = count1;
    for (int col = 0; col < 2*n - 2*row - 1; col++){
        if (col % 2 == 0){
            cout << count2;
            count2 ++;
        }
        else{
            cout << "*";
        }
    }
    count1 = count1 - (n - row - 1);
    cout << endl;
}

}