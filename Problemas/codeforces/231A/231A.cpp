#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{

    int n, posibles = 0;
    cin >> n;
    int a,b,c;

    while (n--)
    {
        cin >> a >>b >> c;
        if((a+b+c) >= 2)
        posibles ++;
    }
    cout << posibles << endl;

    return 0;
}