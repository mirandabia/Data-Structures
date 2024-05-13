#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() 
{   
    // enumeração
    // cout << "====================================" << endl;

    // enum Streaming{AppleTV, AmazonPrime, CrunchyRoll, DisneyPlus, Netflix, Max};

    // Streaming streamingSubscription = CrunchyRoll;

    // switch (streamingSubscription)
    // {
    //     case AppleTV:
    //         cout << "Nunca usei... não sei como é... [" << streamingSubscripion << "]" << endl;
    //         break;
    //     case CrunchyRoll:
    //         cout << "Muito bom... [" << streamingSubscripion << "]" << endl;
    //         break;
    //     default:
    //         cout << "NADA" << endl;
    // }


    cout << "====================================" << endl;

    enum Meses {Janeiro = 1, Fevereiro, Marco, Abril, Maio};

    Meses mesProvas = Maio;

    cout << "Mês das Provas: " << mesProvas << endl;

    cout << "====================================" << endl;

    enum Semana {Segunda = 10, Terça = 1, Quarta = -3};

    Semana diaPalestra = Quarta;
    cout << "Dia da Palestra: " << diaPalestra << endl;

    return 0;  
}
