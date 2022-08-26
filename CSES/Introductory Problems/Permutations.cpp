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
    if(n==1) cout<<1<<endl;
    else if(n==2 || n==3) cout<<"NO SOLUTION"<<endl;
    else if(n==4) cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
    else{
        for(int i=1; i<=n; i+=2) cout<<i<<" ";
        for(int i=2; i<=n; i+=2) cout<<i<<" ";
        cout<<endl;
    }

}