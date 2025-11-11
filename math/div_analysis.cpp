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
int M=1e9+7;

/*
Prime Factorization:
        n = p1^a1 * p2^a2 * ... * pk^ak

1) Number of Divisors:
   A divisor is formed by choosing exponents 0 to ai for each prime pi.
   So the total number of divisors is:
        d(n) = (a1 + 1)(a2 + 1)...(ak + 1)

2) Sum of Divisors:
   For each prime pi, the possible contributions are:
        1 + pi + pi^2 + ... + pi^ai   (a geometric series)
   Sum of geometric series:
        1 + x + x^2 + ... + x^m = (x^(m+1) - 1) / (x - 1)
   Therefore:
        σ(n) = [(p1^(a1+1) - 1)/(p1 - 1)] *
               [(p2^(a2+1) - 1)/(p2 - 1)] *
               ...
               [(pk^(ak+1) - 1)/(pk - 1)]

3) Product of Divisors:
   Each divisor d pairs with n/d and each pair multiplies to n.
   Total divisors = d(n), so there are d(n)/2 such pairs.
   Therefore:
        Product of all divisors = n^(d(n) / 2)
*/
long long pw(long long a,long long b){
    long long r=1;
    while(b){
        if(b&1) r=r*a%M;
        a=a*a%M;
        b>>=1;
    }
    return r;

}
void solve(){
    long long n;
    cin>>n;

    long long d=1;
    long long s=1;
    long long val=1;
    ll prod=1;
    ll pi=1;
    while(n--){
        long long p,a;
        cin>>p>>a;
        d = d*(a+1)%M; // easy

        long long term = (pw(p,a+1)-1+M)%M * pw(p-1,M-2)%M;
        s = s*term%M;

        val = val * pw(p,a) % M;
        ll cnt=pw(p,a*(a+1)/2);
        prod=pw(prod,a+1)*pw(cnt,pi) % M; // product =(new prime)^(k*(k+1)/2) that to the power no of divisor multiply by prev product^(k+1)
        pi=(pi*(a+1)) % (M-1);// after each prime no of div inc by *(k+1) thas why

    }
  


    cout<<d<<" "<<s<<" "<<prod<<endl;
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
  

  
