#include <iostream>
#include "gracz.h"
#include "pola_gry.h"

using namespace std;


Pole::Pole(string nazwaPola, typPola typ):nazwa(nazwaPola), typ(typ), wlasciciel(NULL)  {
    cout << "Pole zostalo stworzone" << endl;
}

void Pole::printWlasciciel(){
        cout << wlasciciel->getNazwa() << endl;
    }
