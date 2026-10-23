#include <bits/stdc++.h>
using namespace std;

// It's a simple 2D Dp grid computation.
// reusing the top and left neighbour directly.
/*

Build an m by n grid dp, with every cell in the first row and first column set to 1. 
For every other cell (i, j), set dp[i][j] = dp[i-1][j] + dp[i][j-1]. 
Return dp[m-1][n-1].

*/

int uniquePaths(int m, int n){
    vector<vector<int>> dp(m, vector<int>(n,1));

    for(int i=1;i<m ;i++){
        for(int j=1;j<n;j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    return dp[m-1][n-1];
}

int main() {
    // Write your solution here.
    int m,n;
    cin>>m>>n;

    cout<<uniquePaths(m,n);

    return 0;
}
