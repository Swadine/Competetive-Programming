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



int main(){
    // https://codeforces.com/gym/380573/problem/C
    // Just keep track of frequency and keep decresing frequency until it hits 1, as we iterate over the array, then
    // we have the rightmost unique element
    int n; cin>>n;
    vi a(n);
    map<int,int> m;
    int ct=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(m.find(a[i])==m.end())
            ct++;
        m[a[i]]++;
    }
    cout<<ct<<endl;
    for(int i=0; i<n; i++){
        if( m[a[i]]>1 ){
            m[a[i]]--; continue;
        }
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}