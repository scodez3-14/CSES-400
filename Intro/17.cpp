#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int n = 8;
vector<vector<char>> board(8, vector<char>(8));

bool is_safe(int r,int c){
   if(board[r][c]=='*') return false;

   for(int j=c-1;j>=0;j--)
     if(board[r][j]=='Q') return false;

   for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--)
     if(board[i][j]=='Q') return false;

   for(int i=r+1,j=c-1;i<n && j>=0;i++,j--)
     if(board[i][j]=='Q') return false;

   return true;
}

int recur(int col){
  if(col==n) return 1;
  int ways = 0;
  for(int row=0;row<n;row++){
    if(is_safe(row,col)){
      board[row][col]='Q';
      ways += recur(col+1);
      board[row][col]='.';
    }
  }
  return ways;
}

void solve(){
   for(int i=0;i<8;i++)
     for(int j=0;j<8;j++)
       cin>>board[i][j];

   cout<<recur(0)<<endl;
}

int main() {
    fastio;
    solve();
    return 0;
}

