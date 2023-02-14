#include<iostream>
using namespace std;

int getdigit(int n){
   if(n > 0){
        while(n != 0){
            int rem = n % 10;
            //return rem;
            cout << "Digit: "<< rem << endl;
            n = n / 10;
        }
    }
}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    getdigit(n);

    return 0;
}