#ifndef ESCOLA_H
#define ESCOLA_H

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <Professor.h>
#include <Escola.h>

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

    bool getLacrou(){
      return lacrou;
    }

    int getCarro1(){
      return carro;
    }

    int getCarro2(){
      return carro;
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

    void setLacrou(bool lacrou){
      this->lacrou = lacrou;
    }

    void setCarro(int professor){
      this->carro = professor;
    }

    static bool tudoLacrado();

    static void readEscolas (FILE * file);

    static Escola escolas[50];
  protected:

  private:
    int numero_escola;
    int habilitacoes_pretendidas;
    int vagas;
    int carro;
    bool lacrou;
};

#endif // ESCOLA_H
