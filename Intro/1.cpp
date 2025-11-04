#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define endl '\n'


 
 
void solve(){
     int n;
    cin>>n;
    while(n!=1){
    cout<<n<<" ";
    if(n&1){
        n=3*n+1;
    }else{
        n=n/2;
    }
}
cout<<1;
 
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    //cin >> t;
    while (t--) solve();
}