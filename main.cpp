#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int nome;

    cout <<
    "\n"
    "__________.__              .___  .___      \n"
    "\\______   \\  | _____     __| _/__| _/____  \n"
    " |    |  _/  | \\__  \\   / __ |/ __ |/ __ \\ \n"
    " |    |   \\  |__/ __ \\_/ /_/ / /_/ \\  ___/ \n"
    " |______  /____(____  /\\____ \\____ |\\___  >\n"
    "        \\/          \\/      \\/    \\/    \\/ \n";

    cout << "Digite enter para continuar..." << endl;

    cin.get();

    cout << "Isso é uma experiência interativa em um mundo cyberpunk," << endl;
    cout << "suas escolhas influenciarão sua jornada!" << endl;

    cin.get();

    cout << "Não há herois neste mundo, boa sorte!" << endl << endl;

    cin.get();

    cout << "Você retoma a sua consciência, o sol começa a bater na sua cara, já é dia." << endl;
    cout << "Lentamente os seus sentidos começam a voltar, você se vê em um beco qualquer." << endl;
    cout << "Um homem está sentado em cima de um lixeira ao seu lado, parece que ele estava esperando você acordar." << endl;
    cout << "O homem possui vestes rasgadas, deixando a mostra, seu braço prostético ." << endl;

    cin.get();

    cout << "Ele se levanta e se aproxima de você, e diz: " << endl;
    cout << " - Qual seu nome amigo?" << endl;
    cout << "Você se questiona fortemente, pois não lembra nem como foi parar ali ou o que estava fazendo na noite anterior." << endl << endl;

    cout << "(Escolha um nome)" << endl;

    cout << "1 - Robert" << endl;
    cout << "2 - Dom" << endl;
    cout << "3 - Deckard" << endl;

    cout << "- ";

    cin >> nome;

    cout << "- ";

    if (nome == 1) {
        cout << "Robert";
    } else if (nome == 2) {
        cout << "Dom";
    } else if (nome < 1 || nome > 2) {
        cout << "Deckard";
    }

    cout << "." << endl;

    cout << " - Entendi. Aqui é extremamente perigoso, e você parece ter apanhado bastante. Tem para onde ir?" << endl << endl;

    cin.get();

    cout << "Novamente você se questiona o motivo de estar ali, seu corpo realmente dói." << endl;
    cout << "Tem sangue na sua roupa e seu punho está muito machucado" << endl;
    cout << "Você não sabe o que fazer, mas o homem parece ser uma boa pessoa." << endl;

    cin.get();

    cout << "O homem diz:";
    cout << " - Meu nome é Jimmy, assim como os outros dessa região, moro por aqui mesmo." << endl;
    cout << "Ele estende a mão para te levantar, revelando que mais partes do seu corpo são feitos de metal." << endl;
    cout << "\007" << "Você se levanta e sente o seu celular vibrando no bolso." << endl;
    cout << "Você pega o celular e vê que é uma mensagem de um número desconhecido. Que diz: " << endl;

    cin.get();

    cout << " - Ah então você finalmente acordou?" << endl;

    cin.get();

    cout << "Você sente um frio na espinha e começa a olhar pros lados para tentar encontrar alguém." << endl;

    cin.get();

    cout << " - Não adianta procurar por mim, você nunca vai me encontrar ";

    if (nome == 1) {
        cout << "Robert.";
    } else if (nome == 2) {
        cout << "Dom.";
    } else if (nome < 1 || nome > 2) {
        cout << "Deckard.";
    }

    cout << endl;

    cin.get();

    cout << " - Eu só quero o que é meu, e você sabe muito bem o que é." << endl;
    cout << " - Mas para refrescar sua memória, 11.102.050." << endl;

    return 0;
}
