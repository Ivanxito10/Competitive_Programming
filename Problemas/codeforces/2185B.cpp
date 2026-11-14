#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >>t;

    while (t--)
    {
        int n; cin >>n;
        int j = n;
        int maxi = 0;
        while (n--)
        {
            int k; cin >>k;
            maxi = max(maxi,k);
        }

        cout << maxi*j << '\n';
        
    }
    
    return 0;
}