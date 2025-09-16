/*
    Construa um algoritmo que leia dois números inteiros positivos e determine
    o MDC (máximo divisor comum) entre eles utilizando o algoritmo de Euclides.
*/

#include <stdio.h>

int main()
{
    int a, b, resto; // variaveis

    printf("*** MÁXIMO DIVISOR COMUM ***\n");
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &a, &b); // solicita dados

    while (b != 0) {   // enquanto b for diferente de 0
        resto = a % b; // calcula o resto da divisão
        a = b;         // atribui b à a
        b = resto;     // atribui o resto ao b
    }

    printf("O MDC é: %d\n", a); // imprime o resultado
    return 0;
}