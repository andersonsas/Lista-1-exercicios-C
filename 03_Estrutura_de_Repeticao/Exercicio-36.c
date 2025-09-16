/*
    Construir um programa que some todos os números fornecidos pelo usuário até que o número
    lido seja iguala a zero e mostre a soma.
*/

#include <stdio.h>

int main()
{
    // variáveis
    int num, somatorio = 0;

    // entrada de dados e processamento
    do {
        printf("Digite números inteiro ( 0 para finalizar): ");
        scanf("%d", &num);

        // acumula
        somatorio += num;
    } while (num != 0);

    // saída
    printf("A soma de todos números: %d", somatorio);

    return 0;
}