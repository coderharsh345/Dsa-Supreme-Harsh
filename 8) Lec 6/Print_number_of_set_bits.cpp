#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = 0;

    while( n!= 0){
        if( n & 1){
            //found one set bit, so increment set bit count
            ans ++;
        }
        // Right Shift
        n = n >> 1;
    }
    cout << "Num of Set bits: "<< ans << endl;
}