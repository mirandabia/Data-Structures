/*

As linguagens de programação podem ser classificadas em dois principais paradigmas: puramente interpretadas e compiladas. 

As linguagens puramente interpretadas, como Java e Python, são desenvolvidas com base na convenção entre os humanos. Isso significa que, ao escrever o código, é necessário um software específico para interpretar e executar as instruções. Em outras palavras, o código escrito em linguagens interpretadas não é diretamente traduzido em instruções de máquina, mas sim interpretado por um programa intermediário.

Por outro lado, as linguagens compiladas, como B, BCpL, C, C++ e C#, são projetadas com o objetivo de serem transformadas em linguagem de máquina, compreensível pelo hardware do computador. Esse processo é realizado por meio de um compilador, que traduz o código fonte escrito pelo programador em um conjunto de instruções em linguagem de máquina. O resultado desse processo é um arquivo executável que pode ser diretamente executado pelo sistema operacional.

Um conceito importante relacionado às linguagens compiladas é o Princípio do Zero Overhead, que significa que "o que você não usa, você não paga". Isso significa que as linguagens compiladas são otimizadas para eliminar qualquer sobrecarga (overhead) desnecessária, garantindo que o código final seja eficiente e execute apenas as operações essenciais para a funcionalidade do programa. Essa abordagem ajuda a garantir um desempenho eficiente e a utilização adequada dos recursos do sistema.
*/
#include <cstdio>

// Implemente a função isqrt que recebe um número inteiro n e retorna a raiz quadrada inteira de n.
constexpr int isqrt(int n)
{ 
    int i=1;
    while (i*i<n) ++i;
    return i-(i*i!=n);
}

int main() 
{
    // Teste da função isqrt
    constexpr int x = isqrt(1764);
    printf("%d", x);
}