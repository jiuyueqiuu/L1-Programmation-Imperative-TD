#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

using Matrice = vector<vector<int>>;

Matrice tab = { {1,2,3}, {2,5,6}, {3,6,9} };

bool testSy (Matrice t){
    for (int i = 0; i < t.size(); i++){
        for (int j = 0; j < t[i].size(); j++){
            if (t[i][j] != t[j][i]){
                return false;
            }
        }
    }
    return true;

}


int main (){
    if (testSy(tab)){
        cout << "Vrai" << endl;
    } else {
        cout << "Faux" << endl;
    }

    return 0;
}