#include <bits/stdc++.h>
using namespace std;

// Recursion approach.
// You can reach to nth step from either n-1 step or n-2 step.
// same to be applied to each step, following the top to bottom approach.
// complexity will be O(2^n)
int climbStairs(int n){
    if(n<=2)
      return n;

    return climbStairs(n-1)+climbStairs(n-2);
}

int main() {
    int n;
    cin >> n;

    // Write your solution here.
    // Print the number of distinct ways to climb n steps, taking 1 or 2
    // steps at a time.
    cout<<climbStairs(n);

    return 0;
}
