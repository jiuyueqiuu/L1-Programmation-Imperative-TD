#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


/** calcule la moyenne des notes contenues dans un fichier texte
 *  Format: chaque ligne du fichier est de la forme "<nom> <note>"
 *  @param nomFichier le nom du fichier
 *  @return la moyenne des notes, arrondie à sa partie entière
 **/


int moyenne(string nomFichier){

    ifstream flux;
    flux.open(nomFichier);
    string temp;
    int note;
    int somme = 0;
    int nb = 0;
    while ( flux >> temp and flux >> note ) {
        somme += note;
        nb += 1;
    }
    flux.close();
    return somme / nb;

}



/** lit les notes contenues dans un fichier et en fait un tableau
 *  Format: chaque ligne du fichier est de la forme "<nom> <note>"
 *  @param nomFichier le nom du fichier
 *  @return un tableau contenant les notes
 **/

vector<int> lit_notes(string nomFichier){
    ifstream flux;
    flux.open(nomFichier);
    string nom;
    int note;
    vector<int> resultat = {};
    while (flux >> nom and flux >> note){
        resultat.push_back(note);
    }
    flux.close();
    return resultat;

}