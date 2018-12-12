/*************************************************************************
 TrajetCompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes
#define NB_DEFAULT 5
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
	void TrajetCompose::Afficher () const
	{
		for (unsigned int i=0; i < nbAlloue; i++)
		{
			(*(trajets[i])).Trajet::Afficher();
		}
	}


void	TrajetCompose::AjouterTrajet(Trajet* t)
{
	trajets[nbAlloue] = t;
	nbAlloue++;
}

//-------------------------------------------- Constructeurs - destructeur
TrajetCompose::TrajetCompose( const TrajetCompose & unTrajetCompose ) : Trajet(unTrajetCompose)
{
	
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetCompose>" << endl;
#endif

	trajets = new Trajet* [unTrajetCompose.nbTrajets];
	nbTrajets = unTrajetCompose.nbTrajets;
	nbAlloue = unTrajetCompose.nbAlloue;
	
	for (unsigned int i = 0 ; i < nbAlloue ; i++)
	{
		Trajet t(*(unTrajetCompose.trajets[i]));
		trajets[i] = &t;
	}
} //----- Fin de TrajetCompose (constructeur de copie)


TrajetCompose::TrajetCompose(const char* nom, const char* VD, const char* VA, unsigned int nb = NB_DEFAULT) : Trajet(nom, VD, VA)
{
	
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif

	trajets = new Trajet* [nb];
	nbTrajets = nb;
	nbAlloue = 0;

} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose()
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif

	for (unsigned int i=0; i< nbTrajets; i++)
	{
		if (trajets[i] != NULL) {delete[] trajets[i]}
	}
	if (trajets != NULL) {delete[] trajets; trajets = NULL;}
	nbAlloue = 0;
	nbTrajets = 0;
} //----- Fin de ~TrajetCompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

