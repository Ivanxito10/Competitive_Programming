#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string c;
    cin >> n ;
    cin  >> c;
    int frec[26] = {}, band = 1;

    for (int i = 0; i < n; i++)
    {
        c[i] = tolower(c[i]);
        frec[c[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if( frec[i] == 0  ){
            band = 0;
            break;
        }
    }
    cout << ((band)? "YES\n" : "NO\n");
    
    
    return 0;
}