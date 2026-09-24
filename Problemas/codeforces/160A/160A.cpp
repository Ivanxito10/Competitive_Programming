#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){

    int n, sumM = 0, mia = 0, mon = 0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sumM += a[i];
    }

    sort(a.begin(),a.end());

    while (mia <=(sumM-mia) )
    {
        mia += a[n-1];
        n--;
        mon ++;
    }
        cout << mon << endl;

    return 0;

}