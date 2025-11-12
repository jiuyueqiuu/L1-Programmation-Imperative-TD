/**

#include <iostream>
#include <numbers>
#include <cmath>
#include <vector>

using namespace std;

vector <int> increment(vector<int> t){
    vector<int> resultat;

    for (int i = 0; i < t.size(); i++){
        resultat.push_back(t[i] + 1);
        
    }
    return resultat;

}


int main(){

    vector<int> t = {5, 1, 3, 7, 4, 8, 4};
    vector<int> nouveau = increment(t);
    for (int z = 0; z < nouveau.size(); z++){
        cout << nouveau[z] << " ";

    }



    return 0;

}

*/






#include <iostream>
#include <numbers>
#include <cmath>
#include <vector>

using namespace std;

vector <int> increment(vector<int> t){
    for (int i = 0; i < t.size(); i++){
        t[i]++;
        
    }
    return t;

}


int main(){

    vector<int> t = {5, 1, 3, 7, 4, 8, 4};
    vector<int> nouveau = increment(t);
    for (int z = 0; z < nouveau.size(); z++){
        cout << nouveau[z] << " ";

    }



    return 0;

}