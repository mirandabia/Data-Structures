#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void troca(int&, int&);
int& trocaElemento(int, int[]);


void troca(int& irefValor1, int& irefValor2)
{
    int iTemp = irefValor1;
    irefValor1 = irefValor2;
    irefValor2 = iTemp;
}

int& trocaElemento(int iElemento, int arriVetor[])
{
    return arriVetor[iElemento];
}

int main()
{
    string strNome = "Yuri Saporito";
    int iValor = 42;
    int iValorFuturo = 666;

    cout << "Valor da String: " << strNome << ". Endereço da String: " << &strNome << endl;
    cout << "Valor do Inteiro: " << iValor << ". Endereço do Inteiro: " << &iValor << endl;
    cout << "===================================================================" << endl;

    string strrefNome = strNome;
    int irefValor = iValor;

    cout << "Valor da Ref.String: " << strrefNome << ". Endereço da Ref String: " << &strrefNome << endl;
    cout << "Valor da Ref Inteiro: " << irefValor << ". Endereço da Ref Inteiro: " << &irefValor << endl;
    cout << "===================================================================" << endl;

    strrefNome = "C Camacho";
    irefValor = iValorFuturo;

    cout << "Valor da Ref.String: " << strrefNome << ". Endereço da Ref String: " << &strrefNome << endl;
    cout << "Valor da Ref Inteiro: " << irefValor << ". Endereço da Ref Inteiro: " << &irefValor << endl;
    cout << "===================================================================" << endl;

    int iNum1 = 10;
    int iNum2 = 20;

    troca(iNum1, iNum2);

    cout << "iNum1: " << iNum1 << endl;
    cout << "iNum2: " << iNum2 << endl;

    cout << "===================================================================" << endl;

    int arriVetor[5] = {0, 7, 13, 42, 666};

    for (int i = 0; i < 5; i++)
    {
        cout << "Vetor[" << i << "] = " << arriVetor[i] << endl;
    }

    trocaElemento(4, arriVetor) = 111;

    for (int i = 0; i < 5; i++)
    {
        cout << "Vetor[" << i << "] = " << arriVetor[i] << endl;
    }

    cout << "===================================================================" << endl;

    return 0;
}