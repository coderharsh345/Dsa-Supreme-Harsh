#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


void using_index(vector<int>& arr)
{
    // Iterating vector by using index
    for (int i = 0; i < arr.size(); i++) {
        // Printing the element at index 'i' of vector
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
// Driver Code
int main()
{
    // Vector containing all integers elements
    vector<int> arr{ 10, 20, 30, 40, 50, 60 };
 
    // calling using_index() method
    using_index(arr);
 
    return 0;
}