#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Left Rotate ans array by one element

    vector<int> arr{1,2,3,4,5,6,7,8,9,10};
    for(int i = 1; i < arr.size(); i++){
        swap(arr[i-1], arr[i]);
    }

    //Printing
    for(auto val: arr){
        cout << val <<" ";
    }
    return 0;
}

