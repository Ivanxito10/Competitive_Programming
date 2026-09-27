//even odds

#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long n , k; cin >>n >> k;
    long long imp = (n+1)/2;
    
    if( imp >= k)
    {
        cout << (2*k) - 1 << endl;
    }else
    {
        cout << 2*(k-imp) << endl;
    }
    
    return 0;
}