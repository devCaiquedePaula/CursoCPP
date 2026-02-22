//
// Created by kiq98 on 20.02.26.
//

#include "operadores_and_or_not.h"
#include <iostream>

using namespace std;

int main() {
    /* O Operador AND (&&) retorna true se ambos os operandos forem verdadeiros. Caso contrário, retorna false.
     * Sinal: &&
     * Tabela Verdade:
     * A     B     A && B
     * true  true  true
     * true  false false
     * false true  false
     * false false false
     */
    constexpr bool a = true;
    constexpr bool b = false;
    cout << "A AND B: " << (a && b) << "\n"; // Output: A AND B: 0 (false)

    /* O Operador OR (||) retorna true se pelo menos um dos operandos for verdadeiro. Retorna false apenas se ambos os operandos forem falsos.
     * Sinal: ||
     * Tabela Verdade:
     * A     B     A || B
     * true  true  true
     * true  false true
     * false true  true
     * false false false
     */
    cout << "A OR B: " << (a || b) << "\n"; // Output: A OR B: 1 (true)

    /* O Operador NOT (!) é um operador unário que inverte o valor lógico do operando. Se o operando for true, o resultado será false, e vice-versa.
     * Sinal: !
     * Tabela Verdade:
     * A     !A
     * true  false
     * false true
     */
    cout << "NOT A: " << (!a) << "\n"; // Output: NOT A: 0 (false)

    // OBS: 1 representa true e 0 representa false em C++.

    cout << "----------------------------------------------------\n";

    int num;
    cout << "Digite um numero: ";
    cin >> num;

    if (num > 0 && num < 10) {
        cout << "O numero " << num << " esta entre 0 e 10.\n";
    } else {
        cout << "O numero " << num << " nao esta entre 0 e 10.\n";
    }

    cout << "----------------------------------------------------\n";

    int age;
    cout << "Digite sua idade: ";
    cin >> age;

    if (age < 18 || age > 65) {
        cout << "Vc esta fora da faixa etaria de trabalho.\n";
    } else {
        cout << "Vc esta dentro da faixa etaria de trabalho.\n";
        cout << "vai trabalhar!\n";
    }

    cout << "----------------------------------------------------\n";

    int number;
    cout << "Digite um numero: ";
    cin >> number;

    if (!number) {
        cout << "O numero e zero.\n";
    } else {
        cout << "O numero e diferente de zero.\n";
    }

    cout << "----------------------------------------------------\n";

    return 0;
}
