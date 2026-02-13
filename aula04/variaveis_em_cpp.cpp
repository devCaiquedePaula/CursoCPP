//
// Created by kiq98 on 12.02.26.
//

#include "variaveis_em_cpp.h"
#include <iostream>

using namespace std;

int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    double altura;
    cout << "Digite sua altura: ";
    cin >> altura;

    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;

    bool isStudent;
    cout << "Você é estudante? (1 para sim, 0 para não): ";
    cin >> isStudent;

    cout << "Imprimindo os valores digitados:" << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
    cout << "Letra: " << letra << endl;
    if (isStudent == 1) {
        cout << "Você é estudante." << endl;
    } else {
        cout << "Você não é estudante." << endl;
    }

    return 0;
}

