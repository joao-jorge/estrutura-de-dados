#ifndef LISTA_H_DEFINE
#define LISTA_H_DEFINE


typedef struct
{
  int dado;
  Lista *prox;
}Lista;

//Funcao de criacao da lista
Lista criarLista();

//Função que insere no inicio da lista
Lista inserir(Lista *l, int elemento);
