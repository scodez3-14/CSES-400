#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define endl '\n'

int n, m;
vector<string> grid;
vector<vector<int>> vis;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, int comp){
    vis[x][y] = comp;
    for(int d = 0; d < 4; d++){
        int nx = x + dx[d];
        int ny = y + dy[d];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m){
            if(grid[nx][ny] == '.' && vis[nx][ny] == 0){
                dfs(nx, ny, comp);
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    grid.resize(n);
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }

    vis.assign(n, vector<int>(m, 0));

    int comp_cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '.' && vis[i][j] == 0){
                comp_cnt++;
                dfs(i, j, comp_cnt);
            }
        }
    }

    cout << comp_cnt << endl;
}

int main(){
    fastio;
    solve();
    return 0;
}

