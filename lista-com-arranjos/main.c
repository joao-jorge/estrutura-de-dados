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
  printf("List before: ");
  show(lista);
  
  printf("Element was found at %i position\n", linearSearch(lista, 6));
  printf("Element was found at %i position\n", divideAndConquerSearch(lista, 6));
  printf("Element was found at %i position\n", orderedLinearSearch(lista, 6));
  insertOrderedList(lista, 5);
  //printf("Element removed: %i\n", removeElement(lista, 4));
  printf("List size: %i\n", size(lista));
  printf("List after: ");
  show(lista);
  

  return 0;
}