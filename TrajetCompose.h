/*************************************************************************
 TrajetCompose  -  description
-------------------
début                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) ----------------
#if ! defined ( TRAJETCOMPOSE_H )
#define TRAJETCOMPOSE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetCompose>
//
//
//------------------------------------------------------------------------

class TrajetCompose : public Trajet
{
  //----------------------------------------------------------------- PUBLIC
  
public:
  //----------------------------------------------------- Méthodes publiques
  void Afficher() const;
  
  void AjouterTrajet(Trajet t);
 
  //-------------------------------------------- Constructeurs - destructeur
  
  TrajetCompose( const TrajetCompose & unTrajetCompose );
  
  TrajetCompose(const char* nom, const char* VD, const char* VA, unsigned int nb);
  
  virtual ~TrajetCompose();
  
  //------------------------------------------------------------------ PRIVE
  
protected:
  //----------------------------------------------------- Méthodes protégées
  
  //----------------------------------------------------- Attributs protégés
  Trajet** trajets;
  unsigned int	nbTrajets;
  unsigned int nbAlloue;
};

//-------------------------------- Autres définitions dépendantes de <TrajetCompose>

#endif // TRAJETCOMPOSE_H

