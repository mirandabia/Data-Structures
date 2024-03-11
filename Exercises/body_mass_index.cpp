#include <iostream>
#include <tuple>
using namespace std;

// Define uma estrutura para representar uma pessoa
struct Pessoa {
    float peso;
    float altura;
};

void calcularIMC(const Pessoa& pessoa) {
    float peso = pessoa.peso;
    float altura = pessoa.altura;

    float imc = peso / (altura * altura);

    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " m" << endl;

    cout << "IMC: " << imc << " - ";

    if (imc < 17)
        cout << "Muito abaixo do peso";
    else if (imc < 18.5)
        cout << "abaixo do peso";
    else if (imc < 25)
        cout << "Peso normal";
    else if (imc < 30)
        cout << "Acima do peso";
    else if (imc < 35)
        cout << "Obesidade";
    else if (imc < 40)
        cout << "Obesidade severa";
    else
        cout << "Obesidade mórbida";

    cout << endl << endl;
}

int main() {
    // Define as pessoas
    Pessoa pessoa1{50.0, 1.70};
    Pessoa pessoa2{68.0, 1.50};
    Pessoa pessoa3{77.0, 1.80};
    Pessoa pessoa4{80.0, 1.65};
    Pessoa pessoa5{120.0, 1.70};

    // Calcula e exibe o IMC de cada pessoa
    calcularIMC(pessoa1);
    calcularIMC(pessoa2);
    calcularIMC(pessoa3);
    calcularIMC(pessoa4);
    calcularIMC(pessoa5);

    return 0;
}