#include "CTabla.h"

CTabla::Ctabla() : tanX{x}, tanY{y}, numPiezas{32}
{
  listaPiezas = new CPiezas *[numPiezas];

  //insertar torres en la lista
  listaPiezas[0] = new CTorre(0,0,'B');
  listaPiezas[1] = new CTorre(0,7,'B');
  listaPiezas[2] = new CTorre(7,0,'N');
  listaPiezas[3] = new CTorre(7,7,'N');

  //insertar los caballos en la lista
  listasPiezas[4] = new CCaballo(0,1,'B');
  listasPiezas[5] = new CCaballo(0,6,'B');
  listasPiezas[6] = new CCaballo(7,1,'N');  
  listasPiezas[7] = new CCaballo(7,6,'N');

  //insertar los alfiles en la lista
  listaPiezas[8] = new CAlfil(0,2,'B');
  listaPiezas[9] = new CAlfil(0,5,'B');
  listaPiezas[10] = new CAlfil(7,2,'N');
  listaPiezas[11] = new CAlfil(7,5,'N');
  //insertar las reinas en la lista
  listaPieza[12] = new CReina(0,3,'B');
  listaPieza[13] = new CReina(7,3,'N');
  //insetar reyes en la lista
  listaPiezas[14] = new CRey(0,4,'B');
  listasPiezas[15] = new CRey(7,4,'N');
  //insertar los peones en la lista
  for(int i=0;i<numPiezas;i++)
  {
      listaPiezas[16+2*i] = new CPeon(1,i,'B');
      listaPiezas[17+2*i] = new CPeon(6,i,'N');
  }

}

CTabla::~CTabla()
{
  for(int i=0;i<numPiezas;i++)
  {
      delete listaPiezas[i];
      listasPiezas[i] = nullptr;
  }
  delete [] listaPiezas;
}