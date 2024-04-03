/**
 * \file Electeur.hpp
 * \author Laurent Granvilliers
 */

#ifndef ELECTEUR_HPP
#define ELECTEUR_HPP

#include <iostream>
#include "Personne.hpp"
#include <string>

namespace elections {

/**
 * Une Electeur est défini par une identité (pointeur vers Personne), 
 * un temps (restant) dans l'étape en cours,
 * une liste de bulletins
 * un choix/vote (index dans liste de bulletins)
 * L'identifiant unique est généré automatiquement.
 */
class Electeur {
public:
   /**
    * Constructeur.
    * \param identite    nom de la Electeur
    * \param prenom prénom de la Electeur
    * \param spol   sensibilité politique (entier entre 1 et 10)
    */
   Electeur(const std::string& nom, const std::string& prenom, int spol);

   /**
    * Accesseur.
    * \return la personne associé à cet électeur (son identité)
    */
   Personne * identite() const;

   /**
    * Accesseur.
    * \return le prénom
    */
   std::string prenom() const;

   /**
    * Accesseur.
    * \return l'identifiant
    */
   int id() const;

   /**
    * Accesseur.
    * \return la sensibilité politique
    */
   int spol() const;

private:
   Personne * identite_;
   size_t tps_;
   

public:
};

/**
 * Ecriture sur un flux de sortie.
 * \param os un flux de sortie
 * \param psn une Electeur
 * \return le flux donné en entrée os
 */
std::ostream& operator<<(std::ostream& os, const Electeur& psn);

} // namespace

#endif