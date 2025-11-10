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

void solve(){ 
  int x;
  cin>>x;
  set<int>a;
  for(int i=1;i*i<=x;i++){
    if(x%i==0){
      a.insert(i);
      if(i*i!=x){
       a.insert(x/i);
      }
    }
  }

  cout<<a.size()<<endl;

}

int main() {
    fastio;
    
    int t = 1;
     cin >> t;
    while (t--) {
       solve(); 
    }

    return 0;
}
  

  
