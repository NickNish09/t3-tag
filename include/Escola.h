#ifndef ESCOLA_H
#define ESCOLA_H

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <list>
/**
 * @brief Classe responsável por modelar a entidade Escola, contendo cada objeto
 *        escola um numero de habilitações pretendidas, o número da escola e as vagas disponíveis
 *
 *
 */

 using namespace std;

class Escola
{
  public:
    Escola();
    virtual ~Escola();

    int getNumeroEscola (){
      return numero_escola;
    }

    int getHabilitacoesPretendidas (){
      return habilitacoes_pretendidas;
    }

    int getVagas(){
      return vagas;
    }

    void setNumeroEscola (int numero_escola){
      this->numero_escola = numero_escola;
    }

    void setHabilitacoesPretendidas (int habilitacoes_pretendidas){
      this->habilitacoes_pretendidas = habilitacoes_pretendidas;
    }

    void setVagas (int vagas){
      this->vagas = vagas;
    }

    static void readEscolas (FILE * file);

    static Escola escolas[50];
  protected:

  private:
    int numero_escola;
    int habilitacoes_pretendidas;
    int vagas;
};

#endif // ESCOLA_H
