#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n ,x;
    cin >> t >>n;
    
    
    vector <int> p(2*n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            p[i+j] = x; 
        }
        
    }
    for (int i = 1; i <= 2*n; i++)
    {
        cout << p[i] << '\t';
    }
    return 0;
}