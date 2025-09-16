/*
    Escrever um programa que leia 50 valores, encontre o maior e o menor e mostre o resultado.
*/

#include <stdio.h>

int main()
{
    // variáveis
    int valor, maior = 0, menor = 0, i = 1;

    do {
        printf("Valor (%d): ", i);
        scanf("%d", &valor); // entrada
        if (valor > maior) maior = valor; // verifica se a inserção é a maior
        if (valor < menor || menor == 0) menor = valor; // verifica se a inserção é menor
        i++;
    } while (i <= 50);

    // saída
    printf("Maior Valor: %d\n", maior);
    printf("Menor valor: %d", menor);

    return 0;
}