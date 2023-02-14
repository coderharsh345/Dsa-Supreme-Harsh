#include <iostream>
using namespace std;


//Correct by Me:
int binaryToDecimal(int b){
    int ans = 0;
    int c=0;
    while(b){
        ans=ans+(b % 10) * (1 << c++);
        b/=10;
    }
    return ans;
}

//addead by Me:
int main(){
    int b;
    cin >> b;
    int dec = binaryToDecimal(b);
    cout << "Decimal is : "<<dec << endl;
}

//Main Answer:

// int binaryToDecimal(int b){
//     int ans = 0;
//     int c=0;
//     while(b){
//         ans=ans+(b % 10) * (1 << c++);
//         b/=10;
//     }
//     return ans;
// }