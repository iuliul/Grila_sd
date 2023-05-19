#include <iostream>
#include "Vector_dinamic.h"

int main(){
    Vector_dinamic vd;
    vd.adaugaElem(1);
    vd.adaugaElem(11);
    vd.adaugaElem(9);
    vd.adaugaElem(8);

    int maxim = vd.getElem();
    std::cout<<"Se va afisa: "<<maxim;
    return 0;
}


































//Ce se va afisa in urma secventei de cod?
//
//#include <vector>
//#include <iostream>
//
//using namespace std;
//class VectorDinamic{
//private:
//    std::vector<int>vd; //std::vector este un container de secvențe care încapsuleaza vectori de dimensiuni dinamice.
//public:
//    VectorDinamic();
//    void adaugaElem(int Element);//se adauga elementele in vectorul format mai sus
//    int getElem() const;//??
//
//};
//
//VectorDinamic::VectorDinamic(){}
//
//void VectorDinamic::adaugaElem(int element){
//    vd.push_back(element);//adauga valorile oferite in vector
//}
//int VectorDinamic::getElem()const {
//    if (vd.empty()) {
//        return 0;//daca vectorul este gol returneaza 0, se opreste (valoare maxima implicita este 0)
//    }
//    int max = 0;
//    for (int i = 0; i < vd.size(); i++) {
//        if (vd[i] % 2 == 0 && vd[i] > max) {
//            max = vd[i];
//        }
//    }
//    return max;
//}
//
//int main(){
//    VectorDinamic vd;
//    vd.adaugaElem(1);
//    vd.adaugaElem(11);
//    vd.adaugaElem(9);
//    vd.adaugaElem(8);
//
//    int maxim = vd.getElem();
//    std::cout<<"Se va afisa: "<<maxim<<endl;
//    return 0;
//}
//
//
//a)1
//b)11
//c)9
//d)8

//Justificare: grila corecta este grila d) deoarece programul NU returenaza doar cea mai mare valoare din vector,
//ci returneaza cea mai mare valoare para din vector. Asadar cea mai mare valoare para din vectorul de mai sus este 8.


