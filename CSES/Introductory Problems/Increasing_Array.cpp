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


int main(){
    int n; cin>>n;
    ll arr[n]; ll ans=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            ans += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout<<ans<<endl;
    return 0;
}