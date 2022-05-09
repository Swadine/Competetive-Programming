#include <bits/stdc++.h>
#include <deque>
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
    // https://codeforces.com/gym/380573/problem/B
    //Approach- We put one element in deque. For the next element, we have two choices: push_back or push_front.
    //If the element is smaller than the minimum of elements in the deque, we push_front. Else, in all other cases we
    //push_back. This will minimize the lexicographic ordering.
    int n; cin>>n;
    int x; cin>>x; 
    int mn=x; 
    deque<int> d; //just like an array where we can push_front too
    d.push_back(x); 
    for(int i=1; i<n; i++){
        cin>>x;
        mn=min(mn,x);
        if(mn==x){
            d.push_front(x);
        }
        else{
            d.push_back(x);
        }
    }
    for(int i=0; i<n; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    
    return 0;
}