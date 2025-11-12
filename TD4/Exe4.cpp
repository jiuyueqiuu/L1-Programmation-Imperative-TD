#include <iostream>
#include <numbers>
#include <cmath>

using namespace std;

double volumePiscine(double profondeur, double largeur, double longueur){




    return 100 * profondeur * largeur * longueur;
}



int main(){
    
    
    cout << volumePiscine(1, 1, 5) << endl;


    return 0;
}