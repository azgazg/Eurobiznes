#ifndef GRA_H_INCLUDED
#define GRA_H_INCLUDED

#include "gracz.h"
#include "miasto.h"

class Gra{
    static const int MAX_GRACZY = 6;
    Gracz* gracz[MAX_GRACZY];
    Miasto* miasta[22];

public:
    Gra();
    ~Gra();
    void graj();
    int rzutKostka(int min, int max);
    void wgrajDanezPliku(const char *filePath);
};

#endif // GRA_H_INCLUDED
