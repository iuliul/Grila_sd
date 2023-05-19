//
// Created by Iulia Salau on 19.05.2023.
//
#include <vector>
#include <iostream>
#include "Vector_dinamic.h"

Vector_dinamic::Vector_dinamic(){}

void Vector_dinamic::adaugaElem(int element){
    vd.push_back(element);//adauga valorile oferite in vector
}

int Vector_dinamic::getElem()const {
    if (vd.empty()) {
        return 0;//daca vectorul este gol returneaza 0, se opreste (valoare maxima implicita este 0)
    }
    int max = 0;
    for (int i = 0; i < vd.size(); i++) {
        if (vd[i] % 2 == 0 && vd[i] > max) {
            max = vd[i];
        }
    }
    return max;
}
