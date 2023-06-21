#include <iostream>
#include <fstream>

using namespace std;

#ifndef APP2_VEZI_MAGAZIN_H
#define APP2_VEZI_MAGAZIN_H

void vezi_magazin(){
    string FISIER_MAGAZIN = "../../Share/Fisiere/Store.txt";

    ifstream fin(FISIER_MAGAZIN);

    int nrJocuri;
    string aux;

    fin >> nrJocuri; fin.ignore();

    for(int i = 0; i < nrJocuri; i++){
        getline(fin, aux); //ID
        cout << aux << ". ";

        getline(fin, aux); //NUME
        cout << aux << ", ";

        getline(fin, aux); //PRET
        cout << "PRET: " << aux << ", ";

        getline(fin, aux);// memorei

        cout << " MEMORIE NECESARA: " << aux << '\n';
    }

    fin.close();
}

#endif //APP2_VEZI_MAGAZIN_H
