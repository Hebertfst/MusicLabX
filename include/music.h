#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <string>

class Music
{
private:
  std::string titulo;
  std::string autor;

public:
  Music(){};
  Music(std::string titulo, std::string autor)
  {
    this->titulo = titulo;
    this->autor = autor;
  }
  std::string getTitulo() { return titulo; }
  std::string getAutor() { return autor; }
  bool operator==(const Music &outra) const
  {
    return (titulo == outra.titulo && autor == outra.autor);
  }
};

#endif