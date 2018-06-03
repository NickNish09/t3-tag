#include <vector>
#include <list>

using namespace std;

class Grafo {
  public:
    Grafo(int v);

    void exibir();
    void inserir(int, int);

    vector<int> ordenacaoTopologicaKahn();
    vector<int> verticesSemGrauDeEntrada();

    void visita(int vertice);
    void ordenacaoTopologicaDFS();
    
    int vertices;
    list<int> * adj;
    vector<int> grausDeEntrada;
};