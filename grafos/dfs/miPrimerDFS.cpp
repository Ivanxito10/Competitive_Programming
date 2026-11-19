#include <bits/stdc++.h>

using namespace std;

void dfs(int nodo);
vector<vector<int>> adj;
vector<bool> visitados;
int nodos = 0;
int main(){
    int n, m; cin >>n>>m;

    adj.resize(n);
    visitados.assign(n,false);

    for (int i = 0; i < m; i++)
    {
        int u, v; 
        cin >> u >>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0);
    cout << '\n';
    cout << "Desde el nodo 0 alcanzo: " << nodos << '\n';
    return 0;
}

void dfs(int nodo){

    visitados[nodo] = true;
    cout << nodo << " ";
    nodos ++;
    for(int vecinos : adj[nodo]){
        if(!visitados[vecinos]){
            dfs(vecinos);
        }
    }
}