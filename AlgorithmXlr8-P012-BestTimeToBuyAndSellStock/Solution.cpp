#include <bits/stdc++.h>
using namespace std;


// Approach is simple
// Just keep track of the minimum value till each selling point.
// on subracting from the minimum value we will get the result.
// keep track of the maximum profit as well.

long long maxProfit(vector<long long>& prices){
    long long minPrice = INT_MAX;
    long long maxProf = 0;
    int n = prices.size();

    for(int i=0;i<n;i++)
    {
       minPrice = min(minPrice, prices[i]);
       maxProf = max(prices[i] - minPrice, maxProf);

    }

    return maxProf;
}

int main() {
    int n;
    cin >> n;
    vector<long long> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];

    // Write your solution here.
    // Print the maximum profit achievable from a single buy followed by a
    // single later sell, or 0 if no profit is possible.


   
    cout<<maxProfit(prices);

    return 0;
}
