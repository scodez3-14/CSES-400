#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  

void toh(int n,string a,string b,string c ){
  if(n==0) return;
  toh(n-1,a,c,b);
  cout<<a<<" "<<c<<endl;
  toh(n-1,b,a,c);
}

void solve(){
  int n;
  cin>>n;
  cout<<(1<<n)-1<<endl;
  toh(n,"1","2","3");
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
  
