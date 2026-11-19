#include <bits/stdc++.h>

using namespace std;

void dfs(int i, int j);

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n, m;
vector<string> adj;

int main()
{

    cin >> n >> m;
    adj.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> adj[i];
    }

    int habitaciones = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (adj[i][j] == '.')
            {
                habitaciones++;
                dfs(i, j);
            }
        }
    }
    cout << habitaciones << '\n';

    return 0;
}

void dfs(int i, int j)
{
    stack<pair<int, int>> pila;
    pila.push({i, j});
    adj[i][j] = '#';

    while (!pila.empty())
    {
        int cx = pila.top().first;
        int cy = pila.top().second;
        pila.pop();

        for (int k = 0; k < 4; k++)
        {
            int nx = cx + dx[k];
            int ny = cy + dy[k];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && adj[nx][ny] == '.')
            {
                adj[nx][ny] = '#';
                pila.push({nx, ny});
            }
        }
    }
}