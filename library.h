#ifndef LAB2WORK_LIBRARY_H
#define LAB2WORK_LIBRARY_H

namespace Lab2 {

    typedef struct Point {
        double x;
        double y;
    } Point;

    typedef struct PairOfRad {
        double first_rad;
        double second_rad;
    } PairOfRad;

    class Epicycloid {
    private:
        double R;
        double r;
    public:
        Epicycloid() : R(0), r(0) {};
        Epicycloid (double Rad, double rad) : R(Rad), r(rad) {};
        void setR(double Rad);
        void setr(double rad);
        double getR() const { return R; }
        double getr() const { return r; }

        Point pCoord(double phi, double dist) const;
        int epicType(double dist) const;
        PairOfRad RadBorders(double dist) const;
        double sectorSquare(double phi, double dist) const;
        double radCurvatue(double phi, double dist) const;

    };
}
#endif
