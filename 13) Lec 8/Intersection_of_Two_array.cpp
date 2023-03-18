#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{1,2,3,4,6,8};
    vector<int> brr{3,4,9,-10};
    vector<int> ans;

    //Outer Loop on arr Vector
    for(int i = 0; i < arr.size(); i++){
        int element = arr[i];
        //For every element, run loop on brr
        for(int j = 0; j < brr.size(); j++){
            if(element == brr[j]){
                brr[j] = -1; //Mark Element that element has checked
                ans.push_back(element);
            }
        }
    }

    //Print Answer:
    for(auto value: ans){
        cout << value << " ";
    }
    cout << endl;
    return 0;
}