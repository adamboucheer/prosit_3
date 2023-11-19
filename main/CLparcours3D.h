#pragma once
#include "CLparcours.h"

class CLparcours3D : public CLparcours {
public:
    using CLparcours::CLparcours;
    virtual void message() override;
    virtual double calculDistance() override;
    virtual void afficherPoint() override;
};
