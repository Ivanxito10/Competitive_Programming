#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, luck = 0;
    cin >> n;
    string c = to_string (n);
    int i;
    for (i = 0; i < c.size() ; i++)
    {
        if(c[i] == '4' || c[i] == '7'){
            luck ++;
    }}

    if( luck == 4 || luck == 7){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
        
    return 0;
}