#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define MAX 50

typedef int TIPOCHAVE;
typedef enum {true = 1, false = 0}Boolean;

typedef struct 
{
  TIPOCHAVE chave;
}REGISTRO;

typedef struct
{
  REGISTRO A[MAX];
  int nElem;
}LISTA;

//Funcao para inicializar a lista
void iniciar(LISTA *lista)
{
  lista->nElem = 0;
}

void reiniciar(LISTA *lista)
{
  lista->nElem = 0;
}

//Funcao para retornar o numero de elementos de uma lista
int tamanho(LISTA *lista)
{
  return lista->nElem; 
}

//Funcao para exibir os elementos da lista
void exibirLista(LISTA *lista)
{
  printf("Lista: \"\n");
  for(int i=0; i<lista->nElem; i++)
    printf(" Elemento: %i\n", lista->A[i].chave);
  printf(" \"\n\n");
}

//Funcao para procurar um elemento na lista
int procurar(LISTA *lista, TIPOCHAVE chave)
{
  int i = 0;
  while( i < lista->nElem)
  {
    if(lista->A[i].chave == chave) 
      return i;
    i++;
  }
  return -1;
}

//Funcao para inserir um elemento na lista em 
//uma determinada chave
Boolean inserir(LISTA *lista, REGISTRO reg, int x)
{
  int i;
  if(lista->nElem == MAX)
    return false;
  if(x < 0) // Se o endereco que quermos inserir a variavel e invalido
    return false;
  if(x > lista->nElem) 
    return false;
  for(int i = lista->nElem; i > x; i--)
    lista->A[i] = lista->A[i - 1];
  lista->A[i] = reg;
  lista->nElem++;
  return true;
}

//Funcao para remover um elemento da lista
//em uma determinada chave
Boolean remover(LISTA *lista, int chave)
{
  int pos = procurar(lista, chave);
  if(pos == -1) return false;
  for(int i = pos; i < lista->nElem; i++)
    lista->A[i] = lista->A[i+1];
  lista->nElem--;
  return true;
}

int main()
{
  REGISTRO r1, r2, r3;
  LISTA *lista = (LISTA*)malloc(sizeof(LISTA));
  r1.chave = 10;
  r2.chave = 20;
  r3.chave = 40;
  iniciar(lista);
  inserir(lista, r1, 0);
  inserir(lista, r2, 0);
  inserir(lista, r3, 1);
  printf("%i", lista->A[60].chave);
  
  exibirLista(lista);
  printf("Tamanho da Lista: %i\n", tamanho(lista));
  return 0;
}