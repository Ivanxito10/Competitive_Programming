#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        int co = 0;

        for (int i = 0; i < (n/2); i++)
        {
            if ((s[i] != s[n - i - 1]))
            {
                if(s[i] != c){
                    co++;
                }
                if(s[n-i-1] != c){
                    co++;
                }
            }
        }
        cout << co << '\n';
    }

    return 0;
}