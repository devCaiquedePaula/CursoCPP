#include "comando_switch_case.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string jogos;
    bool idValido = false;

    do {
        cout << "Digite o ID do jogo: ";
        cout << "LISTA:\n";
        cout << "[1] = League of Legends\n";
        cout << "[2] = Valorant\n";
        cout << "[3] = Counter-Strike: Global Offensive\n";
        cout << "[4] = Dota 2\n";
        cout << "[5] = Fortnite\n";
        cin >> jogos;

        switch (stoi(jogos)) {
            case 1:
                cout << "Voce escolheu League of Legends!" << "\n";
                cout << "League of Legends e um jogo de estrategia em tempo real desenvolvido pela Riot Games." << "\n";
                idValido = true;
                break;
            case 2:
                cout << "Voce escolheu Valorant!" << "\n";
                cout << "Valorant e um jogo de tiro em primeira pessoa desenvolvido pela Riot Games." << "\n";
                idValido = true;
                break;
            case 3:
                cout << "Voce escolheu Counter-Strike: Global Offensive!" << "\n";
                cout <<
                        "Counter-Strike: Global Offensive e um jogo de tiro em primeira pessoa desenvolvido pela Valve Corporation."
                        << "\n";
                idValido = true;
                break;
            case 4:
                cout << "Voce escolheu Dota 2!" << "\n";
                cout << "Dota 2 e um jogo de estrategia em tempo real desenvolvido pela Valve Corporation." << "\n";
                idValido = true;
                break;
            case 5:
                cout << "Voce escolheu Fortnite!" << "\n";
                cout << "Fortnite e um jogo de tiro em terceira pessoa desenvolvido pela Epic Games." << "\n";
                idValido = true;
                break;
            default:
                cout << "ID do jogo invalido! Tente novamente.\n\n";
                idValido = false;
        }
    } while (!idValido);

    cout << "Obrigado por escolher um jogo!" << "\n";

    // switch aninhado
    char equipe;
    char piloto;

    cout << "Escolha a equipe de F1:\n";
    cout << "[A] Mercedes | [B] Red Bull | [C] Ferrari | [D] McLaren\n";
    cout << "[E] Alpine   | [F] Williams | [G] Audi    | [H] Aston Martin\n";
    cout << "[I] VCarb    | [J] Cadillac | [K] Haas\n";
    cout << "Entrada: ";
    cin >> equipe;
    equipe = toupper(equipe); // Garante que 'a' vire 'A'

    switch (equipe) {
        case 'A':
            cout << "Mercedes selecionada. Escolha o piloto:\n[A] Kimi Antonelli\n[B] George Russell\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Antonelli!\n";
                    break;
                case 'B': cout << "Voce escolheu Russell!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;

        case 'B':
            cout << "Red Bull selecionada. Escolha o piloto:\n[A] Max Verstappen\n[B] Isaac Hadjar\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Verstappen!\n";
                    break;
                case 'B': cout << "Voce escolheu Hadjar!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        case 'C':
            cout << "Ferrari selecionada. Escolha o piloto:\n[A] Charles Leclerc\n[B] Lewis Hamilton\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Leclerc!\n";
                    break;
                case 'B': cout << "Voce escolheu Hamilton!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        case 'D':
            cout << "McLaren selecionada. Escolha o piloto:\n[A] Lando Norris\n[B] Oscar Piastri\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Norris!\n";
                    break;
                case 'B': cout << "Voce escolheu Piastri!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        case 'E':
            cout << "Alpine selecionada. Escolha o piloto:\n[A] Franco Colapinto\n[B] Pierre Gasly\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Colapinto!\n";
                    break;
                case 'B': cout << "Voce escolheu Gasly!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        case 'F':
            cout << "Williams selecionada. Escolha o piloto:\n[A] Alex Albon\n[B] Carlos Sainz\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Albon!\n";
                    break;
                case 'B': cout << "Voce escolheu Sainz!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        case 'G':
            cout << "Audi selecionada. Escolha o piloto:\n[A] Gabriel Bortoleto\n[B] Nico Hülkenberg\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Bortoleto!\n";
                    break;
                case 'B': cout << "Voce escolheu Hülkenberg!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        case 'H':
            cout << "Aston Martin selecionada. Escolha o piloto:\n[A] Fernando Alonso\n[B] Lance Stroll\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Alonso!\n";
                    break;
                case 'B': cout << "Voce escolheu Stroll!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        case 'I':
            cout << "VCarb selecionada. Escolha o piloto:\n[A] Lindblad\n[B] Lawson\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Lindblad!\n";
                    break;
                case 'B': cout << "Voce escolheu Lawson!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        case 'J':
            cout << "Cadillac selecionada. Escolha o piloto:\n[A] Sergio Perez\n[B] Valteri Bottas\n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Perez!\n";
                    break;
                case 'B': cout << "Voce escolheu Bottas!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        case 'K':
            cout << "Haas selecionada. Escolha o piloto:\n[A] Oliver Bearman\n[B] Estaban Ocon \n";
            cin >> piloto;
            switch (toupper(piloto)) {
                case 'A': cout << "Voce escolheu Bearman!\n";
                    break;
                case 'B': cout << "Voce escolheu Ocon!\n";
                    break;
                default: cout << "Piloto inexistente.\n";
                    break;
            }
            break;
        default:
            cout << "Equipe inexistente.\n";
            break;
    }

    return 0;
}
