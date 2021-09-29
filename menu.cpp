#include "menu.h"

int getPosNumb(const char* msg, double &a) {
    const char* errmsg = "";
    do {
        std::cout << errmsg << std::endl;
        std::cout << msg;
        errmsg = "You are wrong! Try again!";
        if (getNum(a) < 0)
            return 1;
    } while (a < 0);
    return 0;
}

void menu(Lab2::Epicycloid &epic) {
    int todo;
    do {
        std::cout << "0. Exit" << std::endl;
        std::cout << "1. Set R" << std::endl;
        std::cout << "2. Get R" << std::endl;
        std::cout << "3. Set r" << std::endl;
        std::cout << "4. Get r" << std::endl;
        std::cout << "5. Point coords" << std::endl;
        std::cout << "6. Epicycloid type" << std::endl;
        std::cout << "7. The borders" << std::endl;
        std::cout << "8. Square" << std::endl;
        std::cout << "9. The radius of the curvature" << std::endl;
        std::cout << "Enter the command: ";
        getNum(todo);
        switch(todo) {
            case 0:
                std::cout << "Exit!" << std::endl;
                break;
            case 1:
                SetR(epic);
                break;
            case 2:
                std::cout << "R = " << epic.getR() << std::endl;
                break;
            case 3:
                Setr(epic);
                break;
            case 4:
                std::cout << "r = " << epic.getr() << std::endl;
                break;
            case 5:
                PointCoord(epic);
                break;
            case 6:
                EpicycloidType(epic);
                break;
            case 7:
                Borders(epic);
                break;
            case 8:
                Square(epic);
                break;
            case 9:
                RadiusCurv(epic);
                break;
            default:
                std::cout << "Error! There is not such command!" << std::endl;
        }
    } while (todo != 0);
}

void SetR(Lab2::Epicycloid &epic) {
    double R;
    getPosNumb("Enter the number R: ", R);
    epic.setR(R);
}

void Setr(Lab2::Epicycloid &epic) {
    double r;
    getPosNumb("Enter the number r: ", r);
    epic.setr(r);
}

void PointCoord(Lab2::Epicycloid &epic) {
    double phi, dist;
    std::cout << "Enter the angle: " << std::endl;
    getNum(phi);
    getPosNumb("Enter the distance", dist);
    Lab2::Point point = epic.pCoord(phi, dist);
    std::cout << "x coord: " << point.x << " y coord: " << point.y << std::endl;
}

void EpicycloidType(Lab2::Epicycloid &epic) {
    double dist;
    getPosNumb("Enter the distance", dist);
    std::cout << epic.epicType(dist) << std::endl;
}

void Borders(Lab2::Epicycloid &epic) {
    double dist;
    std::cout << "Enter the distance: " << std::endl;
    getNum(dist);
    Lab2::PairOfRad pair = epic.RadBorders(dist);
    std::cout << "First radius: " << pair.first_rad << " Second radius: " << pair.second_rad << std::endl;
}

void Square(Lab2::Epicycloid &epic) {
    double phi, dist;
    std::cout << "Enter the angle: " << std::endl;
    getNum(phi);
    getPosNumb("Enter the distance", dist);
    std::cout << epic.sectorSquare(phi, dist) << std::endl;
}

void RadiusCurv(Lab2::Epicycloid &epic) {
    double phi, dist;
    std::cout << "Enter the angle: " << std::endl;
    getNum(phi);
    getPosNumb("Enter the distance", dist);
    std::cout << epic.radCurvatue(phi, dist) << std::endl;
}