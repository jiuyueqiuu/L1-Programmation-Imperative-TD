#include <vector>
#include <iostream>
using namespace std;


char motDePasse[] = "XXXXXX";
char motDePasseSecret[] = "s3*iA3";

vector<int> modifie(vector<int> t) {
    t[0] = 42;
    return t;
}


int main(){

    vector<int> m = { 3, 2, 5, 2 };

    for ( auto valeur: m ) {
    valeur = 1;
    }

    cout << m[0] << endl;

    return 0;
    
    
}
