#include <bits/stdc++.h>

using namespace std;

/*struct punto{
    int x;
    int y;
    punto(int a, int b): x(a);
}*/

int main(){
    vector<vector<int>> mat (10, vector<int>(5,0)); // similar a pila

    //PILA
    stack <int > pi;
    pi.push(5);    
    pi.push(1);    //o(1)
    pi.push(2);
    cout << pi.top() << '\n';
    pi.pop(); //No devuelve nada
    pi.size();    //o(n)
    pi.emplace();

    // cola FIFO

    queue <int> q;
    q.push(2);
    q.push(3);
    q.push(1);
    cout << q.front()<< '\n';

    //deque queue y stack juntos
    deque<int> d;
    d.push_back(5);
    d.push_front(10);

    cout << d.front()<< '\n';
    cout << d.back()<< '\n'; // o(1)


    priority_queue<int> pq; // Montaña de arena algunos pueden llegar arriba dependiendo el tamaño y otros van para abajo
    //solo puedo acceder al elemento de hasta arriba da prioridad
    //internamente crea un arbol binario balanceado
    // min - heap usando inserciones negativas ----------------------------------------< trucazo

    pq.push(5); pq.push(1);pq.push(2);//o (log n)

    cout << pq.top() << '\n';


    // SET CONJUNTO elementos unicos

    set <int> nam;
    nam.insert(5);
    nam.insert(5);//O (log n)
    nam.insert(2);
    nam.insert(6);// no puedo acceder al elemento pero si puedo saber
    //si esta en el conjunto

    if(nam.find(5) != nam.end()){
        cout << "Existe"<< '\n';
        nam.erase(6); // verificar que exista todos los elementos estan ordenados

    }

    for (auto it = nam.begin(); it != nam.end(); it++)
    {
        cout << *it << '\n';
    }
    
    // TABLAS_ HASH UNORDERED_SET funcion hash
    //a enteros
    /*puede ser complejidad o(1) pero las
    funciones no son perfectas*/

    //mejor caso o(1) peor o(n) para operaciones
    //no esta ordenado

    unordered_set<int> hs;

    //parejas

    pair<int,int> par; //puede ser una pareja de lo que sea
    pair<int,int> par2 (5,4); //puede ser una pareja de lo que sea
    par.first = 1;
    par.second = 2;
    //---------------------

    vector <pair<int,int>> v;
    int n; n  =10;
    for (int i = 0; i < n; i++)
    {
        int x,y; cin >> x >>y;

        pair<int,int> p;
    }
    
    //punto (i) = {x,y};  solo para c++ 17 


    //FUSION DE PAIR CON SET cada entrada esta como separada

    //es como elementos flotantes
    //un nodo como con la llave 10 y con el dato 5

    map<int,int> mp;

    mp[10] = 5;
    mp[102] = 2;

    //[10 ^2, 10^3, 10^12]
    /*mp[10^2] = 1
    mp[10^3] = 2
    mp[10^12] = 3
    
    [_,_,_]
    1 2 3
    */

    if(mp.find(5) != mp.end()){
        cout << "Existe\n";

        mp.erase(5);
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << "Key = " << (*it).first << " Dato = " << (*it).second;
    }
    


    unordered_map<int,int> ump;

    struct fraccion
    {
        int p;
        int q;
        //fraccion (int p, int q) :  p(p), q(q);
        // p1/q1 < p2/q2 si y solo si p1*q2 < p2*q1

        //5 /2 < 7/2
    };

    //custom_sort(fraccioes.begin)
    
    return 0;
}