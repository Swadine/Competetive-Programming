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
// #define rsort(v) sort(v.rbegin(),v.rend())
// #define sort(v) sort(v.begin(),v.end())
#define debug(n1) cout << n1 << endl;
// #define debug(n1,n2) cout << n1 << n2 << endl;
// #define debug(n1,n2,n3) cout << n1 << n2 << n3 << endl;
// #define debug(n1,n2,n3,n4) cout << n1 << n2 << n3 << n4 << endl;
// #define debug() cout << endl;

int main(){
    //https://codeforces.com/gym/380573/problem/D
    //We put all elements in a set and as we know set contains unique values which is sorted in ascending order.
    //We just remove the first element of the set and if its empty we know that the set had n=1 or only repeating 
    //elements. Else, we cout out the first element of the set which has to be the second order statistics.
    
    int n; cin>>n;
    set<int> s;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        s.insert(x);
    }
    
    s.erase(s.begin());
    if(s.empty()){
        cout<<"NO"<<endl;
    }
    else{
        cout<<*(s.begin());//Notice- to cout: I dereferenced the first iterator of the set.
    }
    
    return 0;
}