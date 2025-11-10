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
    int n; 
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int mx=0;
    for(int x:a) if(x>mx) mx=x;

    vector<int> cnt(mx+1);
    for(int x:a) cnt[x]++;

    for(int g=mx;g>=1;g--){
        int c=0;
        for(int j=g;j<=mx;j+=g){
            c+=cnt[j];
            if(c>1){
                cout<<g;
                return;
            }
        }
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
  

  
