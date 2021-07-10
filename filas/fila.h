#ifndef FILA_H
#define FILA_H

// Codigos de erros
#define OK               0
#define QUEUE_ISFULL     1
#define QUEUE_ISEMPTY    2
#define SIZE 100

// Definicao das estruturas
typedef enum { false = 0, true = 1 }boolean;
typedef struct { int value; }ITEM;
typedef struct { ITEM item[SIZE]; int frente; int fundo; }FILA;


//iniciar a fila
void iniciar(FILA *fila);



#endif //FILA_H