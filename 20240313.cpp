#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;


// The C Programming Language
// Brian W. Kernighan and Dennis M. Ritchie
// assinatura e protótipo de função
//End. Base + 4*Index
//polimorfismo estatico

// void frasePreferida()
// {
//     cout << "Eu adoro a EMAp!" << endl;
// }

// void montaFrase(char chArtigo, string strPalavra)
// {
//     cout << "Eu adoro " << chArtigo << " " << strPalavra << "!" << endl;
// }

// void montaFrasePadrao(char chArtigo, string strPalavra = "EMAp")
// {
//     cout << "Eu adoro " << chArtigo << " " << strPalavra << "!" << endl;
// }

// int potenciacao(int iBase, int iExpoente)
// {
//     return pow(iBase, iExpoente);
// }

// int modulo(float iValor)
// {
//     return fabs(iValor);
// }

// void minhaFuncao(int arriNumeros[], int iTamanhoVetor)
// {
//     for(int i = 0; i < iTamanhoVetor; i++)
//     {
//         cout << arriNumeros[i] << endl;
    
//     }
// }

int soma(int iValor1, int iValor2)
{
    return iValor1 + iValor2;
}

int soma(int iValor1, int iValor2, int iValor3)
{
    return iValor1 + iValor2 + iValor3;
}

int main()
{
    // frasePreferida();

    // montaFrasePadrao('o', "Yuri");

    // cout << potenciacao(2, 3) << endl;

    // cout << modulo(2.7) << endl;

    // cout << modulo(-2.7) << endl;

   

    // int arriVetorTeste[5] = {0, 7, 13, 42, 666};
    // int iTamanhoVetor = sizeof(arriVetorTeste)/sizeof(arriVetorTeste[0]);

    // minhaFuncao(arriVetorTeste, iTamanhoVetor);

    int iNum1 = 10;
    int iNum2 = 20;
    int iNum3 = 30;
    cout << soma(iNum1, iNum2) << endl;
    cout << soma(iNum1, iNum2, iNum3) << endl;

    cout << "=====================================================" << endl;

    return 0;
}