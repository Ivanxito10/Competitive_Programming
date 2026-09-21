#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n ,x;
    cin >> t;
    while(t--){

    cin >> n;
    vector <int> p(2*n +1);
    int frec [2*n + 1] = {};
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            p[i+j] = x;
            frec[x] = 1; 
        }
    }

    for (int i = 1; i <= 2* n; i++)
    {
        if(frec [i] == 0){
            p[1] = i;
            break; 
        }
    }
    

    for (int i = 1; i <= 2*n; i++)
    {
        cout << p[i] << '\t';
    }
    }
    return 0;
}