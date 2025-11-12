#include <iostream>
#include <numbers>
#include <cmath>
#include <vector>

using namespace std;

bool test_positif(vector<int> t){

    for (int i = 0; i < t.size(); i++){

        if (t[i] < 0) {
            return false;
        }

    }
    return true;
}


int main(){

    vector<int> t = {5, 1, 3, 7, 4, 8, 4};
    bool resultat = test_positif(t);

    cout << resultat;



    return 0;

}