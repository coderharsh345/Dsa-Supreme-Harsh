#include<iostream>
using namespace std;

// Question 8
void main(){
    int n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        int k=0;
        for (int j=0; j<n*2-1; ++j) {
		        
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k < 2*i+1){
                if(k==0 || k == 2*i || i == n - 1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                k++;
            }
            else{
                cout<<" ";
            } 
        }
        cout<<endl;
    }
}

// // Question 7
// int main() {
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i ; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < 2 * i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * (i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// // Question 6
// void main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=j+1;j<=n;j++){
//             if(j==i+1 || j == n  || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// // Question 5
// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(n%i == 0){
//           isPrime = false; break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }

// // Question 4
// void main() {
// 		int n;
//         cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// // Question 3
// void main() {
// 	float l, b;
// 	float P = 2* (l+b);
// 	printf("Perimeter= %f", P);
// }

// // Question 2
// void main() {
// 	short i=2300, j=4322;
// 	cout << "i+j="<< (i+j);
// }

// // Question 1
// void main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i \*///i=i+1
// 	cout<<++i;
// }
