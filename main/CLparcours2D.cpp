#include "CLparcours2D.h"

double CLparcours2D::calculDistance()
{
    if (listePoint.size() < 2) {
        std::cerr << "Pas assez de points pour calculer la distance en 2D." << std::endl;
        return 0.0;  // Ou une valeur appropriée si aucune distance n'est calculée
    }

    double distanceTotale = 0.0;

    // Parcourez chaque point à partir du deuxième
    for (size_t i = 1; i < listePoint.size(); ++i) {
        double x1 = listePoint[i - 1].getX();
        double y1 = listePoint[i - 1].getY();

        double x2 = listePoint[i].getX();          
        double y2 = listePoint[i].getY();

        // Ajoutez la distance entre les points (x1, y1) et (x2, y2) à la distance totale
        distanceTotale += std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    }

    return distanceTotale;;
}

void CLparcours2D::afficherPoint()
{
    for (size_t i = 1; i < listePoint.size(); ++i) {
        listePoint[i].afficheCoord();
    }
}

