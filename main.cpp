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

    cin.get();

    cout << "\007" << " - Eu só quero o que é meu, e você sabe muito bem o que é." << endl;
    cout << "\007" << " - Mas para refrescar sua memória, 10.102.050." << endl;

    cout << endl;

    cout << "Você se questiona o que isso significa. O que é 10.102.050? Você deve todo esse dinheiro?" << endl;
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
    cout << "Você não entende o que aconteceu com Jimmy, a cabeça dele está sangrando." << endl;
    cout << "Deseja examinar Jimmy?" << endl;

    cout << "(0 = não, 1 = sim)" << endl;
    cout << "- ";
    cin >> resultado;

    // if para decisão do jogador
    int pegouBraco = 0;
    if(resultado != 0) {
        pegouBraco = 1;
        cout << "Ainda em choque pelo que aconteceu você se aproxima de Jimmy" << endl;
        cout << "O braço mecânico dele está jogado do lado. Você não pensa duas vezes e pega ele pra você." << endl;
        cout << "Você sente que o braço mecânico é muito mais resistente que o seu, e que pode ser útil." << endl;
    } else {
        cout << "Você ainda em choque, não consegue olhar para ele novamente."  << endl;
    }

    cout << endl;

    cout << "Você decide que é melhor sair do beco que está." << endl;
    cin.get();
    cout << "A cidade é putrida, o cheiro de fumaça misturado com óleo e metal toma conta de você." << endl;
    cout << "Por trás da cortina de gás preto dos carros que flutuam, relusindo, é possivel enchergar" << endl;
    cout << "Pessoas com membros ciberneticos, pernas, braços, olhos, tudo que é possivel imaginar." << endl;
    cout << "São Paulo. A maior megalópole do mundo. Aqui é onde o mundo acaba, e todas as histórias começam." << endl;

    cin.get();

    cout << "------------------ Dia 11/11/2050 11:00 ------------------" << endl;
    cout << "Carteira: R$" << dinheiro << endl;
    cout << "----------------------------------------------------" << endl;

    cin.get();

    cout << "\007" << "Seu celular vibra novamente." << endl;
    cin.get();

    cout  << "- Melhor você dar um jeito de conseguir o que eu quero, você tem até o final do dia." << endl;
    cin.get();

    cout  << "\007" << "- Você sabe do que eu sou capaz." << endl;
    cin.get();

    cout << "Juntar R$10.102.050? Você checa os bolsos. Não tem um centavo sobrando." << endl;

    cout << "Você pensa no que pode fazer..." << endl;
    cin.get();

    cout << "Uma mulher começa a se aproximar. " << endl;
    cout << "Ela parece familiar, mas você não sabe de onde exatamente." << endl;
    cout << "Ela tem olhos verdes, não muito alta, está com um coque, parece que acabou de sair do trabalho." << endl;

    cin.get();

    cout << "Ela diz: - Oi? Você por aqui? Achei que não te veria mais depois de ontem." << endl;
    cout << "O que aconteceu ontem? Você olha confuso para a moça." << endl;

    cin.get();

    cout << "- Você tá machucado. Precisa de ajuda?" << endl;
    cout << "Sem opções melhores, você balança a cabeça afirmativamente." << endl;

    cin.get();

    cout << "- Eu sou a Sarah, que trabalha no bar, lembra? " << endl;
    cin.get();

    cout << "Memórias começam a aparecer na sua cabeça. Como flashes." << endl;
    cin.get();
    cout << "Você voltando de algum lugar..." << endl;
    cin.get();
    cout << "Entrando num bar, 'Abadia dos anjos'..." << endl;
    cin.get();
    cout << "Uma moça, sorrindo pra você..." << endl;
    cin.get();

    cout << "Ela continua: - Cê tá revirando os bolsos? Precisando de grana?" << endl;
    cin.get();
    cout << "- Ah, infelizmente com isso eu não consigo te ajudar." << endl;
    cin.get();
    cout << "- Porém o bar tá precisando de gente. Passa na Abadia lá pras 4 da tarde." << endl;
    cin.get();

    cout << "- Aliás, cê tá todo estrupiado. Tem lugar pra ir?" << endl;
    cin.get();
    cout << "Você não lembra se tem lugar pra ir, só lembra que estava vindo de algum lugar antes de chegar no bar." << endl;
    cin.get();
    cout << "- Eu não devia fazer isso, mas você deu sorte que eu fui com a sua cara, quer ir lá em casa tomar um banho?" << endl;

    int foiComSarah = 0;
    cout << "(0 = não, 1 = sim)" << endl;
    cout << "- ";
    cin >> resultado;
    if(resultado != 0) {
        foiComSarah = 1;
        cout << "Você decide que vale a pena tomar um banho. A moça te leva até o cubículo que ela mora, e é dificil não notar o quão pequeno é." << endl;
        cout << "chega estanhamente a lembrar um cativeiro, apenas com uma cama, um oculos de realidade aumentada," << endl;
        cout << "e umas 5 garrafas de algo que se assemelha a vodka espalhadas pelos cantos." << endl << endl;

        cin.get();

        cout << "Ela te mostra a direção do chuveiro, e você toma um banho que tanto precisava." << endl;
        cout << "Isso definitivamente vai te ajudar." << endl << endl;
        cout << "Vocês se despedem, e ela te dá o número dela, te desejando boa sorte no bar." << endl;
    }
    else {
        cout << "Você sente que não seria uma boa ideia ir na casa de alguém que mal lembra de ter visto uma vez." << endl;
        cout << "Você recusa fazendo um gesto com a mão." << endl;
        cout << "Ela meio decepcionada, se despede de você, e te deseja boa sorte no bar." << endl << endl;
    }
    cin.get();

    cout << "Agora é aproximadamente meio dia." << endl;
    int escolhaBraco = -1;
    if(pegouBraco == 1) {
        cout << "Você lembra do braço mecânico que pegou do Jimmy." << endl;
        cout << "Agora seria uma boa hora para decidir o que fazer com ele" << endl;
        cout << "0. Vender" << endl;
        cout << "1. Achar um mecânico, e implantá-lo" << endl;
        cout << "- ";
        cin >> escolhaBraco;
        cout << endl;
        if(escolhaBraco != 0) {
            escolhaBraco = 1;
            cout << "Não é muito difícil achar um bio-mecânico. O processo é simples, e rápido, porém na hora de pagar..." << endl;
            cout << "O bio-mecânico pergunta: - Eaê, como vai ser?" << endl;
            cout << "Ele te olha com cara de quem sabe o que está acontecendo." << endl << endl;
            cout << "- Cê deu sorte que hoje eu tô de bom humor. Então cê me deve um favor." << endl;
            cout << "- Dá umas porrada nesse maluco pra mim -ele te entrega uma foto-. Ele me deve uma grana. E toma isso como um aviso também." << endl;
            cout << "- Você é o proximo caso não fizer o que eu digo. Bota esse braço pra bom uso." << endl << endl;
            cout << "O braço se adapta a você rapidamente, você não sente falta do de carne e osso. Você é mais forte agora." << endl;
            cout << "Com um embrulho no estomago de ter duas dividas pra pagar." << endl;
        }
        else {
            dinheiro = 4000000;
            escolhaBraco = 0;
            cout << "Você encontra um vendedor de implantes na esquina, é tão comum quanto parece." <<  endl;
            cout << "Perto de você, um cara grita, com cordas vocais melhoradas mecanicamente:" << endl;
            cout << "- Três por 10.000! Três por 10.000!" << endl;

            cin.get();

            cout << "Você se aproxima, e o homem esguio com o que parece ser uma caixa de som no lugar do pescoço diz: " << endl;
            cout << "- HA HA AH - quase te ensurdecendo no processo -. O QUE TEMOS AQUI??" << endl;
            cout << "- MEU MANO JIMMY JÁ PERDEU O QUE EU VENDI PRA ELE?? TADINHO!!! MAS ASSIM É A VIDA NA LIBERDADE!!!" << endl;
            cout << "- AFIM DE FAZER UMA TROQUINHA?? HA HA AH." << endl;

            cin.get();

            cout << "- TE DOU 4.000.000 NESSA BELEZINHA!!! EU NÃO PASSO A PERNA EM CLIENTE!!! HA HA AH" << endl << endl;
            cout << "Relutantemente, você entrega o braço para o homem, que te dá o dinheiro, sorrindo. logo aumenta sua caixa de som e grita:" << endl;
            cout << "- MODELO 2049 X-FORCE DOUBLE, O BRAÇO MAIS AVANÇADO, ULTIMA GERAÇÃO, APENAS 10.000.000! HA HA AH!!!" << endl;
            cout << "Como um morador de rua tinha esse braço? E 10.000.000? Como assim? Isso é quase tudo que você precisava." << endl;
            cout << "Agora com dinheiro em mãos, mas com a vergonha de ter sido ludibriado." << endl << endl;
        }
    }

    cin.get();
    cout << "Você espera até ás 4 horas para ir até a Abadia dos Anjos..." << endl;
    cin.get();

    cout << "\007";
    cout << "Você reconhece esse som. Você olha o celular e:" << endl;
    cin.get();
    cout << "- Boa sorte hoje, a gente se encontra no final da noite." << endl;
    cout << "\007" << "- 10102050." << endl;
    cout << "Cada vez que você olha pra esse número, menos ele parece um número." << endl;
    cin.get();

    cout << "------------------ Dia 11/11/2050 16:00 ------------------" << endl;
    cout << "Carteira: R$" << dinheiro << endl;
    cout << "----------------------------------------------------" << endl;
    cin.get();

    cout << "Você chega até o bar, são 16h em ponto. Algo te diz que esse é o fim." << endl;
    cout << "Tem um guarda na sua frente, ele te observa, e diz: " << endl;
    if (foiComSarah != 1) {
        cout << "- Você espera mesmo que a gente iria aceitar um cara sujo tipo você aqui?" << endl;
        cout << "- Só entra se pagar amigão. Sem emprego pra você, maluco." << endl << endl;
        cout << "Você sem saber o que fazer, com uma ansiedade crescente, decide esperar até o final da noite proximo ao bar." << endl;
    }
    else {
        cout << "- Tá procurando emprego? Só entra por recomendação amigão. E depois de ontem, você vai precisar de uma das boas." << endl;
        cout << "Você decide ligar pra Sarah. Ela entende a situação, e pede pra você passar o telefone para o guarda." << endl;
        cout << "- Tudo certo patrão. Agora vamo vê o que você consegue fazer. Ele diz, te devolvendo o celular." << endl << endl;
    }

    cin.get();
    if(foiComSarah == 1 && escolhaBraco == 0) {
        cout << "- Claramente cê não consegue lutar pra me ajudar aqui na frente. Que pena, vai ter que trabalhar de barista mesmo." << endl;
        cout << "- Dá uma grana, mas não é tão gratificante. É sempre bom dar porrada em vagabundo. Segue lá pra cozinha patrão." << endl << endl;
        cout << "O dono do bar, que já está preparando a cozinha usando seus 4 braços mecanicos, te ensina a fazer alguns drinks." << endl;
        cout << "Durante o resto da noite, é isso que você faz. Porém, quão bem você faz esses drinks vai ditar o quanto você ganha." << endl;
        cout << "Você precisa fazer um drink Extra-Break-Core-Oil-Free. Qual dessas opções vai no drink?" << endl;
        cout << "1. Oléo" << endl;
        cout << "2. Nucleo Metálico, Tempero de Quebra Extrema." << endl;
        cout << "3. Orégano com agua." << endl;
        cout << "- " << endl;
        cin >> resultado;
        if(resultado == 2) {
            dinheiro = dinheiro + 3000000;
            cout << "O cliente te olha com orgulho, era extamente isso, ele aparentemente é algum magnata, e te dá 3.000.000 de gorgeta." << endl;
        }
        else {
            dinheiro = dinheiro + 1000000;
            cout << "O clinte fica extremamente irritado, e sai do bar. O drink tá completamente errado. Você só ganha o seu salário do dia." << endl;
        }
    }

    cout << endl;
    cin.get();
    bool trabalhouComJhonny = foiComSarah == 1 && escolhaBraco == 1;
    if(trabalhouComJhonny) {
        cout << "- Braço absurdo esse teu aí ein? Fica comigo aqui na portaria. Me ajuda a bater nos malandro que tentar entrar sem pagar, sempre tem." << endl;
        cout << "Você fica até o final da noite ajudando o Guarda, você descobre que o nome dele é Jhonny, e vocês viram amigos rápido." << endl;
        cout << "Pouco antes da meia noite, você já recebe o seu salário: Apenas R$102.050. Não é nem troco de bala." << endl;
        cout << "Porém, o Jhonny vai te ajudar em qualquer coisa que ele puder." << endl << endl;
    }

    if(pegouBraco == 1) {
        cin.get();
        cout << "Durante a noite, você enxerga o cara da foto, que o bio-mecânico disse que você precisava dar umas porradas." << endl;
        cout << "Deve ser fácil você pensa, agora você tem o seu braço mecânico, você se sente invencível." << endl;
        cout << "Sem exitação, você vai pra cima dele." << endl;
        if(trabalhouComJhonny) {
            dinheiro = 11000000;
            cin.get();
            cout << "O Jhonny nota o que está acontecendo, e pula pra cima do cara junto. Juntos, vocês debulham ele." << endl;
            cout << "Ele tinha uma grana, que é muito bem vinda, o Jhonny faz vista grossa, e deixa você pegar." << endl;
            cout << "E não é pouco dinheiro. R$9.000.000, que somado com o sálario fechava em 1.200.000" << endl;
        }
        else {
            dinheiro = 10000000;
            cout << "Você sozinho vai pra cima do cara. Ao notar o que aconteceu, ele retona com um soco na sua cara, com o braço mecanico que ele tem." << endl;
            cout << "A dor é imensa, você sente a pancada. Porém..." << endl;
            cout << "Seu braço começa a se mexer sozinho, e o seu corpo responde." << endl;
            cout << "'Modo de emergencia ativado, inoperante anteriormente por desativação. Ativação forçada em 3, 2, 1...'" << endl;
            cout << "Num piscar de olhos, ele tá no chão, você nem cosegue entender, já que está caindo por causa do soco que tomou, mas tem certeza" << endl;
            cout << "Você ganhou. Porém, ainda assim, cai com a concussão do soco." << endl << endl;
        }
    }

    cout << "------------------ Dia 11/11/2050 23:00 ------------------" << endl;
    cout << "Carteira: R$" << dinheiro << endl;
    cout << "----------------------------------------------------" << endl;

    cin.get();

    if (dinheiro < 10102050) {
        cout
                << "Quando da 23 horas em ponto, você percebe que está acabado, pois não conseguiu todo o dinheiro durante o dia."
                << endl;
        cout
                << "Completamente desolado, você observa melhor o valor que você deve e percebe que se parece com uma data, mais especificamente o dia de ontem."
                << endl;
        cout << "Quando se dá conta disso, suas memórias começam do dia anterior começam a voltar." << endl;
        cout << "Uma briga de bar, uma aposta, uma pessoa a qual você deve. Tudo isso começa a pipocar na sua cabeça."
             << endl;
        cout << " - Ah ";

        if (nome == 1) {
            cout << "Robert." << endl;
        } else if (nome == 2) {
            cout << "Dom." << endl;
        } else if (nome < 1 || nome > 2) {
            cout << "Deckard." << endl;
        }

        cout << " - Finalmente você se lembrou do que aconteceu ontem a noite?" << endl;
        cout << "Olhando para trás assustado, uma figura alta com um sobretudo preto e um chapéu se projeta." << endl;
        cout << "E ele continua falando." << endl;

        cin.get();

        cout << "- Lembrou da briga com o seu chefe? de vir beber nesse bar? " << endl;
        cout
                << "de apostar tudo o que tinha e o que não tinha? De apanhar em um beco escuro onde ninguém poderia te ajudar?"
                << endl;

        if (nome == 1) {
            cout << "Robert." << endl;
        } else if (nome == 2) {
            cout << "Dom." << endl;
        } else if (nome < 1 || nome > 2) {
            cout << "Deckard." << endl;
        }

        cout << " - Você é tão tolo que não se deu conta do que eu realmente vim buscar." << endl;

        cout << " - Quem caralhos é você? ." << endl;

        cout << " - Eu tenho muitos nomes. Mas de onde eu venho, costumam me chamar de" << endl;
        cout << " - Morte..." << endl;

        cin.get();


        cout << " - Essa data, é a data em que você morreu." << endl;
        cout << " - Sem ajuda, sozinho, assim como foi na sua vida inteira, alguém que sempre desprezou os outros."
             << endl;
        cout << " - Não merecia um final melhor." << endl;

        cin.get();

        cout << " - Mas fique tranquilo ";

        if (nome == 1) {
            cout << "Robert. Você vai sofrer muito mais no lugar que eu vou te levar." << endl;
        } else if (nome == 2) {
            cout << "Dom. Você vai sofrer muito mais no lugar que eu vou te levar." << endl;
        } else if (nome < 1 || nome > 2) {
            cout << "Deckard. Você vai sofrer muito mais no lugar que eu vou te levar." << endl;
        }

        cout << " - E não se preocupe, você vai sofrer sozinho, assim como é do seu agrado HAHAHAHAHA." << endl;
    }

    if (dinheiro >= 10102050) {
        cout << "Depois do seu expediente acabar, você sai todo feliz, por que conseguiu todo dinheiro." << endl;
        cout << "Olha o seu celular e vê se não deixou nenhuma mensagem passar." << endl;
        cout << "Quando você percebe, você ouve uma voz atrás de você." << endl;

        if (nome == 1) {
            cout << "- Olha só Robert, não é que você conseguiu?" << endl;
        } else if (nome == 2) {
            cout << "- Olha só Dom, não é que você conseguiu?" << endl;
        } else if (nome < 1 || nome > 2) {
            cout << "- Olha só Deckard, não é que você conseguiu?" << endl;
        }

        cout << "Você se vira e da de cara com uma figura alta com um sobretudo preto e um chapéu." << endl;
        cout << "Você nem pensa duas vezes e se prepara para atacar, mas é inútil já que simplesmente atravessa o sujeito." << endl;

        if (nome == 1) {
            cout << "- HAHAHAHA, ah Robert, não teste minha paciência, por mim você nem teria essa chance." << endl;
        } else if (nome == 2) {
            cout << "- HAHAHAHA, ah Dom, não teste minha paciência, por mim você nem teria essa chance." << endl;
        } else if (nome < 1 || nome > 2) {
            cout << "- HAHAHAHA, ah Deckard, não teste minha paciência, por mim você nem teria essa chance." << endl;
        }

        cin.get();

        cout << "- Infelizmente ou felizmente, você provou pelo menos um pouco que mudou a sua forma de pensar." << endl;
        cout << "- Já que você viveu toda a sua vida de forma egoista e sem sequer, pensar em ajudar ou receber ajuda dos outros." << endl;

        cin.get();

        cout << "- Isso não passava de um teste para saber se você realmente merecia estar vivo, e você me mostrou que sim." << endl;
        cout << "- Mas você não precisa de mais explicações, quando você acordar vai voltar a viver normalmente." << endl;

        cin.get();

        if (nome == 1) {
            cout << "- Até o nosso próximo encontro Robert, e não se esqueça que eu estou sempre te observando." << endl;
        } else if (nome == 2) {
            cout << "- Até o nosso próximo encontro Dom, e não se esqueça que eu estou sempre te observando." << endl;
        } else if (nome < 1 || nome > 2) {
            cout << "- Até o nosso próximo encontro Deckard, e não se esqueça que eu estou sempre te observando." << endl;
        }

        cout << "E a figura misteriosa simplesmente desaparece." << endl;
        cout << "Você fica ali parado, sem saber o que fazer, tentando compreender o que aconteceu." << endl;

        cin.get();

        cout << "No dia seguinte quando acorda, você se depara com um mundo diferente do seu." << endl;
        cout << "Você checa o calendário e descobre que na real, está no dia 13/04/2023, e você está atrasado para o trabalho." << endl;
        cout << "Você se deita novamente incrédulo com o que acabou de acontecer, pensando se de alguma forma isso foi real." << endl;
        cout << "Você vê que recebeu uma mensagem no seu celular." << endl;

        cin.get();

        if (nome == 1) {
            cout << "- Cuide bem dessa sua nova chance Robert HAHAHAHAHA." << endl;
        } else if (nome == 2) {
            cout << "- Cuide bem dessa sua nova chance Dom HAHAHAHAHA." << endl;
        } else if (nome < 1 || nome > 2) {
            cout << "- Cuide bem dessa sua nova chance Deckard HAHAHAHAHA." << endl;
        }

        cout << "Um pouco assustado mas mais aliviado, você tenta ser mais amigável ao longo de sua vida." << endl;
    }

    cout << "Dessa forma acaba sua experiência nesse mundo, lembrando que você sempre pode jogar de novo e tentar fazer novas esolhas." << endl;
    cout << "Talvez você tenha um final diferente." << endl << endl;
    cout << "Obrigado por jogar!" << endl;

    return 0;
}