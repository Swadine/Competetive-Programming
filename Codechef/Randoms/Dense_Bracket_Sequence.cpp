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
    // https://www.codechef.com/problems-old/DENSE
    int n,ans=0; cin>>n;
    string s; cin>>s;
    int i=1,j=n;
    while(i<=j){
        if(i==j){
            ++ans;
            break;
        }
        if(s[i-1]=='(' && s[j-1]==')'){
            ++i; --j;
        }
        else if(s[i-1]=='(' && s[j-1]=='('){
            ++ans; j--;
        }
        else if(s[i-1]==')' && s[j-1]==')'){
            ++i; ++ans;
        }
        else if(s[i-1]==')' && s[j-1]=='('){
            ++i; --j; ans+=2;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}