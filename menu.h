//
// Created by vadim on 23.09.2021.
//

#ifndef LABA2CLASS_MENU_H
#define LABA2CLASS_MENU_H
#include <iostream>
#include <limits>
#include "library.h"

template <typename T>
int getNum(T &numb) {
    while (true) {
        std::cin >> numb;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "ERROR! Invalid data! Try again! ";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return 1;
        }
    }
}

int getPosNumb(const char* errmsg, double &a);
void menu(Lab2::Epicycloid &epic);
void SetR(Lab2::Epicycloid &epic);
void Setr(Lab2::Epicycloid &epic);
void PointCoord(Lab2::Epicycloid &epic);
void EpicycloidType(Lab2::Epicycloid &epic);
void Borders(Lab2::Epicycloid &epic);
void Square(Lab2::Epicycloid &epic);
void RadiusCurv(Lab2::Epicycloid &epic);

#endif //LABA2CLASS_MENU_H
