#include <iostream>
using namespace std;

int main(){
// Pattern 61 (Toughest Pattern ever)
int n;
cout<< "Enter the number: ";
cin >> n;
int arr[5][5];
int left(0), top(0),right(4),bottom(4);
while(n--){
    for ( int i =left; i<= right; i++){
        arr[left][i] = n+1;
    }
    for(int i = top; i <= bottom; i++){
        arr[i][bottom] = n +1;
    }
    for(int i = right; i>=left;i--){
        arr[right][i] = n+1;
    }
    for(int i= bottom; i>=top;i--){
        arr[i][left]=n+1;
    }
    left++;
    top++;
    right--;
    bottom--;
}
int size=sizeof(arr)/sizeof(arr[0]);
for (int i =0; i<size;i++){
    for(int j= 0; j<size;j++){
        cout<< arr[i][j]<<" ";
    }
cout<< endl;
}

}


// char ch = -126 ;

// cout << ch << endl;




