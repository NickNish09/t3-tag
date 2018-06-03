#ifndef GRAFO_H
#define GRAFO_H


#include <vector>
#include <list>
#include <iostream>
#include <stack>

using namespace std;

class Grafo {
  public:
    Grafo();
    Grafo(int);
    virtual ~Grafo();

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

#endif // GRAFO_H
