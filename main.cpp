/**
 * @file main.cpp
 * @brief Programme principal démontrant l'utilisation des classes Entreprise et Mission
 * @author [Votre nom]
 * @date [Date actuelle]
 */

#include <iostream>
#include "entreprise.h"
#include "mission.h"

 /**
  * @brief Fonction principale du programme
  *
  * Cette fonction démontre l'utilisation des classes Entreprise et Mission
  * en créant des instances, en affichant leurs attributs et en les modifiant.
  *
  * @return 0 si le programme s'exécute correctement
  */
int main() {

    /// Création et affichage d'une entreprise par défaut
    Entreprise e1;
    std::cout << "Nom de l'entreprise : " << e1.getNomEntreprise() << std::endl;
    std::cout << "Ville de l'entreprise : " << e1.getVilleEntreprise() << std::endl;

    /// Création et affichage d'une mission par défaut
    Mission m1;
    std::cout << "\nMission par defaut :" << std::endl;
    std::cout << "Nombre de personnes : " << m1.getNbPersonne() << std::endl;
    std::cout << "Descriptif de la mission : " << m1.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << m1.getNbHeure() << std::endl;

    /// Création et affichage d'une mission personnalisée
    Mission m2("1", "creation d'une procedure DRP", "40");
    std::cout << "\nMission 1 :" << std::endl;
    std::cout << "Nombre de personnes : " << m2.getNbPersonne() << std::endl;
    std::cout << "Descriptif de la mission : " << m2.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << m2.getNbHeure() << std::endl;

    /// Modification et affichage d'une mission existante
    m1.setNbPersonne("2");
    m1.setDescriptifMission("Maintenance de serveur");
    m1.setNbHeure("0,30");
    std::cout << "\nMission 2  :" << std::endl;
    std::cout << "Nombre de personnes : " << m1.getNbPersonne() << std::endl;
    std::cout << "Descriptif de la mission : " << m1.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << m1.getNbHeure() << std::endl;

    /// Création et affichage d'une autre mission personnalisée
    Mission m3("2", "mise en place d'un petit reseau", "8");
    std::cout << "\nMission 3 :" << std::endl;
    std::cout << "Nombre de personnes : " << m3.getNbPersonne() << std::endl;
    std::cout << "Descriptif de la mission : " << m3.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << m3.getNbHeure() << std::endl;

    return 0;
}