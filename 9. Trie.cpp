#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define SZ(v) ((ll)(v).size())  
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(ll i=(a);i<=(b);++i)

const int ALPHABET_SIZE = 26;

// trie node 
struct TrieNode{
    struct TrieNode* children[ALPHABET_SIZE];
    bool isEndOfWord;
};

// Returns new trie node (initialized to NULLs) 
struct TrieNode* getNode(void){
    struct TrieNode* pNode = new TrieNode;
    pNode->isEndOfWord = false;
    for (int i = 0; i < ALPHABET_SIZE; i++) pNode->children[i] = NULL;
    return pNode;
}

// If not present, inserts key into trie 
// If the key is prefix of trie node, just 
// marks leaf node 
void insert(struct TrieNode* root, string key){

    struct TrieNode* pCrawl = root;
    for (int i = 0; i < key.length(); i++){
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();

        pCrawl = pCrawl->children[index];
    }

    // mark last node as leaf 
    pCrawl->isEndOfWord = true;
}

// Returns true if key presents in trie, else 
// false 
bool search(struct TrieNode* root, string key){
    struct TrieNode* pCrawl = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;

        pCrawl = pCrawl->children[index];
    }

    return (pCrawl != NULL && pCrawl->isEndOfWord);
}

void trie() {

    string keys[] = { "the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
    int n = sizeof(keys) / sizeof(keys[0]);

    struct TrieNode* root = getNode();

    // Construct trie 
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);

    // Search for different keys 
    search(root, "the") ? cout << "Yes\n" :
        cout << "No\n";
    search(root, "these") ? cout << "Yes\n" :
        cout << "No\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        trie();
    }
}