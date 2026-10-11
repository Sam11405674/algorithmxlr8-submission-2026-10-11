#include <bits/stdc++.h>
using namespace std;

//=======================================================================================================
/*Approach 1: Recursion approach.
 You can reach to nth step from either n-1 step or n-2 step.
 same to be applied to each step, following the top to bottom approach.
 complexity will be O(2^n)
*/

/* 
  int climbStairsApproach1(int n){
    if(n<=2)
      return n;

     return climbStairsApproach1(n-1)+climbStairsApproach1(n-2);
}
*/

// ========================================================================================================
/*Approach2: Optimized (bottom up array)
             Following bottom to top approach, we already know for n=1 -> 1 steps and for n=2 -> 2 steps.
             Instead of calculating for each step again, use the result from the previous steps.
             More like having the array for it ---> Dynamic programming.

  Complexity: O(n), with the space complexity of O(n).           
*/     

/*
int climbStairsApproach2(int n){
    if(n<=2)
    return n;

     vector<int> ways(n + 1);
     ways[1] = 1;
     ways[2] = 2;

    for(int i=3;i<=n;i++){
      ways[i] = ways[i-1]+ways[i-2];
    }
    return ways[n];
 }
 */

 /*Approach3: Further Optimized(rolling two variables)
            Instead of using the array for storing the current value, we will be using 2 variables for storing the previous steps value,
            for current value ---> result is the sum of previous 2 values.

 Complexity -> O(n), O(1)   
 */

 int climbStairsApproach3(int n){
     if(n <= 2){
       return n;
     }

     int prev2 = 1;
     int prev1 = 2;

     for(int i=3; i<=n; i++){
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
     }

     return prev1;
 }      

int main() {
    int n;
    cin >> n;

    // Write your solution here.
    // Print the number of distinct ways to climb n steps, taking 1 or 2
    // steps at a time.
    // cout<<climbStairsApproach1(n)<<endl;
    // cout<<climbStairsApproach2(n)<<endl;
    cout<<climbStairsApproach3(n)<<endl;

    return 0;
}
