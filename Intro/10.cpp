#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  

void solve(){
 int n;
 cin>>n;
 int p=5;
 int ans=0;
 while(n/p>0){
   ans +=n/p;
   p *=5;
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
  
