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
    // https://codeforces.com/contest/1676/problem/F
    // We input the array and store the frequency in a map<int,int>. Then we make another array
    // and this time only store the occurerences that occur more than given integer k times in the new array.
    // Then we iterate over the new array, and all we need to do is just find the max diff between any two
    // elements of the array while keeping in check that all intermediate values are consecutive integers.
    // So we can solve this by a method similar to kadane's algorithm.
    int n,k; cin>>n>>k;
    map<int,int> m; int x;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }

    vi v;
    for(auto i :m){
        if((i.second) >=k)
            v.pb(i.first);
    }

    if(v.size() == 0){
        cout<<-1<< endl;
    }
    else{
        int mx=INT_MIN; int ans[2]={0,0};
        int j=0; int i;

        for(i=1;i<v.size();i++){
            if(v[i]-v[i-1]!=1){
                if((i-j)>mx){
                    mx=i-j;
                    ans[0]=v[j]; ans[1]=v[i-1];
                }
                j=i;
            }
        }
        if((i-j)>mx){
            mx=i-j;
            ans[0]=v[j]; ans[1]=v[i-1];
        }
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
}


int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    
    return 0;
}