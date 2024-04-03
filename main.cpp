/**
 * \file main.cpp
 * \author Laurent Granvilliers
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <set>
#include "Personne.hpp"

using namespace std;
using namespace elections;

int main(void)
{
   // initialisation du générateur de nombres aléatoires
   std::srand(std::time(nullptr));

   // création des personnes
   std::vector<Personne*> vp = {
      new Personne("A", "bic", 7),
      new Personne("B", "gad", 9),
      new Personne("C", "ann", 2),
      new Personne("D", "pol", 5),
      new Personne("E", "lam", 1),
      new Personne("F", "bul", 10),
      new Personne("G", "yap", 3),
      new Personne("X", "nel", 5),
      new Personne("Y", "rik", 2),
      new Personne("Z", "pat", 8)
   };
   
   // TODO
   // Code de simulation dans lequel on manipulera les personnes
   // via des pointeurs sur les éléments du vecteur vp.

   // construction d'un set
   set<Personne*, elections::Personne::CompAlpha> ens;
   for (Personne* pers : vp) {
      ens.insert(pers);
   }
   for (Personne* pers : ens) {
      cout << *pers << endl;
   }

   Personne * test_pers;
   test_pers = vp[0];
   test_pers = new Personne("T", "test", 0);
   auto fit = ens.find(test_pers);
   if (fit != ens.end()) {
      cout << "trouvé : " << **fit << endl;
   }
   else {
      cout << "pas trouvé : " << *test_pers << endl;
   }
   // destruction des personnes
   for (Personne* psn : vp)
   {
      delete psn;
   }

   return 0;
}
