//gerald
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n ; cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int v ; cin >> v;
        s.insert(v);
    }

    cout << n-s.size()<< endl;
    
    return 0;
}