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

queue<int> q;
deque<int> dq;

void push(int x){
    q.push(x);
    while(!dq.empty() && dq.back() > x) dq.pop_back();
    dq.push_back(x);
}

void pop(){
    if(q.front() == dq.front()) dq.pop_front();
    q.pop();
}


void solve(){
  ll n,k;
  cin>>n>>k;
  ll x,a,b,c;
  cin>>x>>a>>b>>c;

  vector<ll>aa(n);
  aa[0]=x;
  for(int i=1;i<n;i++){
    aa[i]=(aa[i-1]*a+b) % c;
  }

  for(int i=0;i<k;i++){
    push(aa[i]);
  }
  int ans=dq.front();
  
  for(int i=k;i<n;i++){
     push(aa[i]);
     pop();
     ans ^=dq.front();
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
  

  

