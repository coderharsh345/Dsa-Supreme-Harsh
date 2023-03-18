#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    //int arr[] = {10,20,30,40,50,60};
    // int size = 6;
    int arr[] = {5,6,1,9,15};
    int size = 5;
    int temp;

    int start = 0;
    int end = size - 1;

    while(start <= end){
        // if(start == end){
        //     cout << arr[start] <<" ";
        // }
        swap(arr[start], arr[end]);
    // ------------------------------------------------------------------
    //    arr[start] = arr[start] + arr[end];
    //    arr[end] = arr[start] - arr[end];
    //    arr[start] = arr[start] - arr[end];
    // ------------------------------------------------------------------
        // temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
    // ------------------------------------------------------------------
        // arr[start] = arr[start] ^ arr[end];
        // arr[end] = arr[start] ^ arr[end];
        // arr[start] = arr[start] ^ arr[end];

        start++;
        end--;
    }
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}