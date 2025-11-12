#include <iostream>
using namespace std;


// Programme Logarithme
// Entree : Un nombre entier
// Sortie : Un nombre entier


int main(){
    unsigned int n;
    int i = 1;
    int k = 0;

    cout << "Entrez num numbre entier n SVP : ";
    cin >> n;
    cout << "n entre est : " << n << " !";






    while (i < n) {
        k++;
    
        i = i * 2;


    }

    if (i >= n) {

        i = i/2;
        k--;
    }



    cout << "i est : " << i;
    cout << "k est : " << k;


    return 0;


}