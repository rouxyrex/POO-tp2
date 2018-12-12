#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include <iostream>
#include <stdio.h>
using namespace std;


void	TestTrajet1()
{
	TrajetCompose tc1("tc1", "lyon", "paris", 5);
	TrajetSimple ts1("ts1", "lyon", "grenoble", "bus");
	
	Trajet* ptr;
	ptr = &ts1;
	tc1.AjouterTrajet(ptr);
	//tc1.Afficher();
	/*tc1.AjouterTrajet(ts1);*/	
	ts1.Afficher();
	tc1.Afficher();
}

int		main()
{
	TestTrajet1();
	
	return (0);
}
