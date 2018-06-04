#include "Professor.h"

string line;

Professor Professor::professores[100];

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

void Professor::setProfessores(Professor professores[100])
{
  int i;
  for(i=0;i<100;i++){
    Professor::professores[i] = professores[i];
  }
}

Professor* Professor::getProfessores()
{
  return professores;
}


void Professor::readProfessors(FILE * file)
{

  char * line = NULL;
  size_t len = 0;
  ssize_t read;
  Professor p;
  int i=0;
  int escolas_pretendidadas[5];

  Professor professores[100];
  regex habilitacao("d");

  file = fopen("professores.txt", "r");
  if (file){
    while ((read = getline(&line, &len, file)) != -1) {
      p.setNumeroProfessor(i+1);
      if(i<9){
        p.setNumeroHabilitacoes(line[5] - '0');
        //printf("o: %i\n",line[5] - '0');
      }else{
        p.setNumeroHabilitacoes(line[6] - '0');
      }
      professores[i] = p;
      i++;
      //printf("%s", line)
    }
    setProfessores(professores);

    Professor::professores[99].setNumeroHabilitacoes(3);
    for(i=0;i<100;i++){
      printf("Numero do Professor: %d\nHabilitaçoes: %d\n",Professor::professores[i].getNumeroProfessor(),Professor::professores[i].getNumeroHabilitacoes());
    }
  }
}
