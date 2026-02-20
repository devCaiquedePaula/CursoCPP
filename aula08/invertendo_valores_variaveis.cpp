//
// Created by kiq98 on 20.02.26.
//

#include "invertendo_valores_variaveis.h"
#include <iostream>

using namespace std;

int main() {
    // Invertendo o valor de uma variável - forma mais simples/tradicional
    int num = 10;
    cout << num << "\n";
    num = num * -1;
    cout << num << "\n";

    // Invertendo o valor de uma variável usando operador de inversão de sinal (-)
    int num2 = 20;
    cout << num2 << "\n";
    num2 = -num2;
    cout << num2 << "\n";

    // Invertendo o valor de uma variável usando operador de atribuição composto (-=)
    int num3 = 30;
    cout << num3 << "\n";
    //num3 -= num3 * 2; // Subtrai o valor atual de num3 multiplicado por 2, resultando no valor invertido
    num3 =-num3; // Atribui o valor negativo de num3 a si mesmo, invertendo seu valor
    cout << num3 << "\n";
    return 0;
}