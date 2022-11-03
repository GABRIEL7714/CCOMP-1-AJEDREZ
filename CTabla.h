#ifndef CTABLA_H
#definde CTABLA_H

#include "Header.h"
#include "CPieza.h"
#include "CPieza_Hijas.h"

using namespace std;

const unsigned int x = 8;
const unsigned int y = 8;

class CTabla
{
private:
  unsigned int tanX;
  unsigned int tanY;
  unsigned int numPiezas;
  CPieza** listaPieza;
public:
  CTabla();
  ~CTabla();
  void imprimirTabla();
  bool posicionValida(string pos) const;
  Cpieza* buscarPieza(int y, int x);
};
