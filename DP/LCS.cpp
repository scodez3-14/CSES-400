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
  vector<int>a(n),b(m);

  for(int &i:a) cin>>i;
  for(int &i:b)  cin>>i;


  ll dp[n+1][m+1];
  memset(dp,0,sizeof(dp));
  // dp ij denote lcs upto i of a and jth of b
  
    for(int i=0;i<=n-1;i++){
      for(int j=0;j<=m-1;j++){
        if(a[i]==b[j]){
          dp[i+1][j+1]=1+dp[i][j];
        }else{
          dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
        }
      }
    }

  cout<<dp[n][m]<<endl;

 vector<int> lcs;
 int i=n, j=m;

 while(i>0 && j>0){
   if(a[i-1]==b[j-1]){
    lcs.push_back(a[i-1]);
    i--; j--;
   }else if(dp[i-1][j] >= dp[i][j-1]){
    i--;
   }else{
    j--;
  }
 }

reverse(lcs.begin(), lcs.end());
for(int i:lcs) cout<<i<<" ";
cout<<endl;

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
  

  
