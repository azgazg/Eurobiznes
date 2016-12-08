#include <iostream>
#include "gra.h"

using namespace std;

Gra::Gra(): gracz(){
    cout << "Gra constructed" << endl;
}

Gra::~Gra(){
}

void Gra::graj(){
    cout << "Grasz w Eurobiznes" << endl;
    cout << "Ilu graczy wezmie udzial w grze?" << endl;
    int iloscGraczy;
    cin >> iloscGraczy;
    for (int i = 0; i < iloscGraczy; i++){
        cout << "Podaj imie gracza nr " << i+1 << ": " << endl;
        string nazwaGracza;
        cin >> nazwaGracza;
        gracz[i] = new Gracz(nazwaGracza);


    }
}
