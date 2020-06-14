#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define SZ(v) ((ll)(v).size())  
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(ll i=(a);i<=(b);++i)

bool isCyclic(vector<vector<int>> & adj, vector<int> & visited, int curr)
{
    if (visited[curr] == 1)
        return true;

    visited[curr] = 1;
    for (int i = 0; i < adj[curr].size(); ++i)
        if (visited[adj[curr][i]] != 2)
            if (isCyclic(adj, visited, adj[curr][i]))
                return true;

    visited[curr] = 2;
    return false;
}

void deadlockDetection() {

    int numCourses = 5;
    vector<vector<int>> prerequisites({ { 1,0 }});
    //vector<vector<int>> prerequisites({ { 1,0 },{0,1} });
    vector<vector<int>> adj(numCourses);
    //Make adjacency matrix (Directed graph)
    for (int i = 0; i < prerequisites.size(); ++i)
        adj[prerequisites[i][0]].push_back(prerequisites[i][1]);

    vector<int> visited(numCourses, 0); // 0: Unvisited , 1: Processing , 2: Processed
    for (int i = 0; i < numCourses; ++i)
        if (visited[i] == 0)
            if (isCyclic(adj, visited, i)) { cout << "True\n"; return; }

    cout << "False\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        deadlockDetection();
    }
}