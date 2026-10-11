#include <bits/stdc++.h>
using namespace std;

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
