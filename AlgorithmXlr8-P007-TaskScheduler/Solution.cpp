#include <bits/stdc++.h>
using namespace std;

int main() {
    string tasks;
    int n;
    cin >> tasks >> n;

    // Write your solution here.
    // Count each task letter's frequency. Let maxFreq be the highest
    // count and countMax how many letters share it. Print
    // max((maxFreq - 1) * (n + 1) + countMax, tasks.length()).

    // first find the frequency of each character
    int freq[26] = {0};
    for(char t: tasks) freq[t-'A']++;

    // find the max frequency
    int maxFreq = 0;
    int countMax = 0;
    for(int f: freq){
        maxFreq = max(f, maxFreq);
        if(f == maxFreq) countMax++;
    }

    cout<< max((maxFreq-1)*(n+1)+ countMax, (int)tasks.size());

    return 0;
}
