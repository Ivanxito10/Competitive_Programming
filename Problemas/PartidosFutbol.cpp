/*Juan y sus amigos se van a dividir en
equipos para jugar un torneo de fútbol. En el torneo va a haber un grupo de ganadores y uno de perdedores. 
Inicialmente todos los equipos pertenecen al grupo de los ganadores.

En cada ronda del torneo, sucede lo siguiente mientras haya un grupo con al menos 2 equipos.

Los equipos que son parte del grupo de los perdedores se emparejan. Cada pareja juega una partida en la que no hay empates. 
Si un equipo gana, se queda en el grupo de los perdedores. Por el contrario, si un equipo pierde, al acabar la ronda queda eliminado del 
torneo. Si hubo un equipo que no quedó emparejado durante la ronda (y por ende no jugó una partida), se queda en el grupo de los perdedores.
Los equipos que son parte del grupo de los ganadores se emparejan. Cada pareja juega una partida en la que no hay empates. Si un equipo gana,
se queda en el grupo de los ganadores. Por el contrario, si un equipo pierde, al acabar la ronda se pasa al grupo de los perdedores. 
Si hubo un equipo que no quedó emparejado durante la ronda (y por ende no jugó una partida), se queda en el grupo de los ganadores.
Después de varias rondas, cada grupo queda con un solo equipo. Los dos equipos juegan la partida final y se decide el ganador del torneo.

Determina para la cantidad de equipos dada cuántas partidas se jugaron en total. Se te garantiza que sin importar cómo se haya 
emparejado a los equipos y quiénes ganaron o perdieron, la respuesta será la misma.

Entrada La primera línea tiene un entero
que representa la cantidad de equipos que juegan en el torneo. # Salida Un único entero que indica 
la cantidad total de partidas que se jugaron durante el torneo.*/

/*EXPLICACION, Se empieza no n equipos en el torneo, para llegar a la final se deben de eliminar N - 2 equipos
cada partido produce una derrota es decir debe haber el mismo numero de partidos que de derrotas , entonces si se deben 
eliminar N-2 equipos estos se llevaran 2 derrotas por lo tanto habran 2 (N -2) derrotas 

Aqui no contamos a los finalistas, el finalista del grupo de ganadores nunca acumula derrotas entonces llegara con 0 derrotas 
mientras que el finalista del lado de perdedores llegara con 1 derrota del lado de ganadores entonces al momento tendriamos 2N - 4 + 1 
en la final se producira una derrota ya sea para el grupo de ganadores o de perdedores, entonces agregariamos una derrota mas llegando a 
2N - 4 + 1 +1 = 2N - 2 y como el numero el numero de partidas es igual al numero de derrotas */

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   cout << (2*n) - 2 << " \n";
   return 0;
}