

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


/** compte le nombre de mots d'un fichier texte
 *  @param nomFichier le nom du fichier
 *  @return le nombre de mots contenus dans le fichier
 **/
int word_count(string nomFichier){
    ifstream flux;
    flux.open(nomFichier);
    string mot;
    int nb_mots = 0;
    while (flux >> mot){
        nb_mots++;
    }
    flux.close();
    return nb_mots;

}



/** compte le nombre de lignes d'un fichier texte
 *  @param nomFichier le nom du fichier
 *  @return le nombre de lignes contenues dans le fichier
 **/
int line_count(string nomFichier){

    ifstream flux;
    flux.open(nomFichier);
    string ligne;
    int compteur = 0;
    while ( getline(flux, ligne) ) {
        compteur += 1;
    }
    flux.close();
    return compteur;

}


/** affiche (sur la sortie standard) le contenu d'un fichier texte
 *  @param nomFichier le nom du fichier
 **/
void cat(string nomFichier){
    ifstream flux;
    flux.open(nomFichier);
    string ligne;
    while (getline(flux, ligne)){
        cout << ligne << endl;
    }
    flux.close();

}



/** copie le contenu d'un fichier texte dans un autre
 *  @param source le nom du fichier source
 *  @param destination le nom du fichier destination
 **/
void copy(string source, string destination){
    ifstream fluxSource;
    fluxSource.open(source);
    ofstream fluxDestination;
    fluxDestination.open(destination);
    string ligne;
    while (getline(fluxSource, ligne)){
        fluxDestination << ligne << endl;
    }
    fluxSource.close();
    fluxDestination.close();
}