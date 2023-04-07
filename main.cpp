#include <iostream>
#include <clocale>

using namespace std;

int main() {
    // Setando a linguagem para português
    setlocale(LC_ALL, "");

    int nome, resultado, dinheiro = 0;

    // Tela de abertura em ascii art

    // \\ significa que o \ não é um caractere de escape
    cout <<
         "\n"
         "__________.__              .___  .___      \n"
         "\\______   \\  | _____     __| _/__| _/____  \n"
         " |    |  _/  | \\__  \\   / __ |/ __ |/ __ \\ \n"
         " |    |   \\  |__/ __ \\_/ /_/ / /_/ \\  ___/ \n"
         " |______  /____(____  /\\____ \\____ |\\___  >\n"
         "        \\/          \\/      \\/    \\/    \\/ \n";

    cout << "Digite enter para continuar..." << endl;

    // Pausa o programa até que o usuário aperte enter
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

    // if para escolha de nome
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

    cin.get();

    cout << "\007";

    cin.get();

    cout << "Você se levanta e sente o seu celular vibrando no bolso." << endl;
    cout << "Você pega o celular e vê que é uma mensagem de um número desconhecido. Que diz: " << endl;

    cin.get();

    cout << " - Ah então você finalmente acordou?" << endl;

    cin.get();

    cout << "Você sente um frio na espinha e começa a olhar pros lados para tentar encontrar alguém." << endl;

    cin.get();

    cout << "\007";

    cout << " - Não adianta procurar por mim, você nunca vai me encontrar ";

    if (nome == 1) {
        cout << "Robert." << endl;
    } else if (nome == 2) {
        cout << "Dom." << endl;
    } else if (nome < 1 || nome > 2) {
        cout << "Deckard." << endl;
    }

    cout << endl;

    cin.get();

    cout << "\007" << " - Eu só quero o que é meu, e você sabe muito bem o que é." << endl;
    cout << "\007" << " - Mas para refrescar sua memória, 11.102.050." << endl;

    cout << endl;

    cout << "Você se questiona o que isso significa. O que é 11.102.050? Você deve todo esse dinheiro?" << endl;
    cout << "\007" << " - Então, vai me dar o que eu quero?" << endl;
    cout << "Parece que ele quer uma resposta." << endl;
    cout << "(0 = não, 1 = sim)" << endl;
    cout << "- ";
    cin >> resultado;

    if (resultado == 1) {
        cout << "\007" << " - Fingindo saber o que está acontecendo não é? Você realmente é simples de entender." << endl;
    }

    if (resultado != 1) {
        cout << "\007" << " - HAHAHAHAHAHAHAHAHHAH" << endl;
        cin.get();
        cout << "\007" << " - Você acha que tem escolha?" << endl;
    }

    cin.get();

    cout << "Você observa Jimmy, ele está com um sorriso ameno." << endl;
    cin.get();
    cout << "Então, num piscar de olhos, Jimmy está no chão." << endl;
    cin.get();
    cout << "Completamente desacordado, como se tivesse acabado de ter desmaiado." << endl;
    cin.get();
    cout << "Você não entende o que aconteceu com Jimmy, a sua cabeça está sangrando." << endl;
    cout << "Deseja examinar Jimmy?" << endl;

    cout << "(0 = não, 1 = sim)" << endl;
    cin >> resultado;

    // if para decisão do jogador
    int pegouBraco = 0;
    if(resultado == 1) {
        pegouBraco = 1;
        cout << "O braço mecânico dele está jogado do lado. Você não pensa duas vezes e pega ele pra você." << endl;
        cout << "Você sente que o braço mecânico é muito mais resistente que o seu, e que pode ser útil." << endl;
    } else {
        cout << "Você decide que não vale a pena tentar investigar."  << endl;
    }

    cout << endl;

    cin.get();
    cout << "Confuso, você decide que é melhor sair do beco que está." << endl;
    cout << "A cidade é putrida, o cheiro de fumaça misturado com óleo e metal toma conta de você." << endl;
    cout << "Por trás da cortina de gás preto dos carros que flutuam, relusindo, é possivel enchergar" << endl;
    cout << "Pessoas com membros ciberneticos, pernas braços, olhos, tudo que é possivel imaginar." << endl;
    cout << "São Paulo. A maior megalópole do mundo. Aqui é onde o mundo acaba, e todas as histórias começam." << endl;

    cin.get();

    cout << "------------------ Dia 08/11/2050 ------------------" << endl;
    cout << "Carteira: R$" << dinheiro << endl;
    cout << "----------------------------------------------------" << endl;

    cin.get();

    cout << "\007" << "Seu celular vibra novamente." << endl;
    cin.get();

    cout  << "\007" << "- Melhor você dar um jeito de conseguir o que eu quero, você tem 3 dias, você sabe do que eu sou capaz." << endl;
    cin.get();

    cout << "Juntar R$11.102.050? Você checa os bolsos. Não tem um centavo sobrando." << endl;

    cout << "Você pensa no que pode fazer..." << endl;
    if (pegouBraco == 1) {
        cout << "\007" << "." << endl;
    }

    cout << "Uma mulher começa a se aproximar. " << endl;
    cout << "Ela parece familiar, mas você não sabe de onde." << endl;
    cout << "Ela tem olhos verdes, não muito alta, está com um coque, parece que acabou de sair do trabalho." << endl;

    cin.get();

    cout << "Ela diz: - Oi? Você por aqui? Achei que não te veria mais." << endl;
    cout << "O que aconteceu ontem? Você olha confuso para a moça." << endl;

    cin.get();

    cout << "- Você tá machucado. Precisa de ajuda?" << endl;
    cout << "Sem opções melhores, você balança a cabeça afirmativamente." << endl;

    cin.get();

    cout << "- Eu sou a Sarah, que trabalha no bar, lembra? " << endl;
    cin.get();

    cout << "Memórias começam a aparecer na sua cabeça. Como flashes" << endl;
    cin.get();
    cout << "Você voltando de algum lugar..." << endl;
    cin.get();
    cout << "Entrando num bar, 'Buracco dûs Kuar`diddo..." << endl;
    cin.get();
    cout << "Uma moça, sorrindo pra você..." << endl;
    cin.get();

    cout << "- Lembrou? Então, do que você precisa?" << endl;
    cout << "1. Dinheiro" << endl;
    cout << "2. Curativos" << endl;
    cout << "3. Estadia" << endl;

    cout << "- ";
    cin >> resultado;

    if (resultado == 1) {
        cout << "Ah, infelizmente com isso eu não consigo te ajudar." << endl;
        cout << "Porém, o bar está precisando de novos funcionários, da uma passadinha lá mais tarde." << endl;
    }

    return 0;
}