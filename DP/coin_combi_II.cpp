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

const int M=1e9+7;

void solve(){ 
  int n;
  int x;
  cin>>n>>x;
  vector<int>dp(x+1);
  vector<int>c(n);
  dp[0]=1;
  for(int &i:c) cin>>i;
  for(int z:c){
    for(int s=0;s<=x;s++){
      if(s-z>=0){
        dp[s] +=dp[s-z];
      }

      if(dp[s]>=M) dp[s] -=M;
    }
  }

  cout<<dp[x]<<endl;
}


int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
       solve(); 
     

    return 0;
}
  
}
  
