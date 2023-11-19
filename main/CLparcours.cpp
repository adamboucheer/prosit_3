#include "CLparcours.h"

CLparcours::CLparcours()
{
	this->taille = 0;
}

CLparcours::CLparcours(int t_taille)
{
	this->taille = t_taille;
}

void CLparcours::message()
{
	std::cout << "Caclul d'un parcours de type 2D" << std::endl;
}

void CLparcours::ajouterPoint(CLpoint* t_point)
{
	this->listePoint.push_back(*t_point);
}




