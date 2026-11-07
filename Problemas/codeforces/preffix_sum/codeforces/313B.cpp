#include <bits/stdc++.h>

using namespace std;

int main(){
    string c;
    cin >>c;
    vector<int> prfx(c.size(),0);
    for (int i = 0; i < c.size()-1; i++)
    {
        if(c[i] == c[i+1]){
            prfx[i+1] = prfx[i] + 1;
        }else{
            prfx[i+1] = prfx[i];
        }
    }
    
    int m; cin >>m;

    while (m--)
    {
        int l, r; cin >> l >>r;
        int r2 = prfx[r-1] - prfx[l-1];

        cout << r2 << endl;
    }
    

    return 0;
}