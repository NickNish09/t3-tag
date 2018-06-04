#include "Escola.h"

Escola::Escola()
{
  //ctor
}

Escola::~Escola()
{
  //dtor
}
void Escola::readEscolas(FILE* file)
{
  char * line = NULL;
  size_t len = 0;
  ssize_t read;

  file = fopen("escolas.txt", "r");
  if (file){
    while ((read = getline(&line, &len, file)) != -1) {
      printf("Retrieved line of length %zu :\n", read);
      printf("%s", line);
    }
  }
}
