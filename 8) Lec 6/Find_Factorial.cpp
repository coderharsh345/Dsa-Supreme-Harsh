#include<iostream>
using namespace std;

int getFactorial(int n){
    int ans = 1;
    for(int i = 1; i <=n ; i++){
        ans = ans * i;
    }
    return ans;
}


int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int fact = getFactorial(n);

    cout << "Factorial of Number "<< n <<" is: "<< fact << endl;
}