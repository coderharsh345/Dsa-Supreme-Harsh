#include<iostream>
#include<limits.h>
using namespace std;

int main(){

//int arr [] = {2,4,1,6,18,9,0};
//int arr[] = {-2,-3,-4,-5,-6,-7,-8};
//int arr[] = {1,2,3,0,4,5,8};
//int arr[] = {1,2,3,0,-4,-5,-8,-10};
//int arr[] = {0,0,0,0,0,0,0};
//int arr [] = {18,2,4,1,6,9,0};
//int arr [] = {2,4,1,6,9,0,18};
int arr [] = {18,2,4,1,6,9,0,18};
int size = 7;
int maxNum = INT_MIN;

for(int i =0 ; i < size; i++){
    if(arr[i] > maxNum){
        maxNum = arr[i];
    }
}

cout << "Maximum number is : "<< maxNum << endl;

return 0;
}