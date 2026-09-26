#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0)->sync_with_stdio(0);

    int n,k; cin >> n >>k;
    unordered_set <string> st;

    while (n--)
    {
        string c;
        cin >> c;

        if(c.size() >= k){
            st.insert(c.substr(0,k));
        }

    }
    cout << st.size() <<'\n';
    

}