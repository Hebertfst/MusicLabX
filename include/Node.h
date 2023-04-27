#ifndef NODE_H
#define NODE_H
#include "music.h"
template <typename T>
class Node
{

private:
  Node<T> *prox;
  T valor;

public:
  Node(T valor)
  {
    this->valor = valor;
    this->prox = nullptr;
  }
  T getValor() { return valor; }
  Node *getProx() { return prox; }
  void setProx(Node<T> *p)
  {
    prox = p;
  }
};

#endif