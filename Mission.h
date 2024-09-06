/*****************************************************************//**
 * \file   Mission.h
 * \brief  Déclaration de la classe Mission
 *
 * \author Youenn
 * \version 0.1
 * \date   June 2023
 *
 * Fichier d'en-tête pour la classe Mission
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H

#include <string>

class Mission {
private:
    std::string nbPersonne;        
    std::string descriptifMission; 
    std::string nbHeure;          

public:
    /**
     * @brief Constructeur par défaut
     */
    Mission();

    /**
     * @brief Constructeur avec paramètres
     * @param nombredepersonne Nombre de personnes pour la mission
     * @param descriptifdelamission Description de la mission
     * @param nombreheure Nombre d'heures de la mission
     */
    Mission(std::string nombredepersonne, std::string descriptifdelamission, std::string nombreheure);

    /**
     * @brief Constructeur de copie
     * @param miss Objet Mission à copier
     */
    Mission(const Mission& miss);

    /**
     * @brief Destructeur
     */
    ~Mission();

    /**
     * @brief Opérateur d'affectation
     * @param miss Objet Mission à affecter
     * @return Référence à l'objet Mission courant
     */
    Mission& operator=(const Mission& miss);

    /**
     * @brief Accesseur pour le nombre de personnes
     * @return Nombre de personnes pour la mission
     */
    std::string getNbPersonne();

    /**
     * @brief Accesseur pour le descriptif de la mission
     * @return Description de la mission
     */
    std::string getDescriptifMission();

    /**
     * @brief Accesseur pour le nombre d'heures
     * @return Nombre d'heures de la mission
     */
    std::string getNbHeure();

    /**
     * @brief Mutateur pour le nombre de personnes
     * @param nouveauNb Nouveau nombre de personnes
     */
    void setNbPersonne(std::string nouveauNb);

    /**
     * @brief Mutateur pour le descriptif de la mission
     * @param nouveauDescriptif Nouvelle description de la mission
     */
    void setDescriptifMission(std::string nouveauDescriptif);

    /**
     * @brief Mutateur pour le nombre d'heures
     * @param nouveauNbHeure Nouveau nombre d'heures
     */
    void setNbHeure(std::string nouveauNbHeure);
};

#endif // MISSION_H