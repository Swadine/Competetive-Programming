#include <bits/stdc++.h>

using namespace std;

void solve(){
    // https://www.codechef.com/problems-old/GCDQ
    // I pre-compute the gcd here from 1 to l-1 and from r+1 to n. Using 1 indexing. And then find the gcd
    // of the both results. __gcd function is inbuilt in C++.
    int n,q; cin>>n>>q;
    int a[n+10]={}, f[n+10]={}, b[n+10]={};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        f[i]=__gcd(f[i-1],a[i]);
    }
    for(int i=n;i>=1;i--){
        b[i]=__gcd(b[i+1],a[i]);
    }

    while(q--){
        int l,r ; cin>>l>>r;
        cout<<__gcd(f[l-1],b[r+1])<<endl;
    }
}

int main(){
    int T; cin>>T;
    while(T--){
        solve();
    }
}
