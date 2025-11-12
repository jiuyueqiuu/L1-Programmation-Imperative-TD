#include <iostream>
#include <numbers>
#include <cmath>

using namespace std;


float surfaceDisque(float rayon){

    return 3.1415926 * rayon * rayon;

}

float surfaceTriangle(float hauteur, float base){

    return hauteur * base;


}

int main() {

    cout << surfaceTriangle(5.5, 6.6);





    return 0;
}