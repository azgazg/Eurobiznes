#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <fstream>
#include "gra.h"
#include "miasto.h"

using namespace std;

Gra::Gra(): gracz(), miasta(){
    cout << "Gra constructed" << endl;
}

Gra::~Gra(){
    for (int i = 0; i < MAX_GRACZY; i++){
        delete gracz[i];
    }
    for (int j =0; j < 22; j++){
        delete miasta[j];
    }
    cout << "Destructed" << endl;
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
        cout << "Gracz o imieniu: " << gracz[i]->getNazwa() << " gra jako nr " << i+1 << endl;

    }
}

int Gra::rzutKostka(int min = 1, int max = 6){
    srand(static_cast<unsigned int>(time(0)));
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void Gra::wgrajDanezPliku(const char *filePath){
    ifstream inf(filePath);
    cout << inf << endl;
    if (!inf){

        cout << "Uh oh, " << filePath << " could not be opened for reading!" << endl;
        return;
    }
    while (inf){
                // read stuff from the file into a string and print it
        string strInput;
        inf >> strInput;
        if (strInput.length() != 0){
            const string &argument1 = strInput.substr (0, strInput.find(","));
            cout << argument1 << endl;
            int stringLength = 0;
            stringLength = strInput.find(":") - (strInput.find(",")+1);
            const string &pozostaleArgumenty = strInput.substr (strInput.find(",")+1, stringLength);
            const string &argument2 = pozostaleArgumenty.substr (0, pozostaleArgumenty.find(","));
            //cout << argument2 << endl;
            const string &argument3 = pozostaleArgumenty.substr (pozostaleArgumenty.find(",")+1);
            //cout << argument3 << endl;
            const string &cena = strInput.substr (strInput.find(":")+1, 3);
            //cout << cena << endl;
            int int_cena = atoi(cena.c_str());
            int i = 0;
            miasta[i++] = new Miasto(argument3, argument2, int_cena);
            /*char c_numbers[10];
            strcpy (c_numbers, numbers.c_str());
            char* number = strtok (c_numbers, ",");
            vector<int> int_vector;
            while (number != NULL){
                int i_number = atoi(number);
                if (i_number >0){
                    int_vector.push_back(i_number);
                }
                number = strtok (NULL, ",");
            }

            if (int_vector.size() == 3 && name.length() > 0){
                Paczkomat *p(createPaczkomat(name, int_vector[0], int_vector[1], int_vector[2]));
                if(p != NULL){
                    const string &packages = strInput.substr(strInput.find(";")+1);
                    char p_indexes[100];
                    strcpy (p_indexes, packages.c_str());
                    char* indexes = strtok (p_indexes, ",");
                    vector<int> pck_vector;
                    while (indexes != NULL){
                        int i_number = atoi(indexes);
                        pck_vector.push_back(i_number);
                        indexes = strtok (NULL, ",");
                    }
                    if(pck_vector.size() > 0){
                        int noOfSkrzynki = p->getNumberOfSkrzynki();
                        for(unsigned int i = 0; i < pck_vector.size(); i++){
                            if(pck_vector[i] < noOfSkrzynki && pck_vector[i] >= 0 && (*p)[pck_vector[i]].isFree()){

                                Paczucha *newPaczka = new Paczucha ((*p)[pck_vector[i]].getSizeOfPackage(), name);
                                p->storePaczka(pck_vector[i], newPaczka);
                            }
                        }
                    }
                }
            }*/
        }
    }
}
