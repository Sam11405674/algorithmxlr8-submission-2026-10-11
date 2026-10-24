#include <bits/stdc++.h>
using namespace std;

// Approach
// sort the children's appetite array and the cookie cost array.
// By sorting we will get to know based on the appetitle of the children they can eat the cookie.
// if the first child can't eat the cookie, no one can eat it.
// Sorting helps here, instead of wasting time on each children.

// always move to the next cookie. 

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> g(n), s(m);
    for (int i = 0; i < n; i++) cin >> g[i];
    for (int i = 0; i < m; i++) cin >> s[i];

    // Write your solution here.
    // Print the maximum content children.

   sort(g.begin(), g.end());
   sort(s.begin(), s.end());

   int i=0,j=0;
   while(i<(int)g.size() && j<(int)s.size()){
    if(s[j] >= g[i]){
        i++;
    } 
    j++;
   }

   cout<<i;

    return 0;
}
