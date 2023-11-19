#include "CLpoint3D.h"
#include <iostream>

CLpoint3D::CLpoint3D()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

CLpoint3D::CLpoint3D(double t_x, double t_y, double t_z)
{
	this->x = t_x;
	this->y = t_y;
	this->z = t_z;
}

void CLpoint3D::afficheCoord()
{
	std::cout << "Les coordonnees du point : "<<this<< " sont (" << "x : " << x << " ; y : " << y << " ; z : " << z <<" )"<< std::endl;
}
