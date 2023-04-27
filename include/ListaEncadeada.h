#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H
#include "music.h"
#include "Node.h"
template <typename T>
class ListaEncadeada
{

private:
  Node<T> *head;
  Node<T> *tail;

public:
  ListaEncadeada()
  {
    head = nullptr;
    tail = nullptr;
  };
  ListaEncadeada(T valor)
  {
    head = new Node<T>(valor);
    tail = head;
  }
  virtual ~ListaEncadeada()
  {
    delete head;
  }
  Node<T> *getHead() { return head; }
  bool vazia() { return (head == NULL); }
  void inserir(T valor)
  {
    Node<T> *novo_no = new Node<T>(valor);

    if (vazia())
    {
      head = novo_no;
      tail = novo_no;
    }
    else
    {
      tail->setProx(novo_no);
      tail = novo_no;
    }
  }

  void remover(T valor)
  {
    Node<T> *anterior = nullptr;
    Node<T> *atual = head;

    while (atual != nullptr)
    {
      if (atual->getValor() == valor)
      {
        if (anterior == nullptr)
        {
          head = atual->getProx();
          delete atual;
          return;
        }
        else
        {
          anterior->setProx(atual->getProx());
          if (atual == tail)
          {
            tail = anterior;
          }
          delete atual;
          return;
        }
      }
      else
      {
        anterior = atual;
        atual = atual->getProx();
      }
    }

    std::cout << "O valor nao foi encontrado na lista." << std::endl;
  }
  Node<T> *buscarNode(std::string valor)
  {
    Node<T> *atual = head;
    while (atual != nullptr)
    {
      if (atual->getValor()->getTitulo() == valor)
      {
        return atual;
      }
      atual = atual->getProx();
    }
    return nullptr;
  }

  bool buscarNodeM(std::string titulo, std::string autor)
  {
    Node<T> *atual = head;
    while (atual != nullptr)
    {
      if (atual->getValor().getTitulo() == titulo && atual->getValor().getAutor() == autor)
      {
        return true;
      }
      atual = atual->getProx();
    }
    return false;
  }

  void imprimir(Node<T> *node)
  {
    if (node == nullptr)
    {
      return;
    }

    std::cout << "Titulo: " << node->getValor().getTitulo();
    std::cout << ", Autor: " << node->getValor().getAutor() << std::endl;

    imprimir(node->getProx());
  }

  void imprimirPlay(Node<T> *node)
  {
    if (node == nullptr)
    {
      return;
    }
    std::cout << "Titulo: " << node->getValor()->getTitulo() << std::endl;
    imprimirPlay(node->getProx());
  }
};

#endif