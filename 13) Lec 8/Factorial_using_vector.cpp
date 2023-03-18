#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int getfactorial(vector<int> userList){
    int ans = 1;
    for(int i = 0; i <= userList.size(); i++){
        ans = ans * i;
    }
    return ans;
}

int main() {
    int n, userVals;
    vector<int> userList;
    vector<int> factorialList;
    int i;
    int j;
    
    cout << "How many value you want to Enter: " << endl;
    cin >> n;

    for (i = 0; i < n; ++i) {
        cout << "Enter your "<< i << "th value : ";
        cin >> userVals;
        userList.push_back(userVals);
    }

    for (i = 0; i < n; i++) {
        int fact = getfactorial(userList);
        factorialList.push_back(fact);
    }
        cout << factorialList.at(i) << " ";

    return 0;

}