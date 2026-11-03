#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n; cin >> n;
        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll cont = 0;
        ll l = 0, r = l;

        while (r < n)
        {
            if (a[r] > 0)
            {
                l++;
                r++;
            }
            else if (a[r] < 0)
            {
                while (a[r]<= 0  && r < n)
                {   
                    a[r]*=-1;
                    r++;
                }
                l = r;
                cont ++;
            }
            else{
                l++;
                r++;
            }
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum << '\n';
        cout <<cont << '\n';
    }

    return 0;
}