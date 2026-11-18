#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<string> st;
    string cad;

    while (n--)
    {   
        cin >>cad;
        if(st.find(cad) != st.end())
        {
            cout << "YES" <<endl;
        }else
        {
            cout <<"NO" <<endl;
            st.insert(cad);
        }
    }
    

    return 0;
}