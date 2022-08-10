#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double 
#define vi vector<int>
#define pi pair<int,int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
// #define rsort(v) sort(v.rbegin(),v.rend())
// #define sort(v) sort(v.begin(),v.end())
#define debug(n1) cout << n1 << endl;
// #define debug(n1,n2) cout << n1 << n2 << endl;
// #define debug(n1,n2,n3) cout << n1 << n2 << n3 << endl;
// #define debug(n1,n2,n3,n4) cout << n1 << n2 << n3 << n4 << endl;
// #define debug() cout << endl;


void solve(){
    // https://www.codechef.com/problems-old/BLIMP
    int n,x,y,mx=0,ans;
    cin>>n>>x>>y;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx=max(v[i],mx);
    }
    if(y>=x){
        ans=ceil((double)mx/y); // OR else (mx+y-1)/y => gives the ceil of mx/y
    }
    else{
        int uy=0;
        for(int i=n-1;i>=0;i--){
            v[i]-=uy*y;
            if(v[i]>0){
                uy+=ceil((double)v[i]/x);
            }
        }
        ans=uy;
    }
    cout<<ans<<endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}