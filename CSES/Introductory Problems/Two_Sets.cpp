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
    ll n;
    cin >> n;
    ll tsum = (n*(n+1))/2;
    debug1(tsum);
    if(tsum&1){
        cout<<"NO"<<endl;
    }
    else{
        tsum/=2;
        debug1(tsum);
        ll sum=0;
        vll ans1, ans2;
        for(ll i=n; i>=1; i--){
            if((sum+i) <= tsum){
                sum+=i;
                ans1.pb(i);
            }
            else{
                ans2.pb(i);
            }
        }
        cout<<"YES"<<endl;
        cout<<ans1.size()<<endl;
        for(auto x: ans1) cout<<x<<" ";
        cout<<endl;
        cout<<ans2.size()<<endl;
        for(auto x: ans2) cout<<x<<" ";

    }
}
