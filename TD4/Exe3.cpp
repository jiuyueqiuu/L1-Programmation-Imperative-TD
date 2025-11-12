#include <iostream>
#include <numbers>
#include <cmath>

using namespace std;

int i = 0;
int f(int j){
    i = i +j;
    return i;
}

int resultatf = f(1) + f(2) + f(3);

int g(int y){


    int o = 0;
    o = o + y;

    return o;
}
int resultatg = g(1) + g(2) + g(3);

int main(){
    cout << resultatf << endl;
    cout << resultatg << endl;



    return 0;
}