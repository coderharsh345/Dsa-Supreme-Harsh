#include <iostream>
using namespace std;

bool find(int arr[], int size, int target){

    //Linear Search
    for(int i= 0; i < size; i++){
        if(arr[i] == target){
            return true;
        }
        return false;
    }
}


int main(){

int arr [10] = {2,9,6,7,4,12,15,16,5,10};
int size = 10;

cout << "Enter the Search Target: ";
int target;
cin >> target;

if(find(arr,size,target) == true){
    cout << "Target Found" << endl;
}

else{
    cout << "Target not found" << endl;
}

return 0;

}