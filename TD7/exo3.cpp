#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int nbLignes (vector<vector<char>> t){
    int compte = 0;
    for (auto v : t){
        compte++;
    }
    return compte;
}


int nbColonnes (vector<vector<char>> t){
    if (t.size() == 0) {
        return 0;
    }
    return t[0].size();
}


void afficheE_L (vector<vector<char>> t, int l){
    for (auto v : t[l]){
        cout << v << " ";
    }
    cout << endl;
}

void afficheE_C (vector<vector<char>> t, int c){
    for (int i = 0; i < t.size(); i++){
        cout << t[i][c] << " ";
    }
    cout << endl;
}

void afficheE_D (vector<vector<char>> t){
    int compteur = 0;
    for (int i = 0; i < t.size(); i++){
        cout << t[i][compteur] << " ";
        compteur++;
    }
    cout << endl;
}

void afficheChacun (vector<vector<char>> t){
    for (auto v : t){
        for (auto x : v){
            cout << x;
        }
        cout << endl;
    }
}

bool contientC (vector<vector<char>> t, char c){
    for (auto v : t){
        for (auto x : v){
            if (x == c){
                return true;
            }
        }
    }
    return false;
}

vector<vector<char>> tc = { {'P','o','u','r'}, {'b','i','e','n'}, {'r','i','r','e'}, {'l','i','s','!'} };   
vector<vector<char>> tr = { {'B','r','a','v','o'}, {'b','o','n','n','e'}, {'A','N','N','E','E'}        };
vector<vector<char>> tq = { {'T','o','u','t'}, {'v','a'}, {'m','i','e','u','x'}                        };

int main(){
    char c = c;
    int resultat = nbLignes(tq);
    cout << resultat << endl;
    int test = nbColonnes(tq);
    cout << test << endl;
    afficheE_L(tc, 2);
    afficheE_C(tq, 1);
    afficheE_D(tc);
    afficheChacun(tc);
    cout << endl;
    afficheChacun(tr);
    cout << endl;
    afficheChacun(tq);
    cout << endl;
    if (contientC(tc, c)){
        cout << "Oui" << endl;
    } else {
        cout << "Non" << endl;
    }

    return 0;
}