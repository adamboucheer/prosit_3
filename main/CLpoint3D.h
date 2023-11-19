#pragma once
#include "CLpoint.h"

class CLpoint3D : public CLpoint {
public:
    CLpoint3D();
    CLpoint3D(double t_x, double t_y, double t_z);

    virtual void afficheCoord() override;
};

