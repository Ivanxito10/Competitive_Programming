#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> prrf(n + 1, 0);
    vector<ll> prrf2(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        prrf[i + 1] = prrf[i] + v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        prrf2[i + 1] = prrf2[i] + v[i];
    }

    int m;
    cin >> m;

    while (m--)
    {
        int x, l, r;
        cin >> x >> l >> r;
        if(x==1){
            cout << prrf[r] - prrf[l-1] << endl;
        }else{
            cout << prrf2[r]-prrf2[l-1] << endl;
        }
    }

    return 0;
}