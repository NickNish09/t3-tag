#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//ifstream infile("entradaProj3TAG.txt");

/**
 * @brief Classe responsável por modelar a entidade Professor, contendo cada objeto
 *        professor um numero de habilitações e as escolas preferidas em ordem
 *
 * Função que pega como argumento uma matriz de vértices e seus respectivos graus e
 * retorna os vértices ordenados de acordo com o grau dos mesmos.
 */

class Professor
{
  public:
    Professor();
    Professor(int numero_professor, int numero_habilitacoes, int * escolas_pretendidas);
    virtual ~Professor();

    static const int NUMERO_ESCOLAS = 5;

    int getNumeroHabilitacoes (){
      return numero_habilitacoes;
    }

    int getNumeroProfessor (){
      return numero_professor;
    }

    int * getEscolasPretendidas (){
      return escolas_pretendidas;
    }

    void setNumeroHabilitacoes (int numero_habilitacoes){
      this->numero_habilitacoes = numero_habilitacoes;
    }

    void setNumeroProfessor (int numero_professor){
      this->numero_professor = numero_professor;
    }

    void setEscolasPretendidas (int escolas_pretendidas[5]);

    static void readProfessors (FILE * file);


  protected:

  private:
    int numero_habilitacoes;
    int escolas_pretendidas[5];
    int numero_professor;
};

#endif // PROFESSOR_H
