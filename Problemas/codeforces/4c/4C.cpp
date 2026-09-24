#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    map <string,int> mp = {};

    while (n--)
    {
        string c; cin >>c;
        if( !(mp.count(c)) ){ //map.count() - 1 si esta 0 si no
            mp[c] = 0;
            cout << "OK\n";
        }
        else{
            mp[c]++;
            cout << c << mp[c] <<'\n';
        }
    }
    

    return 0;
}