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

void modadd(int &a,int b){
  a +=b;
  if(a>=M){
    a -=M;
  }
}
const int N=1'000'001;
int dp[N+1][2];
void solve(){
  int n;
  cin>>n;
  cout<<(dp[n-1][0] + dp[n-1][1]) % M <<endl;
  
}

int main() {
    fastio;
  dp[0][0]=1;
  dp[0][1]=1;
  for(int i=0;i<N;i++){
    modadd(dp[i+1][1],dp[i][0]);
    modadd(dp[i+1][1],4ll*dp[i][1] % M);
    modadd(dp[i+1][0],2*dp[i][0] % M );
    modadd(dp[i+1][0],dp[i][1]);
  }
    int t = 1;
    cin >> t;
    while (t--) {
       solve(); 
    }

    return 0;
}
  

  
