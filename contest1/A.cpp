#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a,b ,c,ap;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >>a >>b>>c;
        if(a == b){
            cout << c << '\n';
        }
        else if (a == c)
        {
            cout << b << '\n';
        } else cout << a << '\n';
        
    }
    
    return 0;
}