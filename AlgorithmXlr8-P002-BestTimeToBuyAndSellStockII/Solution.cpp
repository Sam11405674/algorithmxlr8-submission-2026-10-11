#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];

    // Write your solution here.
    // Print the maximum total profit.
    int profit = 0;
    for(int i=1;i<n;i++)
    {
        if(prices[i]>prices[i-1]){
            profit += prices[i]-prices[i-1];
        }
    }
    
   cout<< profit;


    return 0;
}
