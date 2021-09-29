#include "library.h"
#include <iostream>
#include <cmath>

namespace Lab2 {

    void Epicycloid::setR(double Rad) {
        R = Rad;
    }

    void Epicycloid::setr(double rad) {
        r = rad;
    }

    Point Epicycloid::pCoord(double phi, double dist) const {
        Point tmp;
        tmp.x = (R + r) * cos(phi) - dist * cos((R + r) * phi / r);
        tmp.y = (R + r) * sin(phi) - dist * sin((R + r) * phi / r);
        return tmp;
    }

    int Epicycloid::epicType(double dist) const {
        double eps = 0.000000001;
        int result;
        if (dist - r < eps)
            result = 0;
        else {
            if (dist > r)
                result = 1;
            else result = 2;
        }
        return result;
    }

    PairOfRad Epicycloid::RadBorders(double dist) const {
        PairOfRad pair;
        pair.first_rad = R + r + dist;
        pair.second_rad = fabs(R + r - dist);
        return pair;
    }

    double Epicycloid::sectorSquare(double phi, double dist) const {
        double square = (R + r) / 2 * ((R + r + dist * dist / r) * phi - dist * (R + 2 * r) / R * sin (R * phi / r));
        return square;
    }

    double Epicycloid::radCurvatue(double phi, double dist) const {
        double num = (r * r + dist * dist - 2 * dist * r * cos(R * phi / r));
        double tmp = pow(num, 1.5);
        double denom = fabs(pow(r, 3) + dist * dist * (R + r) - dist * r * (R + 2 * r) * cos(R * phi / r));
        double rad = (R + r) * tmp / denom;
        return rad;
    }
}


