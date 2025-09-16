/*
    Fazer um programa que leia um conjunto de valores. Cada valor deverá ser armazenado na
    variável X. Para cada valor lido calcule e escreva o valor de Y pela fórmula: Y = 2.5*cos|X/2|.
    O último valor do conjunto de valores, cujo conteúdo não será processado, deverá conter um
    valor negativo.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // variáveis
    float x, y;

    do {
        printf("\nValor X: ");
        scanf("%f", &x); // entrada
        if (x < 0) break; // detecta entrada negativa

        y = 2.5 * cos(abs(x / 2)); // processa
        printf("----> Y: %.2f", y); // saída

    } while (1); // loop

    return 0;
}