//
// Created by Iulia Salau on 19.05.2023.
//

#ifndef STRUCTURI_DE_DATE_VECTOR_DINAMIC_H
#define STRUCTURI_DE_DATE_VECTOR_DINAMIC_H


class Vector_dinamic {
private:
    std::vector<int>vd; //std::vector este un container de secvențe care încapsuleaza vectori de dimensiuni dinamice.
public:
    Vector_dinamic();
    void adaugaElem(int Element);//se adauga elementele in vectorul format mai sus
    int getElem() const;//??
    int aduna(int a, int b);
};


#endif //STRUCTURI_DE_DATE_VECTOR_DINAMIC_H
