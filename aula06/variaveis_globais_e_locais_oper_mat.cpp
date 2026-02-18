//
// Created by kiq98 on 13.02.26.
//

#include "variaveis_globais_e_locais_oper_mat.h"
#include <iostream>

using namespace std;

int n1, n2; // Variaveis globais, podem ser acessadas por qualquer funcao do programa

int main() {

    string nome; // Variavel local

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "Ola, " << nome << "!" << "\n";
    cout << "Adicao: " << n1 + n2 << "\n";
    cout << "Subtracao: " << n1 - n2 << "\n";
    cout << "Multiplicacao: " << n1 * n2 << "\n";
    cout << "Divisao: " << n1 / n2 << "\n";
    cout << "Resto: " << n1 % n2 << "\n";

    return 0;
}
