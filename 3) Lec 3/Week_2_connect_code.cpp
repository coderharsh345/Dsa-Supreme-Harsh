#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter the number: ";
cin >> n;


// Ternary Operator
double marks;

  // take input from users
  cout << "Enter your marks: ";
  cin >> marks;

  // ternary operator checks if
  // marks is greater than 40
  string result = (marks >= 40) ? "passed" : "failed";

  cout << "You " << result << " the exam.";

  return 0;



}