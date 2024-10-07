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

    char retry;
    do {
        int number_enter;
        do {
            cout << "entrer une valeur [2-1000] : ";
            cin >> number_enter;
            cout << endl;
        } while (number_enter < 2 || number_enter > 1000);

        cout << "Voici la liste des nombres premiers" << endl;
        for (int number_tested = 2; number_tested <= number_enter; ++number_tested) {
            int counter = 0;
            for (int divider = 2; divider < number_tested; ++divider) {
                if (number_tested % divider == 0) {
                    ++counter;
                }
            }
            if (counter == 0) {
                cout << '\t' << number_tested << " ";
            }
        }
        cout << endl;

        do {
            cout << "Voulez-vous recommencer [O/N] : ";
            cin >> retry;
            cout << endl;
        } while (retry != 'O' && retry != 'N');
    } while (retry != 'N');

    cout << "Fin de programme" << endl;
    return EXIT_SUCCESS;
}