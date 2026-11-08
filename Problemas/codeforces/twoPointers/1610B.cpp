#include <bits/stdc++.h>

using namespace std;

int verificar(vector<int> &a, int x);

int main(){

    int t; cin >>t;
    while (t--)
    {
        int n; cin >>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        int l = 0; 
        int r = n-1;
        int v = 1;

        while (l<r)
        {
            if(a[l] == a[r]){
                l++;
                r--;
            }else{
                v = verificar(a, a[l]) || verificar(a,a[r]);
                break;
            }
        }
        
        cout << ((v) ? "YES" : "NO") << endl;
    }
    
    return 0;
}

int verificar(vector <int> &a, int x){
    int l = 0;
    int r = a.size()-1;
    while (l<r)
    {
        if(a[l] == a[r]){
            l++;
            r--;
        }else if(a[l] == x){
            l++;
        }
        else if (a[r] == x){
            r--;
        }else{
            return 0;
        }
    }
    return 1;
    
}
