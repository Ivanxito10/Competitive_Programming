#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >>t;

    while (t--)
    {
        int n,i; cin >>n;
        i = 3;
        int k, mini = INT_MAX;
        while (i--)
        {
            cin >> k;
            mini = min(mini,k);
        }
        
        cout << (n-mini) << endl;
    }
    
    return 0;
}