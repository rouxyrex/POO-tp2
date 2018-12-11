/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Trajet>
//
//
//------------------------------------------------------------------------

class Trajet 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    
virtual void	Afficher() const;

//-------------------------------------------- Constructeurs - destructeur
    Trajet ( const Trajet & unTrajet );
    

    Trajet (const char* N, const char* VD, const char* VA);
    

    virtual ~Trajet();
    

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

	

//----------------------------------------------------- Attributs protégés
  char* nom;
  char* villeD;
  char* villeA;
};

//-------------------------------- Autres définitions dépendantes de <Trajet>

#endif // TRAJET_H

