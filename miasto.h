#ifndef MIASTO_H_INCLUDED
#define MIASTO_H_INCLUDED
#include "pola_gry.h"

class Miasto: public Pole {
    string panstwo;
    int cena;

public:
    Miasto(string nazwaMiasta, string nazwaPanstwa, int cenaMiasta);
    ~Miasto();


};


#endif // MIASTO_H_INCLUDED
