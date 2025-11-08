#include<bits/stdc++.h>
using namespace std;

string s;
bool vis[7][7];
int ans;

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

bool safe(int x,int y,int d){
    int nx=x+dx[d], ny=y+dy[d];
    if(nx<0||nx>=7||ny<0||ny>=7) return false;
    if(vis[nx][ny]) return false;
    return true;
}

bool corridor(int x,int y){
    bool up = (x==0 || vis[x-1][y]);
    bool down = (x==6 || vis[x+1][y]);
    bool left = (y>0 && !vis[x][y-1]);
    bool right = (y<6 && !vis[x][y+1]);
    if(up && down && left && right) return true;

    bool l = (y==0 || vis[x][y-1]);
    bool r = (y==6 || vis[x][y+1]);
    bool u = (x>0 && !vis[x-1][y]);
    bool d = (x<6 && !vis[x+1][y]);
    if(l && r && u && d) return true;

    return false;
}


void dfs(int x,int y,int i){
    if(i==48){
        if(x==6&&y==0) ans++;
        return;
    }
    if(x==6&&y==0) return;
    if(corridor(x,y)) return;

    char c=s[i];
    if(c!='?'){
        int d=(c=='R'?0:(c=='L'?1:(c=='D'?2:3)));
        if(safe(x,y,d)){
            int nx=x+dx[d], ny=y+dy[d];
            vis[nx][ny]=1;
            dfs(nx,ny,i+1);
            vis[nx][ny]=0;
        }
        return;
    }

    for(int d=0;d<4;d++){
        if(safe(x,y,d)){
            int nx=x+dx[d], ny=y+dy[d];
            vis[nx][ny]=1;
            dfs(nx,ny,i+1);
            vis[nx][ny]=0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>s;
    vis[0][0]=1;
    dfs(0,0,0);
    cout<<ans;
}

