/**
 * \file main.cpp
 * \version 1.0.0
 * \author Pereira Gabriel
 * \date : 04.10.2024
 * \brief : Affiche tous les nombres premiers de 2 jusqu'au chiffre entré
 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Ce programme affiche tous les nombres premiers de 2 jusqu'au chiffre entré par l'utilisatuer." << endl;

    char choix;
    do {
        int nombre_saisie;
        do {
            cout << "entrer une valeur [2-1000] : ";
            cin >> nombre_saisie;
            cout << endl;
        } while (nombre_saisie < 2 || nombre_saisie > 1000);

        cout << "Voici la liste des nombres premiers" << endl;
        for (int auMax = 2; auMax <= nombre_saisie; ++auMax) {
            int comptage = 0;
            for (int diviseur = 2; diviseur < auMax; ++diviseur) {
                if (auMax % diviseur == 0) {
                    ++comptage;
                }
            }
            if (comptage == 0) {
                cout << '\t' << auMax << " ";
            }
        }
        cout << endl;

        do {
            cout << "Voulez-vous recommencer [O/N] : ";
            cin >> choix;
            cout << endl;
        } while (choix != 'O' && choix != 'N');
    } while (choix != 'N');

    cout << "Fin de programme" << endl;
    return EXIT_SUCCESS;
}