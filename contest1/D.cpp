#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    long long n, max = 0;
    cin >> t; 
    for (int i = 0; i < t; i++)
    {   
        cin >>n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            if(((-1* a[i]) > a[i+1])){
                a[i] = -1* a[i];
                a[i+1] = -1* a[i+1];
            }
            max+= a[i];
        }
        
        cout << max << '\n';
        max = 0;
    }
    
    return 0;
}