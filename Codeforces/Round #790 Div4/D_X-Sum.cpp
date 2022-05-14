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

void solve(){
    // https://codeforces.com/contest/1676/problem/D
    // Just bruteforce over the 2d array and find the score at each point

    int n, m; cin>>n>>m;
    int v[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    
    int mx=0; 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int scr = 0;
            int p = i, q = j;
            while(p>=0 && q>=0 && p<n && q<m){
                scr += v[p][q];
                p--; q--;
            }
            p=i, q=j;
            while(p>=0 && q>=0 && p<n && q<m){
                scr += v[p][q];
                p++; q--;
            }
            p=i, q=j;
            while(p>=0 && q>=0 && p<n && q<m){
                scr += v[p][q];
                p--; q++;
            }
            p=i, q=j;
            while(p>=0 && q>=0 && p<n && q<m){
                scr += v[p][q];
                p++; q++;
            }
            scr-=v[i][j]*3;
            mx=max( mx , scr );
        }
    }
    cout<<mx<<endl;
}


int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    
    return 0;
}