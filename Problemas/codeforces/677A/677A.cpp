#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, h, c = 0,x;
    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(x>h){
            c+=2;
        }
        else {
            c++;
        }
    }
    cout << c << '\n';
    return 0;
}