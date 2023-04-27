#include "ListaEncadeada.h"
#include "music.h"

class Playlist
{
private:
  std::string nome;
  ListaEncadeada<Music> listaMusicas;

public:
  Playlist(){};
  Playlist(std::string nome)
  {
    this->nome = nome;
  }
  std::string getTitulo() { return nome; }
  bool operator==(const Playlist &outra) const
  {
    return this->nome == outra.nome;
  }
  void adicionarMusica(std::string titulo, std::string autor)
  {
    Music musica(titulo, autor);
    listaMusicas.inserir(musica);
  }

  void removerMusica(std::string titulo, std::string autor)
  {
    Music musica(titulo, autor);
    listaMusicas.remover(musica);
  }

  void imprimirMusicas()
  {
    std::cout << "Playlist: " << nome << std::endl;
    std::cout << "Musicas:" << std::endl;
    listaMusicas.imprimir(listaMusicas.getHead());
  }

  bool buscarMusica(std::string titulo, std::string autor)
  {
    return listaMusicas.buscarNodeM(titulo, autor);
  }

  void play()
  {
    int opc;
    Node<Music> *atual = listaMusicas.getHead();
    while (atual != nullptr)
    {
      std::cout << "Tocando: " << atual->getValor().getTitulo() << ","
                << " de " << atual->getValor().getAutor() << std::endl;
      std::cout << "1. Proxima musica." << std::endl;
      std::cout << "0 - Voltar" << std::endl;
      std::cin >> opc;
      if (opc == 1)
      {
        atual = atual->getProx();
      }
      else
      {
        return;
      }
    }
  }
};
