// O conceito de sinal e magnitude é uma maneira de representar números, especialmente em sistemas binários, onde cada número é representado por uma sequência de bits. 

// Na representação de sinal e magnitude, um bit é reservado para representar o sinal do número (0 para positivo e 1 para negativo), enquanto os outros bits representam a magnitude do número em si. Isso significa que o primeiro bit determina se o número é positivo ou negativo, e os bits restantes representam o valor absoluto do número.

// Por exemplo, considere um sistema de 4 bits:

// - O número 0 é representado como 0000 (positivo)
// - O número 1 é representado como 0001 (positivo)
// - O número -1 é representado como 1001 (negativo, onde o primeiro bit indica o sinal e os três bits restantes representam a magnitude, que é 1)
// - O número 5 é representado como 0101 (positivo)
// - O número -5 é representado como 1101 (negativo, onde o primeiro bit indica o sinal e os três bits restantes representam a magnitude, que é 5)

// Uma outra abordagem para representar números negativos é através do complemento de 2, que é uma técnica comumente usada em computação para representar números negativos em binário. O complemento de 2 de um número é obtido invertendo todos os bits do número e adicionando 1 ao resultado.

// Por exemplo:

// - O número 0 em binário é 0000, e seu complemento de 2 é 0000 (pois 0000 invertido é 1111 e adicionando 1 ao resultado temos 0000).
// - O número 1 em binário é 0001, e seu complemento de 2 é 1111 (pois 0001 invertido é 1110 e adicionando 1 ao resultado temos 1111).

// Essa representação maximiza a quantidade de números inteiros que podem ser representados, permitindo que tanto números positivos quanto negativos sejam representados usando a mesma quantidade de bits. Isso é importante em sistemas computacionais, onde é necessário lidar com uma ampla variedade de valores numéricos de forma eficiente.