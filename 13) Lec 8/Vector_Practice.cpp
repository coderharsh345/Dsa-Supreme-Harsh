#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<int> arr;//Delaration of vector
    // cout << "Vector Craeted" << endl;
    //--------------------------------------------

    // // Creating Vector array:
    // vector<int> arr;
    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;
    // int ans = (sizeof(arr)/sizeof(int));
    // cout << ans << endl;
    // //--------------------------------------------

    // //Printing Vactor
    // vector<int> arr;

    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << endl;
    // }
    // //-------------------------------------------------------
    // //Inserting in Vector array:
    // arr.push_back(5);
    // arr.push_back(6);

    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // //----------------------------------------------------------
    // //Remove in Vector Array:
    // arr.pop_back();//It Removes the last element in the array
    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // //------------------------------------------------------------

    // vector<int> brr(10,-0);
    // cout << "Size of b: "<< brr.size() << endl;
    // cout << "capacity of b: "<< brr.capacity() << endl;

    // for(int i = 0; i< brr.size(); i++){
    //     cout << brr[i] << " ";
    // }
    // cout << endl;

    // vector<int> crr(10,-1);
    // cout << "Size of c: "<< crr.size() << endl;
    // cout << "capacity of c: "<< crr.capacity() << endl;

    // for(int i = 0; i< crr.size(); i++){
    //     cout << crr[i] << " ";
    // }
    // cout << endl;
    // //------------------------------------------------------------
    
    // int n;
    // cout << "Enter the size of array: ";
    // cin >> n;
    // vector<int> arr(n,-101);
    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // //----------------------------------------------------------------

    // vector<int> drr{10,20,20,40,50};
    // for(int i = 0; i < drr.size(); i++){
    //     cout << drr[i] << endl;
    // }
    // cout << endl;
    // cout << "Vector drr is empty or not. "<< drr.empty() << endl;

    // Vector Intialization
    int n;
    vector<int> arr[10];
    vector<int> arr[n];
    vector<int> arr(n,2);
    vector<int> arr{10,20,30}; //Not a good Practice
    vector<int> arr(n);
    //------------------------------------------


    return 0;
}