#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define SZ(v) ((ll)(v).size())  
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(ll i=(a);i<=(b);++i)

const int MAX = 1e6;

void usingSet() {
    const int aSize = 5, bSize = 4;
    int a[aSize] = { 0, 0, -5, 30212,10 };
    int b[bSize] = { -10, 40, -3, 9 };
    int sumOfTwo = -8;
    set <int> aSet;
    for (int i = 0; i < aSize; i++) aSet.insert(-8 - a[i]);
    for (int i = 0; i < bSize; i++)
        if (aSet.find(b[i]) != aSet.end()) cout << "Value found in set: " << b[i] << " ";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        usingSet();
    }
}