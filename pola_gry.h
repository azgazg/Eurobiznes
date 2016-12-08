#ifndef POLA_GRY_H_INCLUDED
#define POLA_GRY_H_INCLUDED

#include <iostream>
#include "gracz.h"

using namespace std;

enum typPola{
    MIASTO,
    SZANSA,
    PARKING,
    KOLEJ,
    WIEZIENIE,
    ENERGIA
};

class Pole{
    string nazwa;
    typPola typ;
    Gracz* wlasciciel;

public:
    Pole(string nazwaPola, typPola typ);
    ~Pole();
    void printWlasciciel();

};

#endif // POLA_GRY_H_INCLUDED
