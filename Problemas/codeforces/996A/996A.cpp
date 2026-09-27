//PROBLEMA GREEDY
//HIT THE LOTTERY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, op = 0;
    cin >> n;

    vector<int> v = {100, 20, 10, 5, 1};
    int i = 0;/*
    while (n > 0)
    {
        if (n >= v[i])
        {
            n = n - v[i];
            op++;
        }
        else
        {
            i++;
        }
    }*/

    //SOLUCION CON MODULO Y DIVISION

    while (n > 0)
    {
        op += n/v[i];
        n = n % v[i];
        i++;
    }
    

    cout << op << '\n';

    return 0;
}