#ifndef CPIEZA_H
#define CPIEZA_H

#include "Header.h"

class CPieza {
private:
    int posX;
    int posY;
    char color;
    string icono;
public:
    CPieza();
    CPieza(int y, int x, char c);
    virtual ~CPieza();
    void setPosX(int x);
    void setPosY(int y);
    int getPosX() ;
    int getPosY() ;
    char getColor() ;
    string getIcono();
    virtual bool confirmarMovimiento(int y, int x, CPieza* casilla) = 0;
};

#endif
