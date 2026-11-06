#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while (t--)
    {   
        int n; cin >> n;
        vector <int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        int k; cin >>k;
        vector <int> v2(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v2[i];
        }
        vector<int> prff (n+1,0);
        vector<int> prff2 (k+1,0);

        int mjr1 = 0, mjr2 = 0;

        for (int i = 1; i <= n; i++)
        {
            prff[i] = prff[i-1] + v1[i-1];
            mjr1 = max(mjr1,prff[i]);
        }
        for (int i = 1; i <= k; i++)
        {
            prff2[i] = prff2[i-1] + v2[i-1];
            mjr2 = max(mjr2,prff2[i]);
        }
        
        cout << mjr1 + mjr2 << endl;
    }
    

    return 0;
}