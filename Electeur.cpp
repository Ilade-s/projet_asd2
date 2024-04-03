/**
 * \file Electeur.cpp
 * \author Merlet Raphaël
 */

#include "Electeur.hpp"

namespace elections {


Electeur::Electeur(const std::string& nom, const std::string& prenom,
                   int spol)
      : nom_(nom), prenom_(prenom), id_(sid_++), spol_(spol)
{}

Personne * Electeur::identite() const
{
   return identite_;
}


std::ostream& operator<<(std::ostream& os, const Electeur& psn)
{
   os << psn.nom() << " " << psn.prenom() << " " << psn.spol();
   return os;
}

} // namespace
