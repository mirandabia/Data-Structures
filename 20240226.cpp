/*

Formatos para representação de números em ponto flutuante: meia-precisão, precisão simples e dupla precisão. 
Esses formatos são importantes em computação numérica, onde é necessário lidar com números reais de forma eficiente.

O padrão IEEE 754 é um padrão amplamente utilizado para representação de números em ponto flutuante em sistemas computacionais. 
Ele define o formato de representação de números de ponto flutuante, incluindo o sinal da mantissa, o expoente viesado (bias) e a mantissa normalizada (significante). Esses componentes são essenciais para representar números de forma precisa e eficiente, garantindo que operações matemáticas possam ser realizadas com precisão.

O conceito de ordenação (endianness) descreve as diferentes maneiras pelas quais os bytes de dados podem ser armazenados na memória. 
No Little-Endian, os bytes de menor ordem são armazenados primeiro, enquanto no Big-Endian, os bytes de maior ordem são armazenados primeiro. 
Essa distinção é relevante ao lidar com sistemas que possuem diferentes arquiteturas de processadores.

*/

#include <iostream>

using std::cout;
using std::endl;


int main() {
    auto i = 1;

    cout << "Exemplo de incrementos: " << "\n";
    cout << "Valor de i - " << i << "\n";
    
    auto c_pre = ++i; // Incrementa i e depois retorna o valor
    auto c_pos = i++; // Retorna o valor de i e depois incrementa

    cout << "Valor de c_pre - " << c_pre << "\n"; 
    cout << "Valor de i - " << i << "\n"; 
    
    int iNum = 42;
    
    cout << "Valor de Num: " << iNum << endl;
    cout << "Endereço de Num: " << &iNum << endl;
    
    return 0;
}