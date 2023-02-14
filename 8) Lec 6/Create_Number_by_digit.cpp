#include<iostream>
using namespace std;


int main(){
    int digit [] = {8,2,3};
    int ans = 0;
    for (int i = 0; i < 3; i++){
        ans = ans * 10 + digit;
    } 
    cout <<"Number is: "<< ans << endl;
}