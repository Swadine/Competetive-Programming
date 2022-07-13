#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/contests/second/challenges/next-greater-element/problem

vector<int> NGE(vector<int> &v){
    vector<int> ret(v.size());
    stack<int> st; 
    for(int i=0; i <v.size(); i++){
        while( !st.empty() &&  v[st.top()] < v[i] ){       // v[st.top()] < v[i] && !st.empty() - DOESNT WORK
            ret[st.top()] = v[i];    // Because if stack is empty st.top() gives runtime error
            st.pop();                // but if !st.empty() is evaluated first, second condition wont be checked
        }
        st.push(i);
    }
    while(!st.empty()){
        ret[st.top()] = -1;
        st.pop();
    }
    return ret;

}

int main()
{
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<int> ng_vec = NGE(v);
    for(int i=0; i<n; i++){
        cout << ng_vec[i] << " ";    
    }
}
	

