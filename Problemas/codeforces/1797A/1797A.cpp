#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n , a , b;
    string c;
    cin >> n >> a>> b;
    cin >> c;

    if(c[a-1] == c[b-1])
    cout << 0;
    else cout << 1;
    return 0;
}