#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <stack>
#include <sstream>
#include <list>
#include <iterator>
#include <Grafo.h>
#include <Professor.h>
#include <Escola.h>

#define NUMERO_ESCOLAS 5

/************************************************************************
 * Teoria e Aplicação de Grafos - 1/2018                                *
 * Professor Díbio Borges                                               *
 * Alunos: Nicholas Nishimoto Marques - 150019343                       *
 *         Rafael Fernandes -                                           *
 * Data: 04/06/2018                                                     *
 ***********************************************************************/

/**
 * @author Nicholas Marques
 * @author Rafael Fernandes
 * @date 04 Jun 2018
 * @brief Arquivo contendo código fonte do trabalho de Grafos - 1/2018
 *
 * Documento que visa formalizar a solução para o algoritmo de emparelhamento máximo baseado num contexto de universidades e professores
 */


// Function: initGraphicVisualization
// function to show DFS Topological Sort vs Kahn Topological Sort performance graphic
void initGraphicVisualization() {
  FILE *fp;
  fp = popen("gnuplot -persist", "w");

  if (fp == NULL) {
    cout << "Error. Check if gnuplot is installed locally\n if not, run sudo apt install gnuplot-x11" << endl;
    return;
  }

  else {
    fprintf(fp, "set title 'Kahn vs DFS for topological sorting'\n");
    fprintf(fp, "set autoscale\n");
    fprintf(fp, "set xlabel 'Time(seconds)'\n");
    fprintf(fp, "set ylabel 'Nodes'\n");
    fprintf(fp, "plot 'kahn-data.txt' lt rgb '#E1802A' with lines smooth mcsplines, \
                      'dfs-data.txt' lt rgb '#773111' with lines smooth mcsplines\n");
  }
}



int main() {
  int i;
  FILE * file;
  Professor::readProfessors(file);
  Escola::readEscolas(file);
  for(i=0;i<100;i++){
    printf("Numero do Professor: %d\nHabilitaçoes: %d\nPrimeira: %d\nSegunda: %d\nTerceira: %d\nQuarta: %d\nQuinta: %d\n",Professor::professores[i].getNumeroProfessor(),Professor::professores[i].getNumeroHabilitacoes(),Professor::professores[i].getEscolasPretendidas()[0],Professor::professores[i].getEscolasPretendidas()[1],Professor::professores[i].getEscolasPretendidas()[2],Professor::professores[i].getEscolasPretendidas()[3],Professor::professores[i].getEscolasPretendidas()[4]);
  }

  for(i=0;i<50;i++){
    printf("Numero da Escola: %d\nHabilitacoes: %d\nVagas: %d\n",Escola::escolas[i].getNumeroEscola(),Escola::escolas[i].getHabilitacoesPretendidas(),Escola::escolas[i].getVagas());
  }

  return 0;
}
