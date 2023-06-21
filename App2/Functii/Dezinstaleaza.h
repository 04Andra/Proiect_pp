#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

#ifndef APP2_DEZINSTALEAZA_H
#define APP2_DEZINSTALEAZA_H

void dezinstaleaza(const string idJocDeDezinstalat){
    string NUME_FISIER = "../Jocuri_Instalate.txt";
    string NUME_FISIER_TEMP = "../Auxiliar.txt";

    ifstream fin(NUME_FISIER);
    if (!fin) {
        cout << "Nu se poate deschide fisierul 'Jocuri_Instalate.txt'." << endl;
        return;
    }

    ofstream fout(NUME_FISIER_TEMP);
    if (!fout) {
        cout << "Nu se poate deschide fisierul 'Auxiliar.txt' pentru scriere." << endl;
        return;
    }

    string id, nume, pret, memorie;
    bool gasit = false;

    while(getline(fin, id)) {

        if(stoi(id) == stoi(idJocDeDezinstalat)) { // SARIM DACA ASTA E JOCUL DE DEZINSTALAT

            gasit = true;

            getline(fin, nume);
            getline(fin, pret);
            getline(fin, memorie);
        }else {

            getline(fin, nume);
            getline(fin, pret);
            getline(fin, memorie);

            fout << id << '\n';
            fout << nume << '\n';
            fout << pret << '\n';
            fout << memorie << '\n';

        }

    }
    fin.close();
    fout.close();

    if(gasit) {

        //RESCIERE IN FISIERUL JOCURI INSTALATE
        fout.open(NUME_FISIER);
        fin.open(NUME_FISIER_TEMP);

        string aux;

        while(getline(fin, aux)){
            fout << aux << '\n';
        }

        fin.close();
        fout.close();

        cout << "Joc sters cu succes\n";

    }else{
        cout << "Acest joc nu este instalat";
    }

    //GOLESTE AUX

    fout.open(NUME_FISIER_TEMP);

    fout << "";

    fout.close();


}

#endif //APP2_DEZINSTALEAZA_H
