#include <iostream>
using namespace std;

char getgrade(int marks){
   if(marks >= 90){
    return 'A';
   }
   else if(marks >= 80){
    return 'B';
   }
   else if(marks >= 70){
    return 'C';
   }
   else if(marks >= 60){
    return 'D';
   }
   else{
    return 'F';
   }

}

int main(){
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    char grade = getgrade(marks);
    cout << "Your Grade is: " << grade << endl; 
    
    return 0;
}