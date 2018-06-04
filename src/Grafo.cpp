#include "Grafo.h"

Grafo::Grafo()
{
  //ctor
}

Grafo::~Grafo()
{
  //dtor
}

void Grafo::makeAndPrintEmparelhamento(Professor professoress[100], Escola escolass[50])
{
  int i,j;
  int * aux;

  Escola escolas[50];
  Professor professores[100];

  for(i=0;i<50;i++){
    escolas[i] = Escola::escolas[i];
  }

  for(i=0;i<100;i++){
    professores[i] = Professor::professores[i];
  }

  for(j=0;j<5;j++){
    //while(!(Escola::tudoLacrado())){
      for(i=0;i<100;i++){
        if(professores[i].getAlocado()){

        }else{
          aux = professores[i].getEscolasPretendidas();
          //printf("olll: %d\n",aux[j]);
          //printf("size: %d",sizeof(professores));

          if(escolas[aux[j]].getLacrou()){

          }else{
            if(escolas[aux[j]].getHabilitacoesPretendidas() == professores[i].getNumeroHabilitacoes()){
              escolas[aux[j]].setCarro(professores[i].getNumeroProfessor());
              professores[i].setAlocado(true);
              professores[escolas[aux[j]].getCarro1()].setAlocado(false);
            }else{
              if(escolas[aux[j]].getCarro1() == 0){
                int k=0;
                while(professores[k].getAlocado()){
                  k++;
                }
                escolas[aux[j]].setCarro(k);
                professores[k].setAlocado(true);
              }
            }
          }
        }
      }
    //}
  }

  for(j=0;j<50;j++){
    printf("Escola %d: Professor: %d\n",escolas[j].getNumeroEscola(),escolas[j].getCarro1());
  }
}

Grafo::Grafo(int v) {
  vertices = v;
  adj = new list<int>[v];

  for (int i = 0; i < vertices; i++)
    grausDeEntrada.push_back(0);
}

void Grafo::inserir(int u, int v) {
  adj[u].push_back(v);
  grausDeEntrada[v]++;
}

void Grafo::exibir() {
  for (int i = 0; i < vertices; i++) {
    cout << i << " -> ";

    for (list<int>::iterator it = adj[i].begin(); it != adj[i].end(); it++) {
      cout << *it << " ";
    }

    cout << endl;
  }
}

vector<int> Grafo::verticesSemGrauDeEntrada() {
  vector<int> result;

  for (int v = 0; v < grausDeEntrada.size(); v++)
    if (grausDeEntrada[v] == 0)
      result.push_back(v);

  return result;
}

vector<int> Grafo::ordenacaoTopologicaKahn() {
  // Lista vazia que irá conter os elementos ordenados
  vector<int> L;

  // Conjunto de todos os nós sem arestas de entrada
  vector<int> S = Grafo::verticesSemGrauDeEntrada();

  // enquanto S é não-vazio faça
  while (S.size() != 0) {
    // remova um nodo n de S
    int n = S.back();
    S.pop_back();

    // insira n em L
    L.push_back(n);

    list<int>::iterator it = adj[n].begin();

    // para cada nodo m com uma aresta e de n até m faça
    while (it != adj[n].end()) {
      int m = *it;

      // remova a aresta e do grafo
      it = adj[n].erase(it);
      grausDeEntrada[m]--;

      // se m não tem mais arestas de entrada então
      if (grausDeEntrada[m] == 0) {
        // insira m em S
        S.push_back(m);
      }
    }
  }

  return L;
}

vector<int> verticesVisitados(100000, 0);

// Pilha vazia que irá conter os elementos ordenados
stack<int> L_DFS;

void Grafo::visita(int n) {
  // se n não foi visitado ainda então
  if (!verticesVisitados[n]) {
    // marque n como visitado
    verticesVisitados[n] = 1;

    // para cada nodo m com uma aresta e de n até m faça
    list<int>::iterator it = adj[n].begin();

    while (it != adj[n].end()) {
      visita(*it);
      it++;
    }

    L_DFS.push(n);
  }
}
