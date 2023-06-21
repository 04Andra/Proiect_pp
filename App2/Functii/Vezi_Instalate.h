#include <iostream>
#include <fstream>

using namespace std;

#ifndef APP2_VEZI_INSTALATE_H
#define APP2_VEZI_INSTALATE_H

void vezi_instalate(){

    string FISIER_INSTALATE = "../Jocuri_Instalate.txt";

    ifstream fin(FISIER_INSTALATE);

    string aux;

    while(getline(fin, aux)){ //ID

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

#endif //APP2_VEZI_INSTALATE_H
