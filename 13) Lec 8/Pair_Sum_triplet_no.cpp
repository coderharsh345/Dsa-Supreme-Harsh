#include<iostream>
#include<vector>
using namespace std;

int main(){

//print all pair whose sum is 9
vector<int> arr{1,3,5,7,2,4,6};
int sum = 9;

for(int i = 0; i < arr.size(); i++){
    int element1 = arr[i];
    //for every element will traverse pair for next element
    for(int j = i + 1; j < arr.size(); j++){
        int element2 = arr[j];
        for(int k = j + 1; k < arr.size(); k++){
            int element3 = arr[k];
            
           // cout << "Pair is (" << element1 << "," << element2 << "," << element3<< ")" << endl;
            if(element1 + element2 + element3 == sum){
                cout << "Pair Found (" << element1 << "," << element2 << "," << element3 << ")" << endl;
            }
            // else{
            //     cout << "Pair not Found (" << element1 << "," << element2 << "," << element3<< ")" << endl;
            // }
        }
    }
}
    return 0;
}