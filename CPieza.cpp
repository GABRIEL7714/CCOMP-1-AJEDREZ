#include "CPieza.h"

CPieza::CPieza(): posX{0}, posY{0}, color{'B'}, icono{"♟B"} {}

CPieza::CPieza(int y, int x, char c): posY{y}, posX{x}, color(c) {
    icono = "♟";
    icono.push_back(color);
}

void CPieza::setPosX(int x) {posX = x;}

void CPieza::setPosY(int y) {posY = y;}

int CPieza::getPosX() {return posX;}

int CPieza::getPosY() {return posY;}

char CPieza::getColor() {return color;}

string CPieza::getIcono() {return icono;}
