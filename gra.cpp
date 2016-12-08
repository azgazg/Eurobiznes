#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
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
        cout << "Gracz o imieniu: " << gracz[i]->getNazwa() << " stworzony" << endl;

    }
}

int Gra::rzutKostka(int min = 1, int max = 6){
    srand(static_cast<unsigned int>(time(0)));
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void Gra::wgrajDanezPliku(const char *filePath){

}
