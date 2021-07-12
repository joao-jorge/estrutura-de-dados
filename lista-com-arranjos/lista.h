#ifndef LIST_H
#define LIST_H

// Codigos de erros
#define NOT_FOUND      -1
#define OK              0
#define LIST_ISFULL     1
#define LIST_ISEMPTY    2
#define LIST_SIZE       5

// Definicao das estruturas
typedef enum { false = 0, true = 1 }boolean;
typedef struct { int key; }ITEM;
typedef struct { ITEM item[LIST_SIZE]; int nElem; }LIST;

void initialize(LIST *l);

// Size of the list
int size(LIST *l);

// Insert a element in the list
boolean insert(LIST *l, ITEM item);

// Show all elements of a list
void show(LIST *l);

// Search a element in a sequential search
int linearSearch(LIST *l, int item);

// Search a element with divide and conquer approach
int divideAndConquerSearch(LIST *l, int item);

// Search a element in a ordered list
int orderedLinearSearch(LIST *l, int item);

// Insert a element in a ordered list
boolean insertOrderedList(LIST *l, int item);

#endif // LISTA_H