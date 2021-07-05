#ifndef LISTA_H_DEFINE
#define LISTA_H_DEFINE


typedef struct
{
  int dado;
  Lista *prox;
}Lista;


Lista criarLista();
