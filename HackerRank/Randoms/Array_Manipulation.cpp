#include <bits/stdc++.h>

using namespace std;

const int N= 1E7+10;
long long a[N];

int main(){
    // https://www.hackerrank.com/challenges/crush/problem
    // I use an awesome exploit of prefix sum in this question. And! beware of the constraints, they're 
    // a bit hard. Array size n can go upto 10^7 so i had to use a global array of long long int because 
    // k can go upto 10^9 so any array element can have value upto m*k = 2 * 10^5 * 10^9 = 2 * 10^14 which 
    // can only be stored in long long int
    int n, m; cin>>n>>m;
    while(m--){
        int l,r,k; cin>> l >> r >> k;
        a[l]+=k;
        a[r+1]-=k;
    }
    long long mx=-1;
    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
        if(a[i]>mx){
            mx=a[i];
        }
    }
    cout<<mx<<endl;
}
