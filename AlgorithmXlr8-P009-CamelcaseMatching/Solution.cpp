#include <bits/stdc++.h>
using namespace std;
/*
 Approach is simple, as its already given in the question that for us the UpperCase value matters.
 So, we can ignore the lowerCase values and concentrate on the Upper case values. 

 Only thing is that the sequence matters. Two pointer Greedy will work here, Greedy because there is no
 other possibility. 

 Approach: Check for the characters of query and pattern, if both matches increment both the pointers, else
           increment only the query pointer. Loop till we reach the end of the pattern.

           Base condition, if both did not match but the querie's character is UpperCase. Return False 

*/
bool isMatch(string& query, string& pattern){
   int i = 0;
   for(char c: query){
     if(i<(int)pattern.size() && pattern[i]==c){
        i++;
     }
     else if(isupper(c)){
        return false;
     }
   }
    return i == (int)pattern.size();

}

vector<bool> camelMatch(vector<string>& queries, string& pattern){
    vector<bool>res;

    for(auto& q:queries){
        res.push_back(isMatch(q, pattern));
    }

    return res;
}

int main() {
    // Write your solution here.
    int n;
    cin>>n;
    
    vector<string> queries;
    vector<bool> result;
    for(int i=0;i<n;i++){
        string query;
        cin>>query;

        queries.push_back(query);
    }
    string pattern;
    cin>>pattern;

    result = camelMatch(queries, pattern);
    cout << "[";
    for(int i = 0; i < result.size(); i++){
        if(i>0)
          cout<<",";

        cout<<(result[i]?"true":"false");  
    }
    cout << "]" << endl;
    return 0;
}
