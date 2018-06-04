#ifndef GRAFO_H
#define GRAFO_H


#include <vector>
#include <list>
#include <iostream>
#include <stack>
#include <Escola.h>
#include <Professor.h>

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

    void setEscolas(Escola escolas[]){
      int i;
      for(i=0;i<50;i++){
        this->escolas[i] = escolas[i];
      }
    }

    void setProfessores(Professor professores[]){
      int i;
      for(i=0;i<100;i++){
        this->professores[i] = professores[i];
      }
    }

    Escola * getEscolas (){
      return escolas;
    }

    Professor * getProfessores(){
      return professores;
    }

    static void makeAndPrintEmparelhamento(Professor * professores, Escola * escolas);

    static int matriz_de_emparelhamento[50][100];

  private:
    Escola escolas[50];
    Professor professores[100];
};

#endif // GRAFO_H
