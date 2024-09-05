#include <iostream>
#include "entreprise.h"

int main() {
    // Cr�ation d'une entreprise avec le constructeur par d�faut
    Entreprise e1;
    std::cout << "Nom de l'entreprise (par defaut) : " << e1.getNomEntreprise() << std::endl;
    std::cout << "Ville de l'entreprise (par defaut) : " << e1.getVilleEntreprise() << std::endl;

    // Cr�ation d'une entreprise avec des param�tres
    Entreprise e2("inconnu", "inconnu");
    std::cout << "Nom de l'entreprise : " << e2.getNomEntreprise() << std::endl;
    std::cout << "Ville de l'entreprise : " << e2.getVilleEntreprise() << std::endl;

    return 0;
}
