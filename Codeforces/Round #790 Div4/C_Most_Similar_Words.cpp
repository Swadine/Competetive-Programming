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
    // https://codeforces.com/contest/1676/problem/C
    // The no of "operations" is just the lexicographic difference between two strings but careful, we'll have
    // to this one by one for each element of the strings.
    int n,m; cin>>n>>m;
    vector<string> v; string s;
    for(int i=0;i<n;i++){
        cin >> s;
        v.pb(s);
    }
    int mn=INT_MAX; int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum=0;
            for(int k=0;k<m;k++){
                sum+=abs(v[i][k]-v[j][k]);
            }
            mn=min(mn,sum);
        }
    }

    cout << mn << endl;
}


int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    
    return 0;
}