 #include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
    cout<<endl;
}

int dp[1001][1001];
int M=1e9+7;
void solve(){ 
  int n;
  cin>>n;
  vector<vector<char>> a(n,vector<char>(n));
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }

  if(a[0][0]!='*') dp[0][0]=1;

  // dp[i][j] denote no of paths from 00 to ij
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i][j]!='*'){
        // two state right i,j+1 and i+1,j
       if(i>0) dp[i][j] =(dp[i][j] +dp[i-1][j] ) % M;
       if(j>0) dp[i][j]= (dp[i][j] + dp[i][j-1] ) % M;
       
    }
  }
  }
  cout<<dp[n-1][n-1]<<endl;


}

int main(){
    fastio;
    memset(dp,0,sizeof(dp)); 
    int t = 1;
    // cin >> t;
    while (t--) {
       solve(); 
    }

    return 0;
}
  

  
