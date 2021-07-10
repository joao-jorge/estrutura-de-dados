#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define MAX 45

typedef struct 
{
  int codigo;
  char titulo[40];
  
}LIVRO;

typedef struct 
{
  LIVRO livros[MAX];
  int nElem;
}LISTA;
typedef int TIPOCHAVE;
typedef enum {true = 1, false = 0}Boolean;
