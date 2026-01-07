 #include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define M 1000000007  


#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
    cout<<endl;
}

void modadd(ll &a,ll b){
   a +=b;
   if(a>M){
     a -=M;
   }
}

void solve(){
  int n,m;
  cin>>n>>m;
  vector<int>a(n);
  for(int &i:a) cin>>i;

ll dp[n][m+2];
memset(dp, 0, sizeof(dp));
// dpix denote noo of ways to fill upto i inclusive with last elemt seen so far as x a[i]=x;
  if(a[0]==0){
    for(int x=1;x<=m;x++){
      dp[0][x]=1;
    }
  }else{
    dp[0][a[0]]=1;
  }

  for(int i=1;i<n;i++){
    for(int x=1;x<=m;x++){ 
      // dpi-1 -> dpi
      for(int y:{x-1,x,x+1}){
          if(a[i]!=0 && y!=a[i]) continue;
        if(y>=1 && y<=m) modadd(dp[i][y],dp[i-1][x]);
      }
    }
  }

   ll ans=0;
   for(int x=1;x<=m;x++){
      modadd(ans,dp[n-1][x]);
   }

   cout<<ans<<endl; 
  
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
  

  
