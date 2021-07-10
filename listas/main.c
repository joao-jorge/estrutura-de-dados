#include <stdio.h>
#include <stdlib.h>

#define max 225
 
typedef struct 
{
  int peso;
  int altura;
}Aluno;

int main()
{
  Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));
  aluno->peso = 20;
  aluno->altura = 30;

  printf("Altura: %i\nPeso: %i\n", aluno->altura, aluno->peso);
  return 0;
}
