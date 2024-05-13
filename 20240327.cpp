#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int square(int*);

int somaVetor(const int[], const size_t);

int square(int* ptrNum)
{
    return *ptrNum * *ptrNum;
}

int somaVetor( const int valores[], const size_t tamVetor)
{
    return -1;
}

int main()
{
    // ponteiros são resetáveis
    // int* ptrInt = nullptr;

    // cout << "PTR: " << ptrInt << endl;
    // cout << "Endereço do PTR: " << &ptrInt << endl;
    // cout << "===================================================================" << endl;

    // int iNumMagico = 42;
    // cout << "Endereço de iNumMagico: " << &iNumMagico << endl;

    // ptrInt = &iNumMagico;

    // int iNumSagrado = 7;
    // cout << "Endereço de iNumSagrado: " << &iNumSagrado << endl;

    // ptrInt = &iNumSagrado;
    // cout << "PTR: " << ptrInt << endl;
    // cout << "Endereço do PTR: " << &ptrInt << endl;
    // cout << "Conteúdo do iNumSagrado: " << *ptrInt << endl;
    // cout << "===================================================================" << endl;
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    //// EXEMPLO 2

    // int iNum1 = 42;
    // int iNum2 = 666;

    // // ponteiro constante para inteiro
    // int* const ptrNum1 = &iNum1;
    // *ptrNum1 = 7;

    // //ERRO
    // //ptrNum1 = &iNum2;

    // // Ponteiro para inteiro constante
    // const int* ptrNum2 = &iNum1;
    // ptrNum2 = &iNum2;
    // //ERRO
    // //*ptrNum2 = 7;

    // // Ponteiro constante para inteiro constante
    // // const int* const ptrNum3 = &iNum1;
    
    // cout << "Quadrado: " << square(&iNum1) << endl;

    // int arriValores[3] = {0, 1, 2};

    // cout << "SomaVetor: " << somaVetor(arriValores, 3) << endl;

    // return 0;

    //////////////////////////////////////////////////////////////////////////////////////////////////

    // EXEMPLO 3

    int arriValores[5] = {0, 7, 13, 42, 666};
    cout << "Endereço de [0]: " << arriValores << endl;

    int* ptrArrayValores1 = arriValores;
    cout << "PTR1: " << ptrArrayValores1 << endl;

    int* ptrArrayValores2 = &arriValores[0];
    cout << "PTR2: " << ptrArrayValores2 << endl;

    cout << "====================================================================================" << endl;

    cout << "Valor de ptrArrayValores1[0]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[0]: " << ptrArrayValores1 << endl;

    ptrArrayValores1++;
    cout << "Valor de ptrArrayValores1[1]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[1]: " << ptrArrayValores1 << endl;

    ptrArrayValores1+=2;
    cout << "Valor de ptrArrayValores1[1]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[1]: " << ptrArrayValores1 << endl;

    cout << "Subtração de ponteiros: " << ptrArrayValores1 - ptrArrayValores2 << endl;
}