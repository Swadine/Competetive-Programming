#include <bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE

#define ll long long
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#define rsort(v) sort(v.rbegin(),v.rend())
#define nsort(v) sort(v.begin(),v.end())
#ifndef ONLINE_JUDGE
    #define debug1(n1) cerr << #n1 << " : " << n1 << endl;
    #define debug2(n1,n2) cerr << #n1 << " : " << n1 << " " << #n2 << " : " << n2 << endl;
    #define debug3(n1,n2,n3) cerr << #n1 << " : " << n1 << " " << #n2 << " : " << n2 << " " << #n3 << " : " << n3 << endl;
    #define debug4(n1,n2,n3,n4) cerr << #n1 << " : " << n1 << " " << #n2 << " : " << n2 << " " << #n3 << " : " << n3 << " " << #n4 << " : " << n4 << endl;
    #define debug0() cerr << endl;
#else
    #define debug1(n1) 
    #define debug2(n1,n2)
    #define debug3(n1,n2,n3) 
    #define debug4(n1,n2,n3,n4) 
    #define debug0()
 #endif

void solve(){
    
}

int main(){
    int n; cin>>n;
    int m= 1E9+7;
    int ans=1;
    while(n--){
        ans = ( (ans%m) * 2 )%m;
    }
    cout<<ans<<endl;
}