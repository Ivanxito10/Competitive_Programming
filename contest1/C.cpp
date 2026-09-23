#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t,unos=0, primero = 0, cuadrado = 1;
    cin >>t;
    while (t--)
    {
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            unos = 0;
            for (int j = 0; j < n; j++)
            {   
                if( (v[i][j] == '1' ) ){
                    unos++;
                }
            }

            if (unos > 0){
                    if(primero == 0 ){
                        primero = unos;
                    } else if (unos !=primero){
                        cuadrado = 0;
                    }
                }
        }

        if(cuadrado){
            cout << "SQUARE\n";
        }else{
            cout << "TRIANGLE\n";
        }
        cuadrado = 1;
        primero = 0;

    }

    return 0;
}