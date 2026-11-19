#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; // Nodos y aristas
    cin >>n >> m;
    vector<vector<int>> adj(n);

    for (int i = 0; i<m; i++)
    {   
        int u,v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for (int vecino: adj[1])
    {
        cout << vecino << " " ;
    }
    

    /*int n = 4;

    //Vectores de enteros
    /* Grafo[0] = lista de vecinos
    /* Grafo[1] = lista de vecinos
    /* Grafo[2] = lista de vecinos
    /* Grafo[3] = lista de vecinos
    
    vector<vector<int>> grafo(n);
    //Grafo no dirigido
    grafo[0].push_back(1);
    grafo[1].push_back(0);

    grafo[1].push_back(3);
    grafo[3].push_back(1);
    
    grafo[0].push_back(2);
    grafo[2].push_back(0);
    
    grafo[2].push_back(3);
    grafo[3].push_back(2);

    for (int i = 0; i < n; i++)
    {
        cout << "Nodo: "<< i<< '\n';
        for (int j = 0; j < grafo[i].size(); j++)
        {
            cout << grafo[i][j] << " ";
        }
        cout << '\n';
    }
    */
    return 0;
}