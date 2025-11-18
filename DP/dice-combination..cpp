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
int M=1e9+7;
void solve(){
  int n;
  cin>>n;
  vector<int>dp(n+1);
  dp[0]=1;
  for(int i=0;i<=n;i++){
    for(int j=1;j<=6;j++){
      if(i>=j){
      dp[i]=(dp[i]+dp[i-j]) % M;
      }
    }
  }
  cout<<dp[n]<<endl;
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
  

  
