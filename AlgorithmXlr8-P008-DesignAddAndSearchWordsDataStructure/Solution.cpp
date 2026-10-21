#include <bits/stdc++.h>
using namespace std;

struct TrieNode{
    unordered_map<char, TrieNode*> children;
    bool isEnd = false;
};

class WordDictionary{

    public:
        TrieNode* root = new TrieNode();

        void addWord(string word){
             // create a new node
             TrieNode* node = root;
             for(char c : word){
                // check if children does not contain the current character, 
                // create a new node with current char, 
                if(!node->children.count(c)){
                    node->children[c] = new TrieNode();
                }
                node = node->children[c];
             }
             node->isEnd = true;
        }

        bool search(string word){
            return dfs(root, word, 0);
        }

        bool dfs(TrieNode* node, const string& word, int i){
            // end case
            if(i == (int)word.size()) return node->isEnd;
            char c = word[i];
            // extra case of the search when we get " . "
            if(c == '.'){
                for(auto& [ch, child] : node->children){
                   if(dfs(child, word, i+1)) return true;
                }
                return false;
            }
            // normal searching logic
            if(!node->children.count(c)) return false;
            return dfs(node->children[c], word, i+1);
        }
};

int main() {
    // Write your solution here.
    int n;
    cin >> n;

    WordDictionary dictionary;
    vector<string> results;

    for (int i = 0; i < n; i++) {
        string operation, word;
        cin >> operation >> word;

        if (operation == "add") {
            dictionary.addWord(word);
        } 
        else if (operation == "search") {
            results.push_back(dictionary.search(word) ? "true" : "false");
        }
    }

    cout << "[";
    for (int i = 0; i < results.size(); i++) {
        if (i > 0) {
            cout << ",";
        }
        cout << results[i];
    }
    cout << "]" << endl;

    return 0;
}
