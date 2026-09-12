#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n;
    cin >> n;
    vector <string> v(n);

    for (int x = 0; x < n; x++)
    {
        cin >> v[x];
    }
    

    for (int i = 0; i < n; i++)
    {
        if(v[i].length() > 10){
            cout << v[i][0] << v[i].length()-2 << v[i][v[i].length()-1] << endl;
        }
        else{
            cout << v[i] << endl;
        }
    }
    
    return 0;
}