#include <iostream>
#include <numbers>
#include <cmath>
#include <vector>

using namespace std;

bool test_2_tableau(vector<int> t, vector<int> s){

    if (t.size() != s.size()){
        return false;
    }

    for (int i = 0; i < t.size(); i++){

        if (t[i] != s[i]) {
            return false;
        }

    }
    return true;
}

int main(){

    vector<int> t = {5, 1, 3, 7, 4, 8, 4};
    vector<int> s = {5, -1, 3, 7, 4, 8, 4};
    bool resultat = test_2_tableau(t, s);

    cout << resultat;



    return 0;

}