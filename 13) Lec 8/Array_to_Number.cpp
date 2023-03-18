#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> digit{8,2,3,4,5,7,8,9};
    int ans = 0;
    for(int i =0; i < digit.size(); i++){
        ans = ans * 10 + digit[i];
    }
    digit.push_back(6);
    cout << "Vector Array to Number is: "<< ans << endl;


}

