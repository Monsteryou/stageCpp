/*****************************************************************//**
 * \file   Entreprise.cpp
 * \brief  
 * 
 * \author CIEL23_admin
 * \date   September 2024
 *********************************************************************/
#include "entreprise.h"



using namespace std;


/**
 * .
 * 
 */
Entreprise::Entreprise() {

	this->nomEntreprise = "Yves Rocher";
	this->villeEntreprise = "La Gacilly";

}

/**
 * .
 * 
 * \param nom
 * \param ville
 */
Entreprise::Entreprise(std::string nom, std::string ville) {
	this->nomEntreprise = nom;

	this->villeEntreprise = ville;
}


/**
 * \brief Destructeur
 *
 */
Entreprise::~Entreprise() {

    cout << "Destrcution de l'entreprise " << this->nomEntreprise << " " << this->villeEntreprise << endl;

}

/**
 * \brief Constructeur de copie
 *  
 * \param entre Objet de type entreprise
 */
Entreprise::Entreprise(const Entreprise& entre)
{
    cout << "Copie de Capitaine" << endl;
    this->nomEntreprise = entre.nomEntreprise;
    this->villeEntreprise = entre.villeEntreprise;

}

/**
 * \brief Operateur d'affectation
 * 
 * \param entre Objet de type entreprise
 * \return Nouvelle objet de type entreprise
 */
Entreprise &Entreprise::operator = (const Entreprise& entre)
{ 
    cout << "Affectation de l'entreprise" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->nomEntreprise = entre.nomEntreprise;
        this->villeEntreprise = entre.villeEntreprise;
    }
    return *this;
}


/**
 * \brief Accesseur de l'attribut nomEntreprise
 * 
 * \return Nom de l'entreprise
 */
std::string Entreprise::getNomEntreprise()
{
    return this->nomEntreprise;
}

/**
 * \brief Mutateur de l'attribut nomEntreprise
 *
 * \param nouveauNom nouveau nom de l'entreprise
 */
void Entreprise::setEntreprise(std::string nouveauNom){
    this->nomEntreprise = nouveauNom;
}

/**
 * \brief Accesseur de l'attribut villeEntreprise
 * 
 * \return Nom de l'entreprise
 */
std::string Entreprise::getVilleEntreprise() {
    return this->villeEntreprise;
}


/**
 * \brief Mutateur de l'attribut villeEntreprise
 * 
 * \param nouvelleVille nouvelle ville de l'entreprise
 */
void  Entreprise::setVilleEntreprise(std::string nouvelleVille) {
    this->villeEntreprise = nouvelleVille;
}
