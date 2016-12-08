#include <iostream>
#include "gra.h"

using namespace std;

int main(int argc, char* argv[])
{
    Gra gra;
        for (int i = 1; i < argc; i++){
        //cout << argv[i] << endl;
        gra.wgrajDanezPliku(argv[i]);
    }
    gra.graj();
    return 0;
}
