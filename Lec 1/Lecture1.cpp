#include<iostream>
using namespace std;

int main(){

// doubtful
// // Print all digit of number
// int n;
// cout << "Enter the number: ";
// cin >> n;
// int temp = n;
// for( ; temp !=0; temp++){
//     cout << n%10 << endl;
// }

// // Is n number is divisible by m
// int n, m;
// cout << "Enter the number n: "<< endl;
// cin >> n;
// cout << "Enter the number m: "<< endl;
// cin >> m;
// if ( n % m == 0){
//     cout << "Divisible" << endl;
// }
// else{
//     cout << "Not Divisible" << endl;
// }

// //Average of N number
// int n, sum =0;
// cout << "Enter the number: "<< endl;
// cin >> n;

// for(int i = 1; i < n; i++){
//     sum = sum + i; 
// }
// int avg = sum / n;
// cout << "Average of N number is: "<< avg << endl;

// // Is number is Armstrong
// int n, num,temp, sum = 0, digit;
// cout << "Enter n: "<< endl;
// cin >> n;
// cout << "Enter num: "<< endl;
// cin >> num;
// temp = num;
// if (temp != 0){
//     digit = temp % 10;
//     temp = temp / 10;
//     sum = sum + (digit * digit * digit);
// }
// else {
//     if( num  == sum){
//         cout << " Number is Armstrong";
//     }
//     else{
//         cout << "Number is not Armstrong";
//     }
// }

// //Sum of N number;
// int n, sum = 0 ;
// cout << "Enter the number: "<< endl;
// cin >> n;

// for ( int i = 1; i <= n; i++){
//     sum = sum +i;
// }
// cout << "Sum is: "<< sum << endl;

// //Area of Circle
// int r;
// float area;
// cout << "Radius is: ";
// cin >> r;
// area = 3.14 * r * r;
// cout << "Area of circle is: " << area << endl;

// // Add n number from user.
// int n, num;
// cout << "Enter the number how input you want: " << endl;
// cin >> n;
// int sum = 0;
// for( int i = 1; i <= n; i++){
//     cout << "Enter your number: ";
//     cin >> num;
//     sum = sum + num;
// }
// cout << "Sum is: "<< sum << endl;

// // Print Max of three number
// int n1, n2, n3;
// cout << "Enter the number 1: " << endl;
// cin >> n1;
// cout << "Enter the number2 : " << endl;
// cin >> n2;
// cout << "Enter the number3 :" << endl;
// cin >> n3;

// if((n1 > n2) && (n1 > n3)){
//     cout << "Number 1 is greater: "<< n1 << endl;
// }
// else if((n2 > n1) && (n2 > n3)){
//     cout << "Number 2 is greater: "<< n2 << endl;
// }
// else{
//     cout << "Number 3 is greater: "<< n3 << endl;
// }

// //Print  1 to N only Even number
// int n;
// cout << "Enter Number: "<<endl;
// cin >> n;

// for(int i = 2; i<=n; i+=2){
//     cout << i << endl;
// }

// // Print 1 to n but only odd number
// int n;
// cout << "Enter the number: "<< endl;
// cin >> n;

// for(int i = 1; i <= n; i = i+2){
//     cout << i << endl;
// }

// // Triangle is valid or not
// int a, b, c;
// cout << "Enter the first side" << endl;
// cin >> a;

// cout << "Enter the Seocond side" << endl;
// cin >>  b;

// cout << "Enter the third side" << endl;
// cin >> c;

// if(a+b > c){
//     cout << "Valid Triangle" << endl;
// }
// else if (b+c > a){
//     cout << "Valid Triangle" << endl;
// }
// else if( c+a > b){
//     cout << "Valid Triangle" << endl;
// }
// else{
//     cout<< "Not Valid Triangle" << endl;
// }

// //Check prime number or not
// int n;
// cout << "Enter the number: "<< endl;
// cin >> n;

// for ( int num =2; num < n; num++){
//     if( n % num == 0){
//         cout << "Not prime number" << endl;
//         break;
//     } 
//     else{
//         cout << "Not Prime Number"<< endl;
//         break;
//     }
// cout << "Prime Number "<< endl;
// }

// // Factorial of Number
// int n;
// cout << "Enter the number: " << endl;
// cin >> n;

// int i = 1, ans = 1;
// for ( ; i <= n; i++){
//     ans = ans * i; 
// }
// cout <<  ans << endl;


// //Counting N to 1
// int n;
// cout << "Enter number: "<< endl;
// cin >> n;

// for (int i = n; i >= 1; i--){
//         cout << i << endl; 
// }

// // Find a Simple Interest
// int p,r,t,SI;
// cout << "Enter the principal: "<< endl;
// cin >> p;

// cout << "Enter the rate of interest: "<< endl;
// cin >> r;

// cout <<"Enter the Time: " << endl;
// cin >> t;

// SI = (p*r*t)/100;

// cout << "Simple Interset is: "<< SI << endl;

// // Perimeter of Triangle
// int a,b,c;
// cout << "Read a: " << endl;
// cin >>  a;

// cout << "Read b: "<< endl;
// cin >> b;

// cout << "Read c: "<< endl;
// cin >>  c;

// int perimeter = a + b + c;

// cout << "Perimeter of Triangle: "<< perimeter << endl;


// //Printing counting 1 to N
// int n;
// cout << "Enter the number: "<< endl;
// cin >> n;

// for ( int i = 1; i <= n; i++){
//    cout << i << endl;
    
// }

// // Check the number is positive negative or zero.
// int n;
// cout << "Enter the number: "<< endl;
// cin >> n;

// if(n > 0){
//     cout << "Positive number is: " << n << endl;
// }
// else if( n < 0){
//     cout << "Negative number is: "<< n << endl;
// }
// else{
//     cout << "Zero is: "<< n << endl;
// }

// // Student grade system
// int marks;
// cout << "Enter the marks: "<< endl;
// cin >> marks;

// if (marks >=90){
//     cout << "A" << endl;
// }

// else if(marks >=80){
//     cout << "B" << endl;
// }
// else if(marks >=60){
//     cout << "C" << endl;
// }
// else if(marks >= 40){
//     cout << "D" << endl;
// }
// else{
//     cout << "F" << endl;
// }


// // check number is even or odd
// int n;
// cin >> n;
// if (n % 2 == 0){
//     cout << n << " is even" << endl;
// }
// else{
//     cout << n << " is odd" << endl;
// }

// //Circumference of Circle
// int r, cir;
// cout << "Enter the radius: " << endl;
// cin>> r;

// cir = 2 * 3.14 * r;

// cout << "Circumference of circle is: " << cir << endl;


// // Add two number;
// int a,b, add;
// cout << "Enter the First number: " << endl;
// cin>> a;

// cout << "Enter the Second number: " << endl;
// cin>> b;

// add = a + b;

// cout << "Add of two number is: " << add << endl;


// //Average of two number:
// int a,b, avr;
// cout << "Enter the First number: " << endl;
// cin>> a;

// cout << "Enter the Second number: " << endl;
// cin>> b;

// avr = (a+b)/2;

// cout << "Average of two number is: " << avr << endl;


// //Multiplication of two number
// int a,b, mul;
// cout << "Enter the First number: " << endl;
// cin>> a;

// cout << "Enter the Second number: " << endl;
// cin>> b;

// mul = a * b;

// cout << "Mutiplication is: " << mul << endl;

// //Difference of two number
// int a,b, diff;
// cout << "Enter the First number: " << endl;
// cin>> a;

// cout << "Enter the Second number: " << endl;
// cin>> b;

// diff = a - b ;

// cout << "Difference is: " << diff << endl;

}