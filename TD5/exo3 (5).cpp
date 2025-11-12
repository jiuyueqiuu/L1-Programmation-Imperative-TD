#include <iostream>
#include <numbers>
#include <cmath>
#include <vector>

using namespace std;

bool test_croissance(vector<int> t){
    int m = t[0];

    for (int i = 1; i < t.size(); i++){

        if (m > t[i]) {
            return false;
        }

    }
    return true;
}


int main(){

    vector<int> t = {9, 1, 3, 7, 8};
    bool resultat = test_croissance(t);

    cout << resultat;



    return 0;

}