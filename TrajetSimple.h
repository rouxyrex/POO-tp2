
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H
//------------------------------------------------------------------------
// Rôle du module <TrajetSimple>
//
//
//------------------------------------------------------------------------

/////////////////////////////////////////////////////////////////  INCLUDE
//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

  
//------------------------------------------------------------------ Types

//////////////////////////////////////////////////////////////////  PUBLIC

class TrajetSimple : public Trajet
{
public:
//----------------------------------------------------- Méthodes publiques
	void	Afficher () const;

    
//-------------------------------------------- Constructeurs - destructeur
    
	TrajetSimple(const TrajetSimple & unTrajetSimple);

	TrajetSimple(const char* N, const char* VD, const char* VA , const char* MT);

    virtual ~TrajetSimple();
 
//------------------------------------------------------------------ PRIVE
    
protected:
//----------------------------------------------------- Méthodes protégées
  
//----------------------------------------------------- Attributs protégés
  char* mTrans;
  };

//-------------------------------- Autres définitions dépendantes de <TrajetSimple>

#endif // TRAJETSIMPLE_H

