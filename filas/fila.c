#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// Iniciar a fila
void iniciarFila(FILA *fila)
{
  fila->frente = -1;
  fila->fundo = -1;
}

// Retornar o tamanho da fila
int tamanho(FILA *fila)
{
  return (fila->fundo - fila->frente) + 1;
}

// Verifica se a fila esta vazia
boolean filaVazia(FILA *fila)
{
  if(fila->frente == -1)
    return true;
  return false;
}

// Verifica se a fila esta cheia
boolean filaCheia(FILA *fila)
{
  if(tamanho(fila) == SIZE)
    return true;
  return false;
}

// Inserir um elemento na fila
int inserir(FILA *fila, int elem)
{
  if(filaCheia(fila) == true)
    return QUEUE_ISFULL;
  else 
  {
    if(fila->frente == -1)
      fila->frente = 0;
  }
  fila->fundo++;
  fila->item[fila->fundo].value = elem;
  fila->numEle++;
  return OK;
}

// Remover um elemento da fila
int remover(FILA *fila)
{
  if(filaVazia(fila) == true)
    printf("Fila vazia");
  else if(fila->fundo == fila->frente)
    iniciarFila(fila);
  printf("FRENTE: %i\n", fila->frente);
  printf("FUNDO: %i\n", fila->fundo);
  fila->frente++;
  return OK;
}