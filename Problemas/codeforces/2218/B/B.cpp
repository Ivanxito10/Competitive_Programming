#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin >> n;
    while (n--)
    {
        int i = 7;
        int sum =0;
        int maxi = INT_MIN;

        while(i--){
        cin >> k;
        maxi = max(maxi,k);
        sum -= k;
    }
    sum += 2*maxi;
    cout << sum << '\n';
    }
    
    return 0;
}