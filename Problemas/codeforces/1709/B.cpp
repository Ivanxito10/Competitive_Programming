#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m; cin >>n >>m;
    vector<ll> v(n);
    vector<ll> pffxID(n,0);
    vector<ll> pffxDI(n,0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]>v[i+1]){
            pffxID[i+1] = pffxID[i] + (v[i]-v[i+1]);
        }else{
            pffxID[i+1] = pffxID[i]; 
        }

        if(v[n-1-i]>v[n-i-2]){
            pffxDI[n-i-2] = pffxDI[n-1-i] + (v[n-1-i] - v[n-i-2]);
        }else{
            pffxDI[n-i-2] = pffxDI[n-1-i];
        }
    }
    
    while (m--)
    {
        int a,b; cin >>a >>b;
        if( a < b){
            cout << pffxID[b-1] - pffxID[a-1] <<endl; 
        }else{
            cout << pffxDI[b-1] - pffxDI[a-1] <<endl; 
        }
    }
    
    
    
    return 0;
}