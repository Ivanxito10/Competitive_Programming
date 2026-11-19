#include <bits/stdc++.h>
using namespace std;

void bfs(int inicio);
vector<vector<int>> adj;
vector<bool> visitados;

int main(){

    int n, m; cin >>n>>m;
    adj.resize(n);
    visitados.assign(n,false);

    for (int i = 0; i < m; i++)
    {
        int u, v; cin >>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(0);
    return 0;
}

void bfs(int inicio){

    queue<int> q;
    q.push(inicio);
    visitados[inicio] = true;

    while (!q.empty())
    {
        int nodo = q.front();
        q.pop();
        
        for(int vecino : adj[nodo]){
            if(!visitados[vecino]){
                visitados[vecino] = true;
                q.push(vecino);
            }
        }
    }
    


}