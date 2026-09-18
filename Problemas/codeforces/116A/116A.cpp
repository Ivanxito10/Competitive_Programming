#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int e,s, maxi = 0;
    int actual =0;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;
        actual = actual + e -s; 
        maxi = max(maxi, actual);
    }
        cout << maxi << '\n';
    return 0;
}