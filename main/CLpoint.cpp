#include "CLpoint.h"
#include <iostream>

CLpoint::CLpoint()
{
	this->x = 0;
	this->y = 0;
}

CLpoint::CLpoint(double t_x, double t_y)
{
	this->x = t_x;
	this->y = t_y;
}

void CLpoint::setX(double t_x)
{
	this->x = t_x;
}

void CLpoint::setY(double t_y)
{
	this->y = t_y;
}

void CLpoint::setZ(double t_z)
{
	this->z = t_z;
}

double CLpoint::getZ() const
{
	return this->z;
}

double CLpoint::getX() const
{
	return this->x;
}

double CLpoint::getY() const
{
	return this->y;
}

void CLpoint::afficheCoord()
{
	std::cout << "Les coordonnees du point : " << this << " sont (" << "x : " << x << " ; y : " << y <<" )"<< std::endl;
}
