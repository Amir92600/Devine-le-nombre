#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Initialisation de la graine pour le générateur de nombres aléatoires
    int nombre_secret = std::rand() % 100 + 1; // Génère un nombre entre 1 et 100
    int tentative = 0;
    int nombre_propose = 0;

    std::cout << "-----------------------------------\n";
    std::cout << "  Bienvenue au Jeu du Devine-le-Nombre !\n";
    std::cout << "-----------------------------------\n";
    std::cout << "Je pense à un nombre entre 1 et 100.\n";
    std::cout << "Pouvez-vous le deviner ?\n\n";

    while (nombre_propose != nombre_secret) {
        std::cout << "Entrez votre proposition : ";
        std::cin >> nombre_propose;
        tentative++;

        if (nombre_propose > nombre_secret) {
            std::cout << "C'est moins !\n\n";
        } else if (nombre_propose < nombre_secret) {
            std::cout << "C'est plus !\n\n";
        } else {
            std::cout << "Félicitations ! Vous avez trouvé le nombre " << nombre_secret << " en " << tentative << " tentatives.\n";
        }
    }

    std::cout << "Merci d'avoir joué !\n";
    return 0;
}
