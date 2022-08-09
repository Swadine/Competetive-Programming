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
    // https://www.codechef.com/submit/PERMGCD
    int n, x; cin >>n>>x;
    bool arr[n+1]={};
    if(x<n){
        cout<<-1<<endl;
    }
    else if(x==n){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<x-n+1<<" "<<x-n<<" ";
        arr[x-n+1]=1;
        arr[x-n]=1;
        for(int i=1;i<=n;i++){
            if(arr[i]==0)
                cout<<i<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }

}