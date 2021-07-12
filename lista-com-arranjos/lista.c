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
  printf("ALl elements:");
  while(i < size(l))
  {
    printf(" %i", l->item[i].key);
    i++;
  } 
  printf("\n");
}

// Search a element in a sequential search
int linearSearch(LIST *l, int item)
{
  int i = 0;
  if(size(l) == 0)
    return -1;
  while(i < size(l))
  {
    if(l->item[i].key == item)
      return i;
    i++;
  }
  return -1;
}

// Search a element with divide and conquer approach
// Divide and conquer only works on a ordered list
int divideAndConquerSearch(LIST *l, int item)
{
  int start = 0, end = l->nElem-1;
  while(start <= end)
  {
    int middle = (start + end) / 2;
    if(item == l->item[middle].key)
      return middle;
    if(item > l->item[middle].key)
      start = middle + 1;
    if(item < l->item[middle].key)
      end = middle - 1;
  }
  return -1;
}

// Search a element in a ordered list
int orderedLinearSearch(LIST *l, int item)
{
  int i = 0;
  if(size(l) == 0)
    return -1;
  while(i < size(l))
  {
    if(l->item[i].key > item)
      return -1;
    if(item == l->item[i].key)
      return i;
    i++;
  }
  return -1;
}

// Insert a element in a ordered list
// Not working yet
boolean insertOrderedList(LIST *l, int item)
{
  
  int i = size(l) - 1;
  if(size(l) == LIST_SIZE)
    return false;
  l->nElem++;
  while(i > 0)
  {
    if(l->item[i].key > item)
      {
        l->item[l->nElem].key = l->item[i].key;
      }
    if(item > l->item[i].key)
      l->item[i].key = item;  
    i--;
  }
  return true;
}

// Remove a element from the list
int removeElement(LIST *l, int item)
{
  int index = linearSearch(l, item);
  if(index == -1)
    return -1;
  int removed = l->item[index].key;
  for(int i = index; i < l->nElem; i++)
  {
    l->item[index].key = l->item[index+1].key;
    index++;
  }
  l->nElem--;
  return removed;
}