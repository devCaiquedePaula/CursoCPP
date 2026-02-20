//
// Created by kiq98 on 18.02.26.
//

#include "incremento_decremento_variaveis_operadores_pos_pre_fixados.h"
#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 10;
    int c = 2;
    int d = 5;

    cout << "Valor de a: " << a << "\n";
    cout << "Valor de b: " << b << "\n";
    cout << "Valor de c: " << c << "\n";
    cout << "Valor de d: " << d << "\n";

    /*
     * Operadores de incremento e decremento pos fixados
     * a++: Incrementa o valor de a em 1, mas retorna o valor original de a antes do incremento.
     * b--: Decrementa o valor de b em 1, mas retorna o valor original de b antes do decremento.
     * --c: Decrementa o valor de c em 1, e retorna o valor atualizado de c após o decremento.
     * ++d: Incrementa o valor de d em 1, e retorna o valor atualizado de d após o incremento.
     */
    a++;
    b--;
    --c;
    ++d;

    cout << "Valor de a pos incremento: " << a << "\n";
    cout << "Valor de b pos decremento: " << b << "\n";
    cout << "Valor de c pos decremento: " << c << "\n";
    cout << "Valor de d pos incremento: " << d << "\n";

    system("pause");
    return 0;
}