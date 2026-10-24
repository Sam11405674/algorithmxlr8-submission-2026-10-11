#include <bits/stdc++.h>
using namespace std;

// Approach
/*
==> Using Bottom-UP DP array, checking for every divisor move for each position against the 
    alrready computed smaller positions.

    Main thing is check for the failure part ---> if dp[i-x] gives you the false.

    Build a boolean dp array of size n+1, with dp[1] = false. For i from 2 to n,
    check every x from 1 to i-1 where i is divisible by x; if dp[i-x] is false for ANY such x, 
    set dp[i] = true and stop checking further divisors for this i. 
    
    Return dp[n].


*/

int main() {
    // Write your solution here.
    int n;
    cin>>n;

    vector<bool> dp(n+1, false);
    for(int i=2;i<=n;i++){
        for(int x=1;x<i;x++){
            if(i%x==0 && !dp[i-x]){
                dp[i] = true;
                break;
            }
        }
    }

    cout<<(dp[n]?"true":"false");

    return 0;
}
