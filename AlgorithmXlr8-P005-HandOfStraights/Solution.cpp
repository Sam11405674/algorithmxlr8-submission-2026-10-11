#include <bits/stdc++.h>
using namespace std;

string isNStraightHand(vector<int>& hand, int groupSize)
{
    // main condition-> if array elements are not enough to form the groups return
    if(groupSize<=0 || hand.size()%groupSize !=0)
        return "false";

    // Create a hashMap of counts
    map<int,int> count;
    for(int c: hand){
        count[c]++;
    }

    // traverse greedly, checking the start and frequency

    for(auto& [start, frequency]: count){

        // start will be the smallest elementand frequency will be its counter value.
        if(frequency == 0)
          continue;

        int need = frequency;
        for(int i=0;i<groupSize;i++){

            // consecutively check for the next groupSize eleemnts
            // if anyone is not available, we can't form a same group size elements.
            if(count[start+i]<need){
                return "false";
            }
 
            // if groupSize if possible reduce there occurence.
            count[start+i] = count[start+i] - need;
        }  
    }   

    return "true"; 
}

int main() {
    int n, groupSize;
    cin >> n >> groupSize;
    vector<int> hand(n);
    for (int i = 0; i < n; i++) cin >> hand[i];

    // Write your solution here.
    // Print "true" or "false".

    // Create a map of the count of all numbers
    // Our approach is simple, we need to start each group with the smallest number
    // Create first group, subtract the occurance of those number from the map.
    // Start second group from the lowest number remaining.
    // Greedly traverse and generate the groups of consecutive numbers.

    cout<< isNStraightHand(hand, groupSize);

    return 0;
}
