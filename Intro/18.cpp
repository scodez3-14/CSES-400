#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
//raab game 1  

void solve(){
  int n;
  cin>>n;
  int a,b;
  cin>>a>>b;
  if((a==0 ||b==0) &&(a+b !=0) ){
    cout<<"NO"<<endl;
  }else if(a==0 && b==0){
   cout<<"YES"<<endl;
   for(int i=1;i<=n;i++){
       cout<<i<<" ";
       }
   for(int i=1;i<=n;i++){
       cout<<i<<" ";
      }
       cout<<endl;
  }else if(a+b>n){
    cout<<"NO"<<endl;
  }else{
    // for n is 2 -> 0 2, 1 1 
    // n is 3 -> 0 3, 1 1, 2 1,etc
    cout<<"YES"<<endl;
    int rem=n-a-b;
    for(int i=0;i<n;i++){
      cout<<i+1<<" ";
    }
    cout<<endl;

    for(int i=a+1;i<=a+b;i++){
    cout<<i<<" ";
    }
    for(int i=1;i<=a;i++){
      cout<<i<<" ";
    } 
    for(int i=a+b+1;i<=n;i++){
      cout<<i<<" ";
    }
    cout<<endl;
    
  }
}



int main() {
    fastio;

    int t;
    t=1;
    cin>>t;  
    while (t--) {
       solve(); 
    }

    return 0;
}
  
