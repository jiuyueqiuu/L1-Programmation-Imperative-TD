#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void initRandom() {
    srand((unsigned int)time(nullptr));
}

int aleaInt(int a, int b) {
    return a + rand() % (b - a + 1);
}

void afficheDes(vector<int> t) {
    for (int i = 0; i < t.size(); i++) {
        cout << t[i] << " ";
    }

}

int chercheDansTableau(int x, vector<int> t) {
    int compteur = 0;
    for (auto nombre : t) {
        if (x == nombre) {
            return compteur;
        } else {
            compteur++;
        }
    }
    return -1;

}


vector<int> compteDes(const vector<int> t) {
    vector<int> compte = {0, 0, 0, 0, 0, 0};
    for (int valeur : t) {
        if (valeur >= 1 and valeur <= 6)
            compte[valeur - 1]++;
    }

    return compte;
}

int pointsFigureYams(vector<int> t) {
    int totalPoints = 0;
    vector<int> compte = compteDes(t);
    int place = chercheDansTableau(5, compte);

    if (place != -1) {
        totalPoints = (place + 1) * 5 + 60;
        return totalPoints;          
    } else {
        return 0;                                 
    }

}

int pointsFigureBrelan(const vector<int> s) {
    vector<int> compte = compteDes(s);

    for (int i = 0; i < compte.size(); i++) {
        if (compte[i] >= 3) {
            int valeurDuDe = i + 1;  
            return valeurDuDe * compte[i] + 10;
        }
    }

    return 0;
}

vector<int> lanceDes() {
    vector<int> des(5);
    for (int i = 0; i < 5; i++) {
        des[i] = aleaInt(1, 6);
    }
    return des;
}



int main() {
    vector<int> t = lanceDes();
    afficheDes(t);
    int place = chercheDansTableau(5, t);
    cout << endl;
    cout << place;
    cout << endl;
    for (auto nombre : compteDes(t)) {
        cout << nombre << " ";
    }
    cout << endl;
    cout << pointsFigureYams(t);
    cout << endl;
    cout << pointsFigureBrelan(t);
    return 0;
}