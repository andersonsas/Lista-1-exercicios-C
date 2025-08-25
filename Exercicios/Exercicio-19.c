/*
    Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles
    e o resto da divisão do somatório por cada um dos valores.
*/
#include <stdio.h>

int main()
{
    int v1, v2, v3;
    int soma;
    float media;
    int resto1, resto2, resto3;

    printf("Digite tres valores inteiros separados por espaco: ");
    scanf("%d %d %d", &v1, &v2, &v3);
    // Calculando
    soma = v1 + v2 + v3;
    media = soma / 3.0;

    resto1 = soma % v1;
    resto2 = soma % v2;
    resto3 = soma % v3;
    // Saída
    printf("\nMedia: %.2f\n", media);
    printf("Somatorio: %d\n\n", soma);
    printf("Resto da divisao do somatorio por %d = %d\n", v1, resto1);
    printf("Resto da divisao do somatorio por %d = %d\n", v2, resto2);
    printf("Resto da divisao do somatorio por %d = %d\n\n", v3, resto3);
    return 0;
}