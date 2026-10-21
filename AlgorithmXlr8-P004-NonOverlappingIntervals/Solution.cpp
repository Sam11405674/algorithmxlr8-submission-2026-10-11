#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> intervals(n);
    for (auto& iv : intervals) cin >> iv.first >> iv.second;

    // Write your solution here.
    // Print the minimum number of intervals to remove.

    // Approach.
    // Sort with the End Time and not with start time.
    // Keep the intervals that finishes earliest. 
    // track the start and end, if (newStart < End)--> 
    /* remove [2,3],[1,3] 
        ==> end = 3, newStart = 1
        ==> 1<3 ==> remove the [1,3] as this is already there
        ==> [1,3] will act like an overlapping interval
    */   
    // Idea is sort by end time, keep non-conflicting intervals and count every discarded one as a removal.
    
    // sorting by End time

    sort(intervals.begin(), intervals.end(), [](auto& a, auto& b){return a.second<b.second;});
    int count = 0;
    long long end = LLONG_MIN;

    // traverse the intervals greedly
    for(auto& iv: intervals){
        if(iv.first >= end){
           end = iv.second;
        }else{
            count++;
        }
    }

    cout<< count;

    return 0;
}
