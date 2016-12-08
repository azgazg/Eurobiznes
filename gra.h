#ifndef GRA_H_INCLUDED
#define GRA_H_INCLUDED

#include "gracz.h"

class Gra{
    static const int MAX_GRACZY = 6;
    Gracz* gracz[MAX_GRACZY];
public:
    Gra();
    ~Gra();
    void graj();
};

#endif // GRA_H_INCLUDED
