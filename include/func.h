#ifndef FUNC_H
#define FUNC_H
#include "ListaEncadeada.h"
#include "playlist.h"
void menu(ListaEncadeada<Playlist *> &lista);
void menuPlaylist(ListaEncadeada<Playlist *> &lista);
void menuMusica(ListaEncadeada<Playlist *> &lista);
void addMusica(ListaEncadeada<Playlist *> &lista);
void addPlaylist(ListaEncadeada<Playlist *> &lista);
void reMusica(ListaEncadeada<Playlist *> &lista);
void rePlaylist(ListaEncadeada<Playlist *> &lista);
void imprimirMusic(ListaEncadeada<Playlist *> &lista);
void imprimirPlaylists(ListaEncadeada<Playlist *> &lista);
void tocar(ListaEncadeada<Playlist *> &lista);
void reMusTPlay(ListaEncadeada<Playlist *> &lista);
void moverMusica(ListaEncadeada<Playlist *> &lista);

#endif