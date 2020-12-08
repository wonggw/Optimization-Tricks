#include <bits/stdc++.h>
using namespace std;

void BFS(vector<std::vector<char>> input) {
    int R = input.size();
    if (R == 0) return;
    int C = input[0].size();

    vector<vector<int>> ds(R, vector<int>(C, -1));
    vector<vector<int>> pred(R, vector<int>(C, -1));
    queue<pair<int, int>> q; //Queue because BFS

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
        {
            if (input[i][j] == 'S') {
                ds[i][j] = 1;
                q.emplace(i, j);
            }
            else if (input[i][j] == 'E') {
                ds[i][j] = -2;
            }
            else if (input[i][j] == '.') {
                ds[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++) cout << input[i][j] << "\t";
        cout << "\n";
    }

    cout << "\n\n\n" <<"------------------------------------------------------------------------------------"<< "\n\n\n";
    int y, x;
    bool status = false;
    int dy[] = { -1,1,0,0 };
    int dx[] = { 0,0,-1,1 };
    auto in = [&](int y, int x) {return 0 <= y && y < R && 0 <= x && x < C; };
    while (!q.empty()) {
        tie(y, x) = q.front(); q.pop();
        for (int k = 0; k < 4; k++) {
            int ny = y + dy[k], nx = x + dx[k];
            if (!in(ny, nx)) continue;
            else if (ds[ny][nx] == -2) {
                status = true;
                q = queue<pair<int, int>>();
                break;
            }
            else if (ds[ny][nx] != 0) continue;
            ds[ny][nx] = ds[y][x] + 1;
            pred[ny][nx] = k;
            q.emplace(ny, nx);
        }
    }

    if (status == false) {
        cout << "Trapped" << "\n";
        return;
    }
    input[y][x] = '*';
    while (in(y, x)) {
        int movement = pred[y][x];
        int oy = y - dy[movement], ox = x - dx[movement];
        if (input[oy][ox] == 'S') break;
        input[oy][ox] = '*';
        y = oy;
        x = ox;
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++) cout << input[i][j] << "\t";
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<std::vector<char>> input{
                { '#','#','#','.','.','.','#','#','.','.' },
                { '.','.','.','.','#','.','.','.','.','#' },
                { '.','.','.','#','#','#','.','#','.','#' },
                { 'S','#','.','#','.','.','.','#','.','.' },
                { '.','.','.','.','#','.','#','.','.','#' },
                { '.','.','.','.','#','.','.','.','E','#' }
    };
    BFS(input);
}