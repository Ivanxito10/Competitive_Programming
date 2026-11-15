#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a - 1 == b + 1) && (a - 1 == c))
        {
            cout << "YES" << '\n';
        }
        else if ((a - 1 == b) && (a - 1 == c + 1))

        {
            cout << "YES" << '\n';
        }
        else if ((a + 1 == b) && (a + 1 == c - 1))
        {
            cout << "YES" << '\n';
        }
        else if ((a == b + 1) && (a == c - 1))
        {
            cout << "YES" << '\n';
        }
        else if ((a + 1 == b - 1 ) && (b-1== c))
        {
            cout << "YES" << '\n';
        }
        else if ((a == b - 1) && (a == c + 1))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}