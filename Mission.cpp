/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  
 * 
 * \author CIEL23_admin
 * \date   September 2024
 *********************************************************************/

#include "mission.h"
#include <iostream>
#include <string>

using namespace std;

/**
 * \brief constructeur de ma classe Misssion.
 * 
 */
Mission::Mission() {
    this->nbPersonne = "8";
    this->descriptifMission = "j'ai du faire une procedure DRP, un peu de maintenance de serveur ou encore une mise en place d'un petit reseau informatique";
    this->nbHeure = "7h par jour minimum";
}

/**
 * .
 * 
 * \param nombredepersonne : Nb personne dans l'entreprise
 * \param descriptifdelamission
 * \param nombreheure
 */
Mission::Mission(std::string nombredepersonne, std::string descriptifdelamission, std::string nombreheure) {
    this->nbPersonne = nombredepersonne;
    this->descriptifMission = descriptifdelamission;
    this->nbHeure = nombreheure;
}

/**
 * \brief Destructeur
 *
 */
Mission::~Mission() {
    cout << "Destruction de la mission " << this->descriptifMission << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param miss Objet de type Mission
 */
Mission::Mission(const Mission& miss) {
    cout << "Copie de Mission" << endl;
    this->nbPersonne = miss.nbPersonne;
    this->descriptifMission = miss.descriptifMission;
    this->nbHeure = miss.nbHeure;
}

/**
 * .
 * 
 * \param miss
 * \return 
 */
Mission& Mission::operator = (const Mission& miss) {
    cout << "Affectation de la mission" << std::endl;
    if (this != &miss)  // Pour éviter que l'on ne se recopie pas...
    {
        this->nbPersonne = miss.nbPersonne;
        this->descriptifMission = miss.descriptifMission;
        this->nbHeure = miss.nbHeure;
    }
    return *this;
}

/**
 * .
 * 
 * \return 
 */
std::string Mission::getNbPersonne() {
    return this->nbPersonne;
}

/**
 * .
 * 
 * \param nouveauNb
 */
void Mission::setNbPersonne(std::string nouveauNb) {
    this->nbPersonne = nouveauNb;
}

/**
 * .
 * 
 * \return 
 */
std::string Mission::getDescriptifMission() {
    return this->descriptifMission;
}

/**
 * .
 * 
 * \param nouveauDescriptif
 */
void Mission::setDescriptifMission(std::string nouveauDescriptif) {
    this->descriptifMission = nouveauDescriptif;
}

/**
 * .
 * 
 * \return 
 */
std::string Mission::getNbHeure() {
    return this->nbHeure;
}

/**
 * .
 * 
 * \param nouveauNbHeure
 */
void Mission::setNbHeure(std::string nouveauNbHeure) {
    this->nbHeure = nouveauNbHeure;
}