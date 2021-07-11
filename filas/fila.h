#ifndef FILA_H
#define FILA_H

// Codigos de erros
#define OK               0
#define QUEUE_ISFULL     1
#define QUEUE_ISEMPTY    2
#define SIZE             5

// Definicao das estruturas
typedef enum { false = 0, true = 1 }boolean;
typedef struct { int value; }ITEM;
typedef struct { ITEM item[SIZE]; int frente; int fundo; int numEle;}FILA;


// Iniciar a fila
void iniciarFila(FILA *fila);

// Verificar se a fila esta vazia
boolean filaVazia(FILA *fila);

// Verificar se a fila esta cheira
boolean filaCheia(FILA *fila);

// Retornar o tamanho da fila
int tamanho(FILA *fila);

// Inserir um elemento na fila
int inserir(FILA *fila, int elem);

// Remover um elemento na fila
int remover(FILA *fila);


#endif //FILA_H