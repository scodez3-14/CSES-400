#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  
// think in reverse as from 0,0 to i,j so we can mark as 1,2.. need using 8 direction
//
//
int dx[8]={1,2,2,1,-1,-2,-2,-1};
int dy[8]={2,1,-1,-2,-2,-1,1,2};

void solve(){
     int n;
    cin>>n;
    vector<vector<int>> d(n, vector<int>(n, -1));
    queue<pair<int,int>> q;
    d[0][0]=0;
    q.push({0,0});
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for(int k=0;k<8;k++){
            int nx=x+dx[k], ny=y+dy[k];
            if(nx>=0 && nx<n && ny>=0 && ny<n && d[nx][ny]==-1){
                d[nx][ny]=d[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<"\n";
}

}

int main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
       solve(); 
    }

    return 0;
}
  
