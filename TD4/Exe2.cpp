#include <iostream>
#include <numbers>
#include <cmath>

using namespace std;

float puissance(float a, unsigned int n){
    float p = 1.0;
    for (int i = 1; i <= n; i++){
        p = p * a;

    }

    return p;

}

int factorielle(int x) {
    int resultat = 1;
    for ( int k = 1; k <= x; k++ ) {
        resultat = resultat * k;
    }
    return resultat;
}

int main(){
    cout << puissance(2, 3) << endl;

    double resultat = puissance(2, 3) / factorielle(3);
    cout << resultat << endl;

    return 0;
}