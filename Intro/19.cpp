#include <bits/stdc++.h>
using namespace std;

int mex_vector(const vector<int> &v){
    static bool used[20005];
    for(int x : v) if(x >= 0 && x < 20005) used[x] = true;
    int r = 0;
    while(r < 20005 && used[r]) r++;
    for(int x : v) if(x >= 0 && x < 20005) used[x] = false;
    return r;
}

vector<vector<int>> hack(int n){
  vector<vector<int>>a(n,vector<int>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      a[i][j]=i^j;
    }
  }
  return a;
}


vector<vector<int>> build(int n){
    if(n == 1) return {{0}};

    vector<vector<int>> prev = build(n-1);
    vector<vector<int>> a(n, vector<int>(n));

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            a[i][j] = prev[i][j];
        }
    }

    // fill last row
    for(int j=0;j<n;j++){
        vector<int> take;
        for(int x=0;x<n-1;x++) take.push_back(a[x][j]);
        for(int y=0;y<j;y++) take.push_back(a[n-1][y]);
        a[n-1][j] = mex_vector(take);
    }

    // fill last column
    for(int i=0;i<n;i++){
        vector<int> take;
        for(int x=0;x<i;x++) take.push_back(a[x][n-1]);
        for(int y=0;y<n-1;y++) take.push_back(a[i][y]);
        a[i][n-1] = mex_vector(take);
    }

    return a;
}

void solve(){
    int n;
    cin >> n;
    auto g = hack(n);
    for(auto &row : g){
        for(int x : row) cout << x << " ";
        cout << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}

