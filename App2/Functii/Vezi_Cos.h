#include <iostream>
#include <fstream>

using namespace std;

#ifndef APP2_VEZI_COS_H
#define APP2_VEZI_COS_H

void vezi_cos(){
    string FISIER_COS = "../Cos.txt";

    ifstream fin(FISIER_COS);

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

#endif //APP2_VEZI_COS_H
