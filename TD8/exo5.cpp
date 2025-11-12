#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Devinez ce que fait la fonction mystereEpais suivante et écrire un test :


int mystereEpais(string zut) {
    ifstream bla;
    bla.open(zut);
    int foo = 0;
    char y;
    while ( bla >> y ) {
        foo++;
    }
    bla.close();
    return foo;
}

// Cette fonction compte le nb de caracteres dans un fichier

