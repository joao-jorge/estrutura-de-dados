#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
  FILA *fila = (FILA*)malloc(sizeof(FILA));
  iniciarFila(fila);
  inserir(fila, 2);
  inserir(fila, 2);
    inserir(fila, 2);
  inserir(fila, 2);
    inserir(fila, 2);
    remover(fila);
    remover(fila);
    remover(fila);
    remover(fila);
    remover(fila);

  printf("Tamanho da fila: %i\n", tamanho(fila));
  printf("Fila cheia: %i\n", filaCheia(fila));
  printf("Fila vazia: %i\n", filaVazia(fila));
}