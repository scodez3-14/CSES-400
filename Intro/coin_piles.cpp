#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
  

void solve(){
 int a,b;
 cin>>a>>b;
 int x=2*a-b;
 int y=2*b-a;
 if(x%3==0 && y%3==0 && x>=0 && y>=0){
   cout<<"YES"<<endl;
 }else{
   cout<<"NO"<<endl;
 }
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
  
