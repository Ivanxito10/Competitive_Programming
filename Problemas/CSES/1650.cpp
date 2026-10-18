#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, q ; cin >>n >>q;
    vector<ll> x(n);
    vector<ll> pffx(n+1,0);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        pffx[i+1] = pffx[i] ^ x[i]; 
    }
    
    while (q--)
    {   
        int a, b; cin >> a >> b;
        cout << (pffx[b] ^ pffx[a-1]) << endl;
    }
    
    return 0;
}