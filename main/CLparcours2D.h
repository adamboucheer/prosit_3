#pragma once
#include "CLparcours.h"

class CLparcours2D : public CLparcours {
public:
    using CLparcours::CLparcours;
    virtual double calculDistance() override;
    virtual void afficherPoint() override;
};


