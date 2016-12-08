#include <iostream>
#include "miasto.h"
#include "pola_gry.h"

using namespace std;

Miasto::Miasto( string nazwaMiasta, string nazwaPanstwa, int cenaMiasta):Pole(nazwaMiasta, MIASTO), panstwo (nazwaPanstwa), cena(cenaMiasta){

    cout << "Miasto stworzone" << endl;
}

Miasto::~Miasto(){
}
