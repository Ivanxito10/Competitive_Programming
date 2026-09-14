#include <bits/stdc++.h>
using namespace std;

int main(){
    string c, d;
    int b = 0;
    cin >> c >> d;
    for (int i = 0; i < c.length(); i++)
    {
        c[i]= tolower(c[i]);
        d[i] = tolower(d[i]);
        if(c[i] > d[i]){
            b = 1;
            break;
        } else if (c[i] < d[i]){
            b = -1;
            break;
        }
    }
    cout << b << '\n';
    
    return 0;
}