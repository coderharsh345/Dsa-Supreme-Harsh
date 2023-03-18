#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    int arr[] = {1,2,4,6,8,10};
    int sizea = 6;

    int brr[] = {3,4,5,6,7};
    int sizeb = 5;

    vector<int> ans;
    //Intersection logic for Removing Duplicates
    for(int i = 0; i < sizea; i++){
        for(int j = 0; j < sizeb; j++){
            if(arr[i] == brr[j]){
                //Mark element that element is -1
                brr[j] = INT_MIN;
            }
        }
    }

    //Finding union
    for(int i = 0; i < sizea; i++){
        ans.push_back(arr[i]);
    }
    for(int j = 0; j < sizeb; j++){
        if(brr[j] != INT_MIN){ // Jo INT_MIN nahi hai unko push_bvack krdo
            ans.push_back(brr[j]);
        }
    }
    cout <<"Printing Array: "<< endl;
    for(auto value: ans){
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
