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
    // https://codeforces.com/contest/1676/problem/E
    // We take the array of candy sugar amount, sort it in descending order. One way was - input arr, sort arr, 
    // for loop(q) - use greedy algo, we keep adding val from back of array until a sum > amt to be eaten. This
    // method has time complexity O(n + nlog(n) + q*n) - see constraints this will give SIGTERM.
    // BUT, we can ignore the n+nlog(n) term, but somehow gotta reduce q*n. We cant do anything about q, so gotta 
    // reduce O(n) to O(log(n))- HOW? Whenever ya see log(n) - ITS BINARY_SEARCH!
    // We take O(2n + nlog(n)) to input arr, sort it, make another arr that has all possible of candy selections.
    // Then we do a binary search for each testcase q. 
     
    int T; cin >> T;
    while(T--){
        int n,q; cin>>n>>q;
        vll v(n), p(n);
        for(int i=0;i<n;++i){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        p[0]=v[0];
        for(int i=1;i<n;i++){
            p[i]= p[i-1] + v[i];
        }

        
        while(q--){
            ll val; cin >> val;
            if(val>p[n-1]){  // val cant be produced from given set of candies
                cout<<-1<<endl; 
                continue;
            }
            int l=0, r=n-1, m;
            while(l<=r){
                m = l +(r-l)/2; // avoids integer overflow as m is intitialized in int
                if(p[m]==val){
                    l=m;
                    break;
                }
                if(p[m]>val){
                    r=m-1; 
                }
                else{
                    l=m+1;
                }
            }
            cout<< l + 1<< endl; // +1 because zero indexing and if ith selection from vector p is to be done then
            // no. of steps required is i+1 
        }
    }
    
    return 0;
}
