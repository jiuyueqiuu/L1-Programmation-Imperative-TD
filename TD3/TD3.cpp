#include <iostream>
using namespace std;


// Programme Majeure
// Entrée : Un age entier
// Sortie : Tariff

int main(){
    int age;

    cout << "Entrez votre age SVP : ";
    cin >> age;

    cout << "L'age entré est " << age << " ! ";

    if (age >= 60){

        cout << "Senior";

    } else if (age <= 11){

        cout << "Enfant";

    } else if (12 <= age and age <= 27){
        
        cout << "Jeune";  

    } else {

        cout << "Plein tarif";
    }

    return 0;

}