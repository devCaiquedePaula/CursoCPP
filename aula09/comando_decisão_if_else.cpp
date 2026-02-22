//
// Created by kiq98 on 20.02.26.
//

#include "comando_decisão_if_else.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nome;
    double nota1, nota2, nota3;

    inicio:

    cout << "Digite o nome do aluno: ";
    cin >> nome;
    cout << "Digite a nota 1: ";
    cin >> nota1;
    cout << "Digite a nota 2: ";
    cin >> nota2;
    cout << "Digite a nota 3: ";
    cin >> nota3;

    double media = (nota1 + nota2 + nota3) / 3.0;
    cout << fixed << setprecision(2); // Configura a precisão para 2 casas decimais

    if (media >= 7.0) {
        cout << "Aluno " << nome << " aprovado com média " << media << "\n";
    } else if (media == 6.0) {
        cout << "Aluno " << nome << " em recuperação com média " << media << "\n";
    } else {
        cout << "Aluno " << nome << " reprovado com média " << media << "\n";
    }

    cout << "Gostaria de calcular a média de outro aluno? (s/n): ";
    char resposta;
    cin >> resposta;
    if (resposta == 's' || resposta == 'S') {
        goto inicio;
    } else {
        cout << "Encerrando o programa. Até mais!\n";
    }

    /* O Operador ternario (?:) é uma forma concisa de expressar uma condição if-else. Ele tem a seguinte sintaxe:
    * condição ? expressão_se_verdadeira : expressão_se_falsa;
    * O operador ternário avalia a condição e retorna a expressão_se_verdadeira se a condição for verdadeira, ou a expressão_se_falsa se a condição for falsa.
    * Exemplo:
    */
    int x;
    cout << "Digite um numero: ";
    cin >> x;
    const string resultado = (x > 5) ? "Maior que 5" : "Menor ou igual a 5";
    cout << resultado;

    return 0;
}
