#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <regex>

using namespace std;

//ifstream infile("entradaProj3TAG.txt");

/**
 * @brief Classe responsável por modelar a entidade Professor, contendo cada objeto
 *        professor um numero de habilitações e as escolas preferidas em ordem
 *
 * Um objeto da classe professor possui número do professor, número de habilitações do
 * professor e um array de escolas pretendidas pelo professor em ordem descrescente de prioridade
 */

class Professor
{
  public:
    Professor();
    Professor(int numero_professor, int numero_habilitacoes, int escolas_pretendidas[5]);
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

    bool getAlocado(){
      return alocado;
    }

    void setNumeroHabilitacoes (int numero_habilitacoes){
      this->numero_habilitacoes = numero_habilitacoes;
    }

    void setNumeroProfessor (int numero_professor){
      this->numero_professor = numero_professor;
    }

    void setAlocado (bool alocado){
      this->alocado = alocado;
    }

    void setEscolasPretendidas (int escolas_pretendidas[5]);

    static void setProfessores (Professor professores[100]);

    static Professor * getProfessores ();

    static void readProfessors (FILE * file);

    static Professor professores[100];

  protected:

  private:
    int numero_habilitacoes;
    int escolas_pretendidas[5];
    int numero_professor;
    bool alocado;

};

#endif // PROFESSOR_H
