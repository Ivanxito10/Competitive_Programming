// Traffic lights

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string cad;
        cin >> cad;
        int maximo = 0;

        if (c == 'g')
        {
            cout << maximo << endl;
        }
        else
        {
            string cad2 = cad + cad;
            
            int posg = -1;
            
            for (int i = cad2.size()-1; i >=0; i--)
            {
                if(cad2[i] == 'g'){
                    posg = i;
                }else if(cad2[i] == c && i <n){
                    maximo = max(maximo, posg - i);
                }
            }
            
            
            cout << maximo << endl;
        }
    }
    return 0;
}