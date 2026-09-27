#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n ;
    vector <int> v(n);
    
    for (int i = 0; i < n; i++)
    {   
        cin >> k;
        v[k-1] = i+1;
    }

    for( int x : v){
        cout << x << '\n';
    }
    
    
    return 0;
}