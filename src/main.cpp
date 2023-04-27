#include <iostream>
#include "ListaEncadeada.h"
#include "func.h"

int main()
{
  ListaEncadeada<Playlist *> listaPlaylist;
  Playlist *play1 = new Playlist("p1");
  Playlist *play2 = new Playlist("p2");
  Playlist *play3 = new Playlist("p3");
  listaPlaylist.inserir(play1);
  listaPlaylist.inserir(play2);
  listaPlaylist.inserir(play3);
  play1->adicionarMusica("m1", "a1");
  play2->adicionarMusica("m2", "a2");
  play3->adicionarMusica("m3", "a3");
  menu(listaPlaylist);
  delete play1;
  delete play2;
  delete play3;

  return 0;
}
