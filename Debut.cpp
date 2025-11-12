#include <iostream>
#include <cstdlib>  // Pour rand() et srand()
#include <ctime>    // Pour time()

int main() {
    std::string name;
    int age;

    // Demander le nom de l'utilisateur
    std::cout << "Entrez votre nom : ";
    std::getline(std::cin, name);
    
    // Demander l'âge de l'utilisateur
    std::cout << "Entrez votre âge : ";
    std::cin >> age;

    // Vérifier si l'utilisateur a moins de 18 ans
    if (age < 18) {
        std::cout << "Désolé " << name << ", vous êtes mineur. Programme terminé." << std::endl;
        return 0;  // Terminer le programme
    }

    std::cout << "Bienvenue " << name << "! Jouons à un jeu de devinette de nombres !" << std::endl;

    // Initialiser le générateur de nombres aléatoires
    std::srand(std::time(0));
    int secretNumber = std::rand() % 21;  // Nombre aléatoire entre 0 et 20 inclus

    int guess;
    int attempts = 0;  // Compteur du nombre d'essais

    // Boucle de jeu jusqu'à ce que l'utilisateur trouve le bon nombre
    do {
        std::cout << "Devinez un nombre entre 0 et 20 : ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Trop petit ! Essayez encore." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Trop grand ! Essayez encore." << std::endl;
        } else {
            std::cout << "Félicitations " << name << "! Vous avez deviné le nombre en " << attempts << " essais." << std::endl;
        }

    } while (guess != secretNumber);  // Répéter tant que le nombre n'est pas trouvé

    return 0;  // Fin du programme
}
