#include <iostream>
#include "entreprise.h"

int main() {
    // Création d'une entreprise avec le constructeur par défaut
    Entreprise e1;
    std::cout << "Nom de l'entreprise (par defaut) : " << e1.getNomEntreprise() << std::endl;
    std::cout << "Ville de l'entreprise (par defaut) : " << e1.getVilleEntreprise() << std::endl;

    // Création d'une entreprise avec des paramètres
    Entreprise e2("inconnu", "inconnu");
    std::cout << "Nom de l'entreprise : " << e2.getNomEntreprise() << std::endl;
    std::cout << "Ville de l'entreprise : " << e2.getVilleEntreprise() << std::endl;

    return 0;
}
