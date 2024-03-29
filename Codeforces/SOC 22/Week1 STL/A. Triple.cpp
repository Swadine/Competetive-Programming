#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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

void solve(){
    // https://codeforces.com/gym/380573/problem/A
    //Make an array, take input into it, make a hash map parrallely and keep a track of frequencies. Then iterate over array
    //and check if frequency of that element >=3 in the hash map.
    int n; cin>>n;
    vi v(n);
    map<int,int> m;
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m[v[i]]>=3){
            cout<<v[i]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}


int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    
    return 0;
}
