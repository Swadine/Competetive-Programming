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
    int n; cin>>n;
    if(n==3){
        cout<<3<<" "<<1<<" "<<2<<endl; return;
    }
    cout<<n<<" "<<n-2<<" ";
    for(int i=1; i<=n-4; i++){
        cout<<i<<" ";
    }
    cout<<n-3<<" "<<n-1<<endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}