#include <iostream>
#include <cstring>
#include "Functii/Vezi_magazin.h"
#include "Functii/Cumpara_joc.h"
#include "Functii/Instaleaza_joc.h"
#include "Functii/Dezinstaleaza.h"
#include "Functii/Vezi_Cos.h"
#include "Functii/Vezi_Instalate.h"

using namespace std;

int main(int nrArg, char **arguments) {

    if(nrArg == 1){
        cout << "Comenzi posibile: \n"
                "Vezi_magazin \n"
                "Cumpara_joc<idJoc> \n"
                "Vezi_Cos \n"
                "Instaleaza<idJoc> \n"
                "Vezi_Instalate \n"
                "Dezinstaleaza<idJoc> \n";
        return 0;
    }

    if(strcmp(arguments[1], "Vezi_magazin") == 0){
        if(nrArg != 2){
            cout << "Sintaxa gresita\n";
        }else{
            vezi_magazin();
        }
        return 0;
    }

    if(strcmp(arguments[1], "Cumpara_joc") == 0){
        if(nrArg != 3){
            cout << "Sintaxa gresita \n";
        }else{
            cumpara_joc(arguments[2]);
        }
        return 0;
    }

    if(strcmp(arguments[1], "Vezi_Cos") == 0){
        if(nrArg != 2){
            cout << "Sintaxa gresita\n";
        }else{
            vezi_cos();
        }
        return 0;
    }

    if(strcmp(arguments[1], "Instaleaza") == 0){
        if(nrArg != 3){
            cout << "Sintaxa gresita \n";
        }else{
            instaleaza_joc(arguments[2]);
        }
        return 0;
    }

    if(strcmp(arguments[1], "Vezi_Instalate") == 0){
        if(nrArg != 2){
            cout << "Sintaxa gresita\n";
        }else{
            vezi_instalate();
        }
        return 0;
    }

    if(strcmp(arguments[1], "Dezinstaleaza") == 0){
        if(nrArg != 3){
            cout << "Sintaxa gresita \n";
        }else{
            dezinstaleaza(arguments[2]);
        }
        return 0;
    }


    cout << "Comanda invalida";
    return 0;
}
