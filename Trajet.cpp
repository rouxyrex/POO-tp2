/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Trajet> (fichier Trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <string.h>
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void	Trajet::Afficher() const
{}
//-------------------------------------------- Constructeurs - destructeur
Trajet::Trajet ( const Trajet & unTrajet )
{
	
#ifdef MAP
    cout << "Appel au constructeur de copie de <Trajet>" << endl;
#endif

	nom = new char[strlen(unTrajet.nom)+1];
	villeD = new char[strlen(unTrajet.villeD)+1];
	villeA = new char[strlen(unTrajet.villeA)+1];

	strcpy(nom , unTrajet.nom);
	strcpy(villeD , unTrajet.villeD);
	strcpy(villeA , unTrajet.villeA);
} //----- Fin de Trajet (constructeur de copie)


Trajet::Trajet (const char* N, const char* VD, const char* VA)
{

#ifdef MAP
    cout << "Appel au constructeur de <Trajet>" << endl;
#endif

	nom = new char[strlen(N)+1];
	villeD = new char[strlen(VA)+1];
	villeA = new char[strlen(VD)+1];
	
	if (nom == NULL || villeD == NULL || villeA == NULL)
  {
    cerr << "Erreur lors de l'allocation des attributs du Trajet" << endl;
  }
  
  strcpy(nom , N);
  strcpy(villeD , VD);
  strcpy(villeA , VA);
} //----- Fin de Trajet


Trajet::~Trajet()
{
	
#ifdef MAP
    cout << "Appel au destructeur de <Trajet>" << endl;
#endif

if(nom!=NULL) { delete [] nom; nom = NULL; } 
if(villeD!=NULL) { delete [] villeD; villeD = NULL; } 
if(villeA!=NULL) { delete [] villeA; villeA = NULL; } 
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

