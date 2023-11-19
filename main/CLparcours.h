#pragma once
#include <iostream>
#include <vector>
#include "CLpoint.h"
#include "CLpoint3D.h"

class CLparcours {
protected:
    int taille;
    std::vector<CLpoint> listePoint;
public:
    CLparcours();
    CLparcours(int t_taille);
    virtual void message();
    virtual void ajouterPoint(CLpoint* t_point);
    virtual double calculDistance() =0;
    virtual void afficherPoint() =0;
};
