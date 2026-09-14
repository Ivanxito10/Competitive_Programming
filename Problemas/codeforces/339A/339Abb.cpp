#include <bits/stdc++.h>
using namespace std;

int main()
{
    string c;
    char aux;
    cin >> c;
    for (int i = 0; i < c.length()-2; i+=2)
    {
        for (int j = 0; j <c.length()-2; j+=2)
        {
            if( c[j] > c[j+2])
        {
            aux = c[j];
            c[j] = c[j+2];
            c[j+2] = aux;
        }
        }
        
    }
    cout << c<< '\n';

    return 0;
}