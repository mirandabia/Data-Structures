#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// aula sobre operadores de comparação e switch case 
int main()
{
    // int iValor = 42;
    // int iValorLido = 0;
    // int iResultado = 0;

    // cin >> iValorLido;

    // iResultado = (iValorLido < iValor ? 0: 1); // operador ternário

    // cout << "Resultado" << iResultado << endl;

    int iDia = 1;

    switch(iDia)
    {
        case 1:
            cout << "Segunda-feira" << endl;
            break;
        case 2:
            cout << "Terça-feira" << endl;
            break;
        case 3:
            cout << "Quarta-feira" << endl;
            break;
        case 4:
            cout << "Quinta-feira" << endl;
            break;
        default:
            cout << "Dia Louco" << endl;
    }

    return 0;
}
