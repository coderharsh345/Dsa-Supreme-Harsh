#include<iostream>
using namespace std;

int getarea(int r){
    int area = 3.14 * r * r;
    return area; 
}

int main(){
    int r; 
    cout << "Enter the Radius: ";
    cin >> r;

    int area = getarea(r);
    cout << "Area of Circle is: "<< area << endl;

    return 0; 
}