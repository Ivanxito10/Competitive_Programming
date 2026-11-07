#include <bits/stdc++.h>

using namespace std;


int main(){
    int n; cin >>n;
    unordered_map <int,int> mp;
    int maxb = -1;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        mp[k]++;
        maxb = max(maxb,mp[k]);
    }
    cout << maxb << endl;
    return 0;
}