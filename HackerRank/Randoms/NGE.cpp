#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> &v){
    vector<int> ret(v.size());
    stack<int> st; 
    for(int i=0; i <v.size(); i++){
        while( !st.empty() &&  v[st.top()] < v[i] ){       // !st.empty() &&  v[st.top()] < v[i]
            ret[st.top()] = v[i];
            st.pop();
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
	

