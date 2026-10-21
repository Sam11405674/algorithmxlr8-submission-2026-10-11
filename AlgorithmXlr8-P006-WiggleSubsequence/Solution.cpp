#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print the length.

    // we will be following a DP based 2 constant approach, up an down.
    // while traversing we will be update both the variable to ge the values
    // if value is increasing i.e its a UP. up = down+1,
    // if value is decreasing i.e its a down. down = up+1
    // if both the values are some, dont do anything.

    int up = 1, down =1;
    for(int i=1;i<n;i++){
        if(nums[i]> nums[i-1])// its a up
           up = down+1;
        else if(nums[i]<nums[i-1])
           down = up+1;   
    }

    // at the end print the max of up and dowwn

    cout<< max(up,down);

    return 0;
}
