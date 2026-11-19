#include <bits/stdc++.h>

using namespace std;

void dfs(int nodo);
vector<vector<int>> adj;
vector<bool> visitados;


int main(){

    int n, m; cin >>n >>m;

    adj.resize(n);
    visitados.assign(n,false);

    for (int i = 0; i < m; i++)
    {
        int u , v; cin >>u >>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if(!visitados[i]){
            dfs(i);
            cont ++;
        }
    }
    cout << cont << '\n';
    return 0;
}

void dfs(int nodo){
    visitados[nodo] = true;
    /*
    
    */
    for(int vecino : adj[nodo]){
        if(!visitados[vecino]){
            dfs(vecino);
        }
    }

}