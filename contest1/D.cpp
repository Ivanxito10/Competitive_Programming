#include <bits/stdc++.h>
using namespace std;

#define endl '\n';

int main(){

    int t, b = 0;
    long long n, minx = LLONG_MAX,neg = 0, smax = 0;
    cin >> t; 
    
    while(t --){
        cin >> n;
        vector <int> v (n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0){
                neg ++;
            }
            if(v[i] == 0){
                b = 1;
            }
            smax += abs(v[i]);
            minx = min(minx, abs((long long)v[i]));
        }

        if(b || (neg % 2) == 0){
            cout << smax << endl;
        }else{
            smax -= 2*minx;
            cout <<smax << endl;
        }
        smax = 0; minx = LLONG_MAX; neg = 0; b = 0;
    }
    
    return 0;
}