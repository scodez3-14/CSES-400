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

void modadd(ll a,ll b){
  a=(a+b) % M;
}

void solve(){
  int x,y;
  cin>>x>>y;
  int z=x;
  if(y>x) z=y;
  int ans=0;
  for(int i=1;i*i<=z;i++){
     int n=i*z;

     if(n%(z==x ? y : x)==0){
       ans=max(ans,n);
     }
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
  

  
