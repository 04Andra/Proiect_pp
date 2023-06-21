#include <iostream>
#include <fstream>

using namespace std;

#ifndef APP2_INSTALEAZA_JOC_H
#define APP2_INSTALEAZA_JOC_H

void instaleaza_joc(const string idJocDeInstalat){
    string FISIER_COS = "../Cos.txt";

    bool gasit = false;

    string denumire, nrJocuri;
    int id, nrCumparari;
    double pret, memorie;

    ifstream fin(FISIER_COS);
    if (!fin) {
        cout << "Nu se poate deschide fisierul 'Cos.txt'." << endl;
        return;
    }

    while(fin>>id && !gasit){
        fin.ignore();
        getline(fin, denumire);
        fin >> pret >> memorie; fin.ignore();

        if(id == stoi(idJocDeInstalat)){ //gasim jocul
            gasit = true;

            ofstream fout("../Jocuri_Instalate.txt", std::ios_base::app); // Adaugam in fisier

            fout << id << '\n' << denumire << '\n' << pret << '\n' << memorie << '\n';

            fout.close();
            cout<<"Jocul a fost instalat!";

        }
    }

    fin.close();

    if(!gasit){
        cout << "Acest joc nu a fost cumparat! \n";
    }
}

#endif //APP2_INSTALEAZA_JOC_H
