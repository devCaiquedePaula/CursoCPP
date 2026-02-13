#include <iostream> // essa biblioteca é necessária para usar cout e endl

using namespace std; // isso evita que tenhamos que escrever std:: antes de cada uso de cout e endl

int main() {
    auto lang = "C++";
    // auto é um tipo de dado que o compilador deduz automaticamente, nesse caso ele deduz que lang é uma string literal
    cout << "Hello and welcome to " << lang << "!\n";

    int number;
    cout << "Enter a number: "; // cout é usado para imprimir a mensagem "Enter a number: " na tela, solicitando ao usuário que insira um número
    cin >> number; // cin é usado para ler a entrada do usuário e armazená-la na variável number

    if (number / 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    system("pause"); // isso é usado para pausar a execução do programa e esperar que o usuário pressione uma tecla antes de fechar a janela do console
    return 0;
}
