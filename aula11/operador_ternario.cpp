//
// Created by kiq98 on 03.03.26.
//

#include "operador_ternario.h"
#include <iostream>

using namespace std;
// O Operador ternario (?:) é uma forma concisa de expressar uma condição if-else. Ele tem a seguinte sintaxe:
// condição ? expressão_se_verdadeira : expressão_se_falsa;
// O operador ternário avalia a condição e retorna a expressão_se_verdadeira se a condição for verdadeira, ou a expressão_se_falsa se a condição for falsa.
// Exemplo:
int main() {
    int grade1, grade2;

    cout << "First grade: ";
    cin >> grade1;
    cout << "Second grade: ";
    cin >> grade2;

    int note = grade1 + grade2;

    string result = (note >= 60) ? "Approved" : "Failed";
    cout << "The student is: " << result << "\n";

    cout << "------------------------------------\n";

    // Criar uma função que vai incrementar ou decrementar um valor dependendo do operador passado
    int value;
    char op;

    cout << "Enter a value: ";
    cin >> value;
    cout << "Enter an operator (+ or -): ";
    cin >> op;

    value = (op == '+') ? ++value : (op == '-') ? --value : value;
    cout << "The new value is: " << value << "\n";

    return 0;
}