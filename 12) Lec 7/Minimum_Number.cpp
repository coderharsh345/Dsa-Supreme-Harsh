#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {2,4,6,10,3,7,9,12,56,43,21};
    int size = 10;

    int minNum = INT_MAX;

    for(int i = 0 ; i < size; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }    
    cout << "Minimum in Array is : "<< minNum << endl;
}
