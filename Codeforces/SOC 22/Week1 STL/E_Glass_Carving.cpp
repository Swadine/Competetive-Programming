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

int main(){
    // https://codeforces.com/gym/380573/problem/E
    // Here we make two arrays of set containing the sizes of the cuts and the positions and we do realise that the 
    // x and y coordinates problems are separate we only need the max diff in x and y axes and multiply them to get the
    // required max area. We encounter a cut, we find the iterator right above that cut position, and use prev()
    // function to get the lower iterator , then dereference it, add the diff between the upper bound & x and the lower bound & x
    // to the diff set, remove the pre existing diff. We use multiset as many repetitions can occur in diff AND WE 
    // CANT IGNORE THE REPETITIONS IN DIFF, UNLIKE WE CAN IN cut.
    int w,h,n; cin >> w >> h >> n;
    set<int> cut[2];//array(size=2) of sets
    multiset<int> diff[2]; // 0- x axis and 1- y axis
    diff[0].insert(w); diff[1].insert(h);     
    cut[0].insert(0); cut[0].insert(w);
    cut[1].insert(0); cut[1].insert(h); //we inputted all the sizes of cuts and the positions of the cuts

    while(n--){
        char c; cin >> c;
        int x; cin >> x;
        int i = (c=='H'); //smart way to avoid using if else 
        
        int aft=*(cut[i].lower_bound(x)), bef=*prev(cut[i].lower_bound(x)); //set.upper_bound(x) gives the next element 
        //which is strictly greater than x, in the set, and set.lower_bound(x) gives the element greater than or equal to
        // x, so we gotta use prev(set.lower_bound(x)) or set.lower_bound(x)-1 to get the lower bound iterator.
        diff[i].erase(diff[i].find(aft-bef));
        diff[i].insert(aft-x); diff[i].insert(x-bef);
        cut[i].insert(x);
        cout<< (ll)(*prev(diff[0].end())) * (*prev(diff[1].end())) << endl;
    }
    
    return 0;
}