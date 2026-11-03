#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, t,a,b;
    cin >> n >> t;
    vector <ll> v(n);
    vector <ll> pffx(n+1);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pffx[0] = 0;

    for (ll i = 1; i < n+1; i++)
    {
        pffx[i] = pffx[i-1] + v[i-1];
    }
    while (t--)
    {
        cin >> a >> b;
        cout << (pffx[b] - pffx [a-1]) << endl;
    }
    
    
    return 0;
}