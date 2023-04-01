#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    char enter;
    int nome;

    cout <<
    "\n"
    "__________.__              .___  .___      \n"
    "\\______   \\  | _____     __| _/__| _/____  \n"
    " |    |  _/  | \\__  \\   / __ |/ __ |/ __ \\ \n"
    " |    |   \\  |__/ __ \\_/ /_/ / /_/ \\  ___/ \n"
    " |______  /____(____  /\\____ \\____ |\\___  >\n"
    "        \\/          \\/      \\/    \\/    \\/ \n";

    cout << "Digite alguma coisa para continuar" << endl;

    cin >> enter;

    cout << "Você retoma a sua consciência, o sol começa a bater na sua cara, já é dia." << endl;
    cout << "Lentamente os seus sentidos começam a voltar, você se um beco qualquer." << endl;

//    cout << "qual seu nome? " << endl;
//
//    cout << "1 - Deckard" << endl;
//    cout << "2 - Robert" << endl;
//    cout << "3 - Dom" << endl;
//
//    cout << "- ";
//
//    cin >> nome;
//
//    if (nome == 1) {
//        cout << "Deckard" << endl;
//    } else if (nome == 2) {
//        cout << "Robert" << endl;
//    } else if (nome == 3) {
//        cout << "Dom" << endl;
//    }
    return 0;
}
