#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;  // least so far = maximum value in prices array
        int op = 0; // overall profit = 0
        int pist = 0; // profit if sold today = 0
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){ // if we found new buy value which is more smaller then previous one
                lsf = prices[i]; // update our least so far
            }
            pist = prices[i] - lsf; // calculating profit if sold today by, Buy - sell
            if(op < pist){ // if pist is more then our previous overall profit
                op = pist; // update overall profit
            }
        }
    return op; // return overal profit 
}

int main(){
    vector<int> prices {7,1,5,3,6,4};
    int overall = maxProfit(prices);
    cout << "Overall Profit is: "<< overall << endl;
}

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//        int lsf = INT_MAX;  // least so far = maximum value in prices array
//         int op = 0; // overall profit = 0
//         int pist = 0; // profit if sold today = 0
        
//         for(int i = 0; i < prices.size(); i++){
//             if(prices[i] < lsf){ // if we found new buy value which is more smaller then previous one
//                 lsf = prices[i]; // update our least so far
//             }
//             pist = prices[i] - lsf; // calculating profit if sold today by, Buy - sell
//             if(op < pist){ // if pist is more then our previous overall profit
//                 op = pist; // update overall profit
//             }
//         }
//         return op; // return overal profit 
//     }
// };