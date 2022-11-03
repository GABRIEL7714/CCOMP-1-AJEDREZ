#include "CPieza_Hijas.h"


// ---- Peon ----------------------------------

CPeon::CPeon():CPieza(), primerMovimiento(true) {icono[0] = 'P';}

CPeon::CPeon(int y, int x, char c): CPieza(y, x, c), primerMovimiento(true) {icono[0]='P';}

bool CPeon::confirmarMovimiento(int y, int x, CPieza* casilla) {}

// ---- Torre ---------------------------------

CTorre::CTorre():CPieza() {icono[0] = 'T';}

CTorre::CTorre(int y, int x, char c): CPieza(y, x, c) {icono[0]='T';}

bool CTorre::confirmarMovimiento(int y, int x, CPieza* casilla) {}

// ---- Caballo -----------------------------------

CCaballo::CCaballo():CPieza() {icono[0] = 'C';}

CCaballo::CCaballo(int y, int x, char c): CPieza(y, x, c) {icono[0]='C';}

bool CCaballo::confirmarMovimiento(int y, int x, CPieza* casilla) {}

// ---- Alfil ---------------------------------

CAlfil::CAlfil():CPieza() {icono[0] = 'A';}

CAlfil::CAlfil(int y, int x, char c): CPieza(y, x, c) {icono[0]='A';}

bool CAlfil::confirmarMovimiento(int y, int x, CPieza* casilla) {}

// ---- Reina ---------------------------------

CReina::CReina():CPieza() {icono[0] = 'Q';}

CReina::CReina(int y, int x, char c): CPieza(y, x, c) {icono[0]='Q';}

bool CReina::confirmarMovimiento(int y, int x, CPieza* casilla) {}

// ---- Rey -----------------------------------

CRey::CRey():CPieza() {icono[0] = 'K';}

CRey::CRey(int y, int x, char c): CPieza(y, x, c) {icono[0]='K';}

CRey::~CRey() {
    cout << endl << "Rey" << ' ' << (color=='B'?"blanco":"negro") << ' ' << "eliminado.";
    cout << endl << "Oprima 0 para terminar la partida.";
}

bool CRey::confirmarMovimiento(int y, int x, CPieza* casilla) {}
