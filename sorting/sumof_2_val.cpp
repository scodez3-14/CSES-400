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
  int n,x;
  cin>>n>>x;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  map<int,int>hash;
  int f=0;
  for(int i=0;i<n;i++){
    int need=x-a[i];
    if(hash.count(need)){
      cout<<i+1<<" "<<hash[need]+1;
      cout<<endl;
      f=1;
      break;
    }else{
      hash[a[i]]=i;
    }
  }

  if(f==0){
    cout<<"IMPOSSIBLE"<<endl;
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
  

  
