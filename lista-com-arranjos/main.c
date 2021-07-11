#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
  LIST *lista = (LIST*)malloc(sizeof(LIST));
  
  ITEM item1, item2, item3;
  item1.key = 2;
  item2.key = 4;
  item3.key = 6;

  initialize(lista);


  insert(lista, item1);
  insert(lista, item2);
  insert(lista, item3);

  printf("LIST SIZE: %i\n", size(lista));
  show(lista);

  return 0;
}