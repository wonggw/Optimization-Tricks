#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int MAX = 1e6;
int j = 0;
char b[MAX];
string s;

void solve() {
    cin >> s;
    stack<int,vector<int>> a;
    a.push(1);
    for (auto c : s){
        if (c >= '0' && c <= '9') a.push(a.top()*(c-'0'));
        if (c == '(') continue;
        if (c == ')') a.pop();
        if ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
           for (int i = 0; i < a.top(); i++)
                b[j++] = c;
    }

    for (int i = 0; i < j; i++) cout << b[i] << " ";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        solve();
    }
}