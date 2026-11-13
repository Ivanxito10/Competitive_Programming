#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll W; cin >>W;

    vector <ll> peso(n,0);
    vector <ll> valor(n,0);

    for (ll i = 0; i < n; i++)
    {
        cin >> peso[i] >> valor[i];
    }
    
    vector<vector<ll>> dp(n+1,vector<ll> (W+1,0));
    
    for (ll i = 1; i <= n; i++)
    {
        for (ll w = 0; w <= W; w++)
        {
            //NO TOMAR
            dp[i][w] = dp[i-1][w];

            if(peso[i-1] <=w){
                dp[i][w] = max(dp[i][w], dp[i-1][w-peso[i-1]] + valor[i-1]);
            }
        }
        
    }
    cout << dp[n][W] << '\n';

    return 0;
}