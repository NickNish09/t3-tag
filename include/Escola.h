#ifndef ESCOLA_H
#define ESCOLA_H


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

  protected:

  private:
    int numero_escola;
    int habilitacoes_pretendidas;
    int vagas;
};

#endif // ESCOLA_H
