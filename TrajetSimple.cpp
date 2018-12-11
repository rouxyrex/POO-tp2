/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <string.h>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
	void TrajetSimple::Afficher (  ) const
	{
		cout << nom << " = de " << villeD << " � " << villeA << " en " << mTrans << "\r\n";
	} //----- Fin de Méthode

/*	void TrajetSimple::Afficher (  ) const
	{
		Trajet::Afficher();
		cout <<"mt : " << mTrans << "\r\n";
	} //----- Fin de Méthode*/

//-------------------------------------------- Constructeurs - destructeur
TrajetSimple::TrajetSimple ( const TrajetSimple & unTrajetSimple) : Trajet(unTrajetSimple)
{

#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetSimple>" << endl;
#endif
	
	mTrans = new char[strlen(unTrajetSimple.mTrans)+1];

	strcpy(mTrans , unTrajetSimple.mTrans);
} //----- Fin de TrajetSimple (constructeur de copie)*/


TrajetSimple::TrajetSimple(const char* N, const char* VD, const char* VA , const char* MT ) : Trajet(N, VD, VA)
{

#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif

	mTrans = new char[strlen(MT)+1];
	strcpy(mTrans , MT);

} //----- Fin de TrajetSimple


TrajetSimple::~TrajetSimple()
{

#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif

	Trajet::~Trajet;
	if(mTrans!=NULL) { delete [] mTrans; mTrans = NULL; } 
} //----- Fin de ~TrajetSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

