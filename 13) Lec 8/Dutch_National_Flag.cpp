#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr) {
	for(auto i:arr) {
		cout << i << " ";
	}
	cout << endl;
}

int main(){
//Sort 0's and 1's in order
    vector<int> arr{0,1,1,0,1,0,1,0,0};
    int start = 0;
    int end = arr.size() - 1;

    int i = 0;
    while(i != end){
        if(arr[i] == 0){
            //Sawp Left
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        if(arr[i] == 1){
            //Swap to Right
            swap(arr[end], arr[i]);
            end--;
           
        }
    }

    // while( i != end) {
	// 	cout << "for i="<<i<< " start="<<start <<" end="<< end << endl;
	// 	if(arr[i] == 0) {
	// 		cout << "found zero" << endl;
	// 		cout <<"before swap ";
	// 		printArray(arr);
			
	// 		swap(arr[start], arr[i]);
	// 		cout <<"after  swap ";
	// 		printArray(arr);
	// 		start++;
	// 		i++;
	// 		cout << "now i="<<i<< " start="<<start <<" end="<< end << endl;
	// 	}
	// 	else {
	// 		cout << "found One" << endl;
	// 		cout <<"before swap ";
	// 		printArray(arr);
	// 		swap(arr[end], arr[i]);
	// 		cout <<"after  swap ";
	// 		printArray(arr);
	// 		end--;
	// 		cout << "now i="<<i<< " start="<<start <<" end="<< end << endl;

	// 	}
	// }

    for(auto value: arr){
        cout << value << " ";
    }

    return 0;
}