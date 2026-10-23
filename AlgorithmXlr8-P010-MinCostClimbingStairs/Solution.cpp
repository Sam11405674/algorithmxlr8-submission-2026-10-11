#include <bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost){
    int n = cost.size();

    vector<int> dp(n+1, 0);

    for(int i=2;i<=n;i++){
        dp[i] = min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2]);
    }

    return dp[n];
}

int main() {
    // Write your solution here.
    int n;
    cin>>n;
    vector<int> cost;
    int value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        cost.push_back(value);
    }

    int result = minCostClimbingStairs(cost);
    cout<<result;
    return 0;
}
