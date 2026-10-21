#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> gas(n), cost(n);
    for (int i = 0; i < n; i++) cin >> gas[i];
    for (int i = 0; i < n; i++) cin >> cost[i];

    // Write your solution here.
    // Print the starting station index, or -1.
    
    // At any point if the total becomes less than 1, that means till that point from the start 
    // there is no possibility to reach there.
    // make start as i+1 and total as 0 ans start calculating from there.
    // finally if total ia >=0 --> print start, else print -1.

    // greedy approach.
    
    int start = 0, tank = 0, total = 0;

    for(int i=0;i<n;i++)
    {
        int diff = gas[i] - cost[i];
        tank += diff;
        total += diff;

        if(tank < 0){
            start = i+1;
            tank = 0;
        }
    }

    int result = total >=0 ? start: -1;

    cout<< result;

    return 0;
}
