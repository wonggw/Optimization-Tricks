#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define SZ(v) ((ll)(v).size())  
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(ll i=(a);i<=(b);++i)

const int MAX = 1e6;

/*
Problem: Comeup with different letter combination from the old phone keypad.
Input: string digits - "23"
*/
vector<string> vec = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" },ans;

void backtrack(string current, string master, int index) {
    if (index == master.length()) { ans.push_back(current); return; }
    for (auto it : vec[master[index] - '0']) { backtrack(current + it, master, index + 1); }
}

void backTracking(){
    string digits = "23";
    backtrack("", digits, 0);
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << "\n";
    ans.clear();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        backTracking();
    }
}