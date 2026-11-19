#include <bits/stdc++.h>

using namespace std;

void dfs(int nodo);
vector<vector<int>> adj;
vector<bool> visitados;

int main()
{
    int n, m;
    cin >> n >> m;
    adj.resize(n);
    visitados.assign(n,false);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0);
    return 0;
}

void dfs(int inicio)
{

    stack<int> pila;
    pila.push(inicio);
    while (!pila.empty())
    {
        int nodo = pila.top();
        pila.pop();

        if (visitados[nodo])
        {
            continue;
        }
        visitados[nodo] = true;
        cout << nodo << " ";

        for (int vecino : adj[nodo])
        {
            if (!visitados[vecino])
            {
                pila.push(vecino);
            }
        }
    }
}