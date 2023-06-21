#include <iostream>

using namespace std;

#ifndef APP2_CUMPARA_JOC_H
#define APP2_CUMPARA_JOC_H

void cumpara_joc(const string idJocDeCumparat){

    string FISIER_MAGAZIN = "../../Share/Fisiere/Store.txt";

    bool gasit = false;

    string denumire, nrJocuri;
    int id, nrCumparari;
    double pret, memorie;

    ifstream fin(FISIER_MAGAZIN);

    getline(fin, nrJocuri); //Citim numarul de jocuri

    for(int i = 0; i < stoi(nrJocuri); i++){
        fin >> id; fin.ignore(); // ID

        getline(fin, denumire); //NUME
        fin >> pret >> memorie; fin.ignore();

        if(id == stoi(idJocDeCumparat)){ //gasim jocul
            gasit = true;

            ofstream fout("../Cos.txt", std::ios_base::app); // Adaugam in cos

            fout << id << '\n' << denumire << '\n' << pret << '\n' << memorie << '\n';

            fout.close();
            cout<<"Jocul a fost achizitionat!";
        }
    }

    fin.close();

    if(!gasit){
        cout << "Nu exista id-ul acestui joc! \n";
    }
}

#endif //APP2_CUMPARA_JOC_H
