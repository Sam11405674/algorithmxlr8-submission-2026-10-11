#include <bits/stdc++.h>
using namespace std;

// We will be doing the memoisation but need not to use some vector or array
// We can use 3 variables as last 3 variables sum is equal to the new one.
// keep track of the last 3 variables.
// Handle the base cases (n=0 returns 0, n=1 or n=2 returns 1) directly.
/* Otherwise, maintain three rolling variables a, b, c representing T(i-3), T(i-2), T(i-1) 
   as i advances from 3 to n; at each step, compute the next value as a+b+c, 
   then shift all three variables forward by one position. After reaching n, c holds the answer.
*/
int tribonacci(int n){
    if(n==0) return 0;
    if(n<=2) return 1;

    int a=0, b=1, c=1;
    for(int i=3;i<=n;i++){
        int d = a + b + c;
        a = b;
        b = c;
        c = d;
    } 
    return c;
}

int main() {
    // Write your solution here.
    int n;
    cin>>n;

    cout<<tribonacci(n);

    return 0;
}
