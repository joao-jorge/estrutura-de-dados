#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

// Initiate the list 
void initialize(LIST *l)
{
  l->nElem = 0;
}

// Size of the list
int size(LIST *l)
{
  return l->nElem;
}

// Insert a element in the list
boolean insert(LIST *l, ITEM item)
{
  if(size(l) == LIST_SIZE)
    return false;
  l->item[l->nElem].key = item.key;
  l->nElem++;
  return true; 
}

// Show all elements of a list
void show(LIST *l)
{
  int i = 0;
  if(size(l) == 0)
    printf("\nList is EMPTY!!\n");
  printf("\nElements:");
  while(i < size(l))
  {
    printf(" %i", l->item[i].key);
    i++;
  } 
  printf("\n");
}

// Search a element in a sequential search
//int linearSearch(LIST *l, ITEM item);

// Search a element with divide and conquer approach
//int divideAndConquerSearch(LIST *l, ITEM item);

// Search a element in a ordered list
//int orderedSearch(LIST *l, ITEM item);

// Insert a element in a ordered list
//boolean insertOrderedList(LIST *l, ITEM item);