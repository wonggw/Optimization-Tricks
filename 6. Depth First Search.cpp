#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define SZ(v) ((ll)(v).size())  
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(ll i=(a);i<=(b);++i)

const int MAX = 1e6;
int R, C;
string a[MAX] ;

/* Input:
    3
    3 3
    101
    000
    101
    1 2
    11
    5 5
    10001
    00000
    00000
    00000
    10001
*/
void DFS() {
    cin >> R >> C;
    vector<string> st(R);
    for (int i = 0; i < R; i++) cin >> st[i];

    vector<vector<int> > ds(R, vector<int>(C, -1));
    stack<pair<int, int>> sk; //Stack because DFS

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            if (st[i][j] == '1') ds[i][j] = 0, sk.emplace(i, j);

    int dy[] = { -1,1,0,0 };
    int dx[] = { 0,0,-1,1 };
    auto in = [&](int y, int x) {return 0 <= y && y < R && 0 <= x && x < C; };

    while (!sk.empty()) {
        int y, x;
        tie(y, x) = sk.top(); sk.pop();
        for (int k = 0; k < 4; k++) {
            int ny = y + dy[k],nx = x + dx[k];
            if (!in(ny, nx)) continue;
            if (~ds[ny][nx]) continue;
            ds[ny][nx] = ds[y][x] + 1;
            sk.emplace(ny, nx);
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++) cout << ds[i][j] << "  ";
        cout << "\n";
    }
            
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        DFS();
    }
}