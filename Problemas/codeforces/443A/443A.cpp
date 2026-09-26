//ANTON AND LETTERS

#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0); //LINEA IMPORTANTE OPTIMIZAR DATOS DE ENTRADA

    int n = 0, l = 0;
    unordered_set<char> s;

    string c;

    getline(cin, c);

    for (int i = 0; i < c.size(); i++)
    {       
            if(c[i] >= 'a' && c[i] <= 'z')
            {
            s.insert(c[i]);
            }
    }

    cout << s.size() << endl;
    

    
    return 0;
}