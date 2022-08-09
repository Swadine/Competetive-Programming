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
    // https://www.codechef.com/problems-old/SUMPRODSEG
    ll x,y; cin>>x>>y;
    ll ly= sqrt(y);
    while(true){
        if(y%ly==0){
            break;
        }
        ly--;
    }
    ll lx=(x/2), ux=x-lx, uy=(y/ly);
    if(ly>ux || lx>uy){
        if(min(lx,ly)==lx){
            cout<<lx<<" "<<ux<<endl;
            cout<<ly<<" "<<uy<<endl;
        }
        else{
            cout<<ly<<" "<<uy<<endl;
            cout<<lx<<" "<<ux<<endl;
        }
    }
    else{
       cout<<-1<< endl;
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}