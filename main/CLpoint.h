#pragma once
class CLpoint {
protected:
    double x, y, z;

public:
    CLpoint();
    CLpoint(double t_x, double t_y);

    void setX(double t_x);
    void setY(double t_y);
    void setZ(double t_z);

    double getX() const;
    double getY() const;
    double getZ() const;

    virtual void afficheCoord();
};
