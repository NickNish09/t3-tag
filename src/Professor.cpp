#include "Professor.h"

string line;

Professor::Professor()
{
    //ctor
}

Professor::Professor(int numero_professor, int numero_habilitacoes, int escolas_pretendidas[5])
{
  this->setEscolasPretendidas(escolas_pretendidas);
  this->setNumeroHabilitacoes(numero_habilitacoes);
  this->setNumeroProfessor(numero_professor);
}

Professor::~Professor()
{
    //dtor
}
void Professor::setEscolasPretendidas(int escolas_pretendidas[5])
{
  int i;

  for(i=0;i<NUMERO_ESCOLAS;i++){
    this->escolas_pretendidas[i] = escolas_pretendidas[i];
  }
}

void Professor::readProfessors(FILE * file)
{

  char * line = NULL;
  size_t len = 0;
  ssize_t read;

  file = fopen("entradaProj3TAG.txt", "r");
  if (file){
    while ((read = getline(&line, &len, file)) != -1) {
      printf("Retrieved line of length %zu :\n", read);
      printf("%s", line);
    }
  }
}
