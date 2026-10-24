#include <bits/stdc++.h>
using namespace std;

// Approach
/*
==> Using Bottom-UP DP array, checking for every divisor move for each position against the 
    alrready computed smaller positions.

    Main thing is check for the failure part ---> if dp[i-x] gives you the false.


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
