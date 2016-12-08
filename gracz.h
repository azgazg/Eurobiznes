#ifndef GRACZ_H_INCLUDED
#define GRACZ_H_INCLUDED

#include <iostream>

using namespace std;

class Gracz{
    string nazwa;
    int majatek;

public:
    Gracz(string nazwaGracza);
    ~Gracz();
    void setNazwa (string nazwaGracza) {nazwa = nazwaGracza;}

    string getNazwa (){return nazwa;}
};

#endif // GRACZ_H_INCLUDED
